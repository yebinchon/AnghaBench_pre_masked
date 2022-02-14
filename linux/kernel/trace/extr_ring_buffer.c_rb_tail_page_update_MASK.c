
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ring_buffer_per_cpu {int tail_page; int pages_touched; } ;
struct buffer_page {TYPE_1__* page; int entries; int write; } ;
struct TYPE_2__ {int commit; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 struct buffer_page* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,struct buffer_page*,struct buffer_page*) ;
 unsigned long FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,unsigned long,unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void FUNC_7(struct ring_buffer_per_cpu *VAR_2,
          struct buffer_page *VAR_3,
          struct buffer_page *VAR_4)
{
 unsigned long VAR_5;
 unsigned long VAR_6;
 VAR_6 = FUNC_3(VAR_0, &VAR_4->write);
 VAR_5 = FUNC_3(VAR_0, &VAR_4->entries);

 FUNC_5(&VAR_2->pages_touched);




 FUNC_1();






 if (VAR_3 == FUNC_0(VAR_2->tail_page)) {

  unsigned long VAR_7 = VAR_6 & ~VAR_1;
  unsigned long VAR_8 = VAR_5 & ~VAR_1;
  (void)FUNC_4(&VAR_4->write, VAR_6, VAR_7);
  (void)FUNC_4(&VAR_4->entries, VAR_5, VAR_8);






  FUNC_6(&VAR_4->page->commit, 0);


  (void)FUNC_2(&VAR_2->tail_page, VAR_3, VAR_4);
 }
}
