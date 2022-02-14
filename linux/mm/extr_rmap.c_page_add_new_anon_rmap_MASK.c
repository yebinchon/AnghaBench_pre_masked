
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; } ;
struct page {int _mapcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int,struct page*) ;
 int FUNC_3 (int,struct vm_area_struct*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*,int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct page*,struct vm_area_struct*,unsigned long,int) ;
 int FUNC_8 (int *,int ) ;
 int * FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;

void FUNC_12(struct page *VAR_2,
 struct vm_area_struct *VAR_3, unsigned long VAR_4, bool VAR_5)
{
 int VAR_6 = VAR_5 ? FUNC_10(VAR_2) : 1;

 FUNC_3(VAR_4 < VAR_3->vm_start || VAR_4 >= VAR_3->vm_end, VAR_3);
 FUNC_4(VAR_2);
 if (VAR_5) {
  FUNC_2(!FUNC_1(VAR_2), VAR_2);

  FUNC_8(FUNC_9(VAR_2), 0);
  FUNC_5(VAR_2, VAR_1);
 } else {

  FUNC_2(FUNC_0(VAR_2), VAR_2);

  FUNC_8(&VAR_2->_mapcount, 0);
 }
 FUNC_6(FUNC_11(VAR_2), VAR_0, VAR_6);
 FUNC_7(VAR_2, VAR_3, VAR_4, 1);
}
