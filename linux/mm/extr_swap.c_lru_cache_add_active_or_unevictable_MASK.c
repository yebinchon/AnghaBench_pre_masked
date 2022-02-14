
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int VAR_1 ;
 int FUNC_3 (int ,struct page*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct page*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;

void FUNC_10(struct page *VAR_4,
      struct vm_area_struct *VAR_5)
{
 FUNC_3(FUNC_0(VAR_4), VAR_4);

 if (FUNC_7((VAR_5->vm_flags & (VAR_2 | VAR_3)) != VAR_2))
  FUNC_1(VAR_4);
 else if (!FUNC_2(VAR_4)) {





  FUNC_4(FUNC_9(VAR_4), VAR_0,
        FUNC_6(VAR_4));
  FUNC_5(VAR_1);
 }
 FUNC_8(VAR_4);
}
