
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
struct page {int dummy; } ;
typedef int pte_t ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;
 scalar_t__ FUNC_10 (struct page*,struct page*) ;
 int FUNC_11 (struct vm_area_struct*,struct page*,struct page*,int ) ;
 int FUNC_12 (struct page*,int *) ;
 scalar_t__ FUNC_13 (struct page*) ;
 int FUNC_14 (struct page*) ;
 int FUNC_15 (struct page*) ;
 scalar_t__ FUNC_16 (struct vm_area_struct*,struct page*,int *) ;

__attribute__((used)) static int FUNC_17(struct vm_area_struct *VAR_2,
     struct page *VAR_3, struct page *VAR_4)
{
 pte_t VAR_5 = FUNC_5(0);
 int VAR_6 = -VAR_0;

 if (VAR_3 == VAR_4)
  return 0;

 if (!FUNC_0(VAR_3))
  goto out;
 if (!FUNC_14(VAR_3))
  goto out;

 if (FUNC_3(VAR_3)) {
  if (FUNC_13(VAR_3))
   goto out_unlock;
 }







 if (FUNC_16(VAR_2, VAR_3, &VAR_5) == 0) {
  if (!VAR_4) {





   FUNC_12(VAR_3, ((void*)0));
   FUNC_7(VAR_3);




   if (!FUNC_1(VAR_3))
    FUNC_4(VAR_3);
   VAR_6 = 0;
  } else if (FUNC_10(VAR_3, VAR_4))
   VAR_6 = FUNC_11(VAR_2, VAR_3, VAR_4, VAR_5);
 }

 if ((VAR_2->vm_flags & VAR_1) && VAR_4 && !VAR_6) {
  FUNC_9(VAR_3);
  if (!FUNC_2(VAR_4)) {
   FUNC_15(VAR_3);
   FUNC_6(VAR_4);
   FUNC_8(VAR_4);
   VAR_3 = VAR_4;
  }
 }

out_unlock:
 FUNC_15(VAR_3);
out:
 return VAR_6;
}
