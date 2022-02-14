
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int val; } ;
typedef TYPE_1__ swp_entry_t ;
struct swap_info_struct {int flags; int lock; } ;
struct page {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int VAR_0 ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (int,struct page*) ;
 struct page* FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*,int*,int*) ;
 int FUNC_13 (int *) ;
 struct swap_info_struct* FUNC_14 (TYPE_1__) ;
 scalar_t__ FUNC_15 (int ) ;

bool FUNC_16(struct page *VAR_1, int *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 FUNC_6(!FUNC_1(VAR_1), VAR_1);
 if (FUNC_15(FUNC_0(VAR_1)))
  return 0;
 VAR_3 = FUNC_12(VAR_1, &VAR_4,
           &VAR_5);
 if (VAR_2)
  *VAR_2 = VAR_4 + VAR_5;
 if (VAR_3 == 1 && FUNC_2(VAR_1) &&
     (FUNC_9(!FUNC_3(VAR_1)) ||

      VAR_5 == FUNC_11(VAR_1))) {
  if (!FUNC_4(VAR_1)) {
   VAR_1 = FUNC_7(VAR_1);
   FUNC_8(VAR_1);
   FUNC_5(VAR_1);
  } else {
   swp_entry_t VAR_6;
   struct swap_info_struct *VAR_7;

   VAR_6.val = FUNC_10(VAR_1);
   VAR_7 = FUNC_14(VAR_6);
   if (VAR_7->flags & VAR_0) {
    FUNC_13(&VAR_7->lock);
    return 0;
   }
   FUNC_13(&VAR_7->lock);
  }
 }

 return VAR_3 <= 1;
}
