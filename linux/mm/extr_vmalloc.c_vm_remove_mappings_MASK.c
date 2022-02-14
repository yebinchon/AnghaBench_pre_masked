
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_struct {int flags; int nr_pages; int * pages; int addr; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long,unsigned long,int) ;
 unsigned long FUNC_1 (scalar_t__,unsigned long) ;
 unsigned long FUNC_2 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct vm_struct*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct vm_struct *VAR_5, int VAR_6)
{
 unsigned long VAR_7 = VAR_1, VAR_8 = 0;
 int VAR_9 = VAR_5->flags & VAR_2;
 int VAR_10 = 0;
 int VAR_11;

 FUNC_4(VAR_5->addr);


 if (!VAR_9)
  return;





 if (!VAR_6) {
  FUNC_6();
  return;
 }






 for (VAR_11 = 0; VAR_11 < VAR_5->nr_pages; VAR_11++) {
  unsigned long VAR_12 = (unsigned long)FUNC_3(VAR_5->pages[VAR_11]);
  if (VAR_12) {
   VAR_7 = FUNC_2(VAR_12, VAR_7);
   VAR_8 = FUNC_1(VAR_12 + VAR_0, VAR_8);
   VAR_10 = 1;
  }
 }






 FUNC_5(VAR_5, VAR_4);
 FUNC_0(VAR_7, VAR_8, VAR_10);
 FUNC_5(VAR_5, VAR_3);
}
