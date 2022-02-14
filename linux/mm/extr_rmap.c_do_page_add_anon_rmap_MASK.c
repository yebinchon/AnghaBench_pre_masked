
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct page {int _mapcount; } ;
typedef int atomic_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int,struct page*) ;
 int FUNC_4 (struct page*,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct page*,struct vm_area_struct*,unsigned long) ;
 int FUNC_7 (struct page*,struct vm_area_struct*,unsigned long,int) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;
 scalar_t__ FUNC_12 (int ) ;

void FUNC_13(struct page *VAR_4,
 struct vm_area_struct *VAR_5, unsigned long VAR_6, int VAR_7)
{
 bool VAR_8 = VAR_7 & VAR_2;
 bool VAR_9;

 if (VAR_8) {
  atomic_t *VAR_10;
  FUNC_3(!FUNC_1(VAR_4), VAR_4);
  FUNC_3(!FUNC_2(VAR_4), VAR_4);
  VAR_10 = FUNC_9(VAR_4);
  VAR_9 = FUNC_8(VAR_10);
 } else {
  VAR_9 = FUNC_8(&VAR_4->_mapcount);
 }

 if (VAR_9) {
  int VAR_11 = VAR_8 ? FUNC_10(VAR_4) : 1;






  if (VAR_8)
   FUNC_4(VAR_4, VAR_1);
  FUNC_5(FUNC_11(VAR_4), VAR_0, VAR_11);
 }
 if (FUNC_12(FUNC_0(VAR_4)))
  return;

 FUNC_3(!FUNC_1(VAR_4), VAR_4);


 if (VAR_9)
  FUNC_7(VAR_4, VAR_5, VAR_6,
    VAR_7 & VAR_3);
 else
  FUNC_6(VAR_4, VAR_5, VAR_6);
}
