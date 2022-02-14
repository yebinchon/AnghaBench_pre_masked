
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;
struct hstate {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (int) ;
 long FUNC_3 (struct hstate*,struct vm_area_struct*,unsigned long) ;
 int FUNC_4 (struct hstate*,struct vm_area_struct*,unsigned long) ;
 long FUNC_5 (struct hstate*,struct vm_area_struct*,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct hstate *VAR_0,
   struct vm_area_struct *VAR_1, unsigned long VAR_2,
   struct page *VAR_3)
{
 if (FUNC_2(FUNC_1(VAR_3))) {
  long VAR_4 = FUNC_5(VAR_0, VAR_1, VAR_2);

  if (FUNC_2(VAR_4 < 0)) {
   FUNC_0(VAR_3);
  } else if (VAR_4) {
   VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_2);
   if (FUNC_2(VAR_4 < 0))




    FUNC_0(VAR_3);
  } else
   FUNC_4(VAR_0, VAR_1, VAR_2);
 }
}
