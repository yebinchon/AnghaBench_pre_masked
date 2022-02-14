
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int mapping; } ;
struct anon_vma {int dummy; } ;
typedef enum migrate_mode { ____Placeholder_migrate_mode } migrate_mode ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int,struct page*) ;
 int FUNC_4 (struct page*) ;
 TYPE_1__* VAR_8 ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*,struct page*,int) ;
 struct anon_vma* FUNC_7 (struct page*) ;
 scalar_t__ FUNC_8 (struct page*) ;
 scalar_t__ FUNC_9 (struct page*) ;
 int FUNC_10 (struct anon_vma*) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (struct page*,struct page*,int) ;
 int FUNC_14 (struct page*) ;
 int FUNC_15 (struct page*,int) ;
 int FUNC_16 (struct page*) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 (struct page*) ;
 int FUNC_19 (struct page*) ;

__attribute__((used)) static int FUNC_20(struct page *VAR_9, struct page *VAR_10,
    int VAR_11, enum migrate_mode VAR_12)
{
 int VAR_13 = -VAR_0;
 int VAR_14 = 0;
 struct anon_vma *VAR_15 = ((void*)0);
 bool VAR_16 = !FUNC_4(VAR_9);

 if (!FUNC_16(VAR_9)) {
  if (!VAR_11 || VAR_12 == VAR_3)
   goto out;
  if (VAR_8->flags & VAR_4)
   goto out;

  FUNC_5(VAR_9);
 }

 if (FUNC_2(VAR_9)) {






  switch (VAR_12) {
  case 129:
  case 128:
   break;
  default:
   VAR_13 = -VAR_1;
   goto out_unlock;
  }
  if (!VAR_11)
   goto out_unlock;
  FUNC_19(VAR_9);
 }
 if (FUNC_0(VAR_9) && !FUNC_1(VAR_9))
  VAR_15 = FUNC_7(VAR_9);
 if (FUNC_17(!FUNC_16(VAR_10)))
  goto out_unlock;

 if (FUNC_17(!VAR_16)) {
  VAR_13 = FUNC_6(VAR_10, VAR_9, VAR_12);
  goto out_unlock_both;
 }
 if (!VAR_9->mapping) {
  FUNC_3(FUNC_0(VAR_9), VAR_9);
  if (FUNC_8(VAR_9)) {
   FUNC_14(VAR_9);
   goto out_unlock_both;
  }
 } else if (FUNC_9(VAR_9)) {

  FUNC_3(FUNC_0(VAR_9) && !FUNC_1(VAR_9) && !VAR_15,
    VAR_9);
  FUNC_15(VAR_9,
   VAR_7|VAR_6|VAR_5);
  VAR_14 = 1;
 }

 if (!FUNC_9(VAR_9))
  VAR_13 = FUNC_6(VAR_10, VAR_9, VAR_12);

 if (VAR_14)
  FUNC_13(VAR_9,
   VAR_13 == VAR_2 ? VAR_10 : VAR_9, 0);

out_unlock_both:
 FUNC_18(VAR_10);
out_unlock:

 if (VAR_15)
  FUNC_10(VAR_15);
 FUNC_18(VAR_9);
out:
 if (VAR_13 == VAR_2) {
  if (FUNC_17(!VAR_16))
   FUNC_11(VAR_10);
  else
   FUNC_12(VAR_10);
 }

 return VAR_13;
}
