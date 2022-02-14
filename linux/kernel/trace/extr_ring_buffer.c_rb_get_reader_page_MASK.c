
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ring_buffer_per_cpu {unsigned long last_overrun; unsigned long lost_events; int lock; int read_stamp; struct buffer_page* reader_page; int pages_read; int head_page; int overrun; int pages; struct buffer_page* commit_page; } ;
struct TYPE_6__ {TYPE_3__* next; int prev; } ;
struct buffer_page {scalar_t__ read; TYPE_1__* page; TYPE_2__ list; scalar_t__ real_end; int entries; int write; } ;
struct TYPE_7__ {TYPE_2__* prev; } ;
struct TYPE_5__ {int time_stamp; int commit; } ;


 scalar_t__ FUNC_0 (struct ring_buffer_per_cpu*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 unsigned long FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (struct buffer_page*,struct buffer_page*) ;
 int FUNC_9 (struct ring_buffer_per_cpu*,int *) ;
 TYPE_3__* FUNC_10 (TYPE_3__*) ;
 scalar_t__ FUNC_11 (struct ring_buffer_per_cpu*) ;
 scalar_t__ FUNC_12 (struct buffer_page*) ;
 struct buffer_page* FUNC_13 (struct ring_buffer_per_cpu*) ;
 int FUNC_14 (struct ring_buffer_per_cpu*,TYPE_2__*) ;
 int FUNC_15 () ;

__attribute__((used)) static struct buffer_page *
FUNC_16(struct ring_buffer_per_cpu *VAR_0)
{
 struct buffer_page *VAR_1 = ((void*)0);
 unsigned long VAR_2;
 unsigned long VAR_3;
 int VAR_4 = 0;
 int VAR_5;

 FUNC_5(VAR_3);
 FUNC_1(&VAR_0->lock);

 again:






 if (FUNC_0(VAR_0, ++VAR_4 > 3)) {
  VAR_1 = ((void*)0);
  goto out;
 }

 VAR_1 = VAR_0->reader_page;


 if (VAR_0->reader_page->read < FUNC_12(VAR_1))
  goto out;


 if (FUNC_0(VAR_0,
         VAR_0->reader_page->read > FUNC_12(VAR_1)))
  goto out;


 VAR_1 = ((void*)0);
 if (VAR_0->commit_page == VAR_0->reader_page)
  goto out;


 if (FUNC_11(VAR_0) == 0)
  goto out;




 FUNC_7(&VAR_0->reader_page->write, 0);
 FUNC_7(&VAR_0->reader_page->entries, 0);
 FUNC_7(&VAR_0->reader_page->page->commit, 0);
 VAR_0->reader_page->real_end = 0;

 spin:



 VAR_1 = FUNC_13(VAR_0);
 if (!VAR_1)
  goto out;
 VAR_0->reader_page->list.next = FUNC_10(VAR_1->list.next);
 VAR_0->reader_page->list.prev = VAR_1->list.prev;






 VAR_0->pages = VAR_1->list.prev;


 FUNC_14(VAR_0, &VAR_0->reader_page->list);
 FUNC_15();
 VAR_2 = FUNC_6(&(VAR_0->overrun));
 VAR_5 = FUNC_8(VAR_1, VAR_0->reader_page);




 if (!VAR_5)
  goto spin;






 FUNC_10(VAR_1->list.next)->prev = &VAR_0->reader_page->list;
 FUNC_9(VAR_0, &VAR_0->head_page);

 FUNC_3(&VAR_0->pages_read);


 VAR_0->reader_page = VAR_1;
 VAR_0->reader_page->read = 0;

 if (VAR_2 != VAR_0->last_overrun) {
  VAR_0->lost_events = VAR_2 - VAR_0->last_overrun;
  VAR_0->last_overrun = VAR_2;
 }

 goto again;

 out:

 if (VAR_1 && VAR_1->read == 0)
  VAR_0->read_stamp = VAR_1->page->time_stamp;

 FUNC_2(&VAR_0->lock);
 FUNC_4(VAR_3);

 return VAR_1;
}
