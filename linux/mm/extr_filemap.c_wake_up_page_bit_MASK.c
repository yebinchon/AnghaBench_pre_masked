
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int lock; } ;
typedef TYPE_1__ wait_queue_head_t ;
struct TYPE_8__ {int flags; int entry; int * func; int * private; } ;
typedef TYPE_2__ wait_queue_entry_t ;
struct wait_page_key {int bit_nr; scalar_t__ page_match; struct page* page; } ;
struct page {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int ,struct wait_page_key*,TYPE_2__*) ;
 int FUNC_3 () ;
 TYPE_1__* FUNC_4 (struct page*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_8(struct page *VAR_2, int VAR_3)
{
 wait_queue_head_t *VAR_4 = FUNC_4(VAR_2);
 struct wait_page_key VAR_5;
 unsigned long VAR_6;
 wait_queue_entry_t VAR_7;

 VAR_5.page = VAR_2;
 VAR_5.bit_nr = VAR_3;
 VAR_5.page_match = 0;

 VAR_7.flags = 0;
 VAR_7.private = ((void*)0);
 VAR_7.func = ((void*)0);
 FUNC_1(&VAR_7.entry);

 FUNC_5(&VAR_4->lock, VAR_6);
 FUNC_2(VAR_4, VAR_0, &VAR_5, &VAR_7);

 while (VAR_7.flags & VAR_1) {






  FUNC_6(&VAR_4->lock, VAR_6);
  FUNC_3();
  FUNC_5(&VAR_4->lock, VAR_6);
  FUNC_2(VAR_4, VAR_0, &VAR_5, &VAR_7);
 }
 if (!FUNC_7(VAR_4) || !VAR_5.page_match) {
  FUNC_0(VAR_2);







 }
 FUNC_6(&VAR_4->lock, VAR_6);
}
