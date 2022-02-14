
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct anon_vma {int dummy; } ;
typedef struct page* (* new_page_t ) (struct page*,unsigned long) ;
typedef int (* free_page_t ) (struct page*,unsigned long) ;
typedef enum migrate_mode { ____Placeholder_migrate_mode } migrate_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 scalar_t__ FUNC_0 (struct page*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*,struct page*,int) ;
 int FUNC_4 (struct page*,struct page*,int) ;
 struct anon_vma* FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 scalar_t__ FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 scalar_t__ FUNC_9 (struct page*) ;
 int FUNC_10 (struct anon_vma*) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*,struct page*,int) ;
 int FUNC_13 (struct page*,int) ;
 int FUNC_14 (struct page*) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (struct page*) ;

__attribute__((used)) static int FUNC_17(new_page_t VAR_8,
    free_page_t VAR_9, unsigned long VAR_10,
    struct page *VAR_11, int VAR_12,
    enum migrate_mode VAR_13, int VAR_14)
{
 int VAR_15 = -VAR_0;
 int VAR_16 = 0;
 struct page *VAR_17;
 struct anon_vma *VAR_18 = ((void*)0);
 if (!FUNC_1(FUNC_6(VAR_11))) {
  FUNC_11(VAR_11);
  return -VAR_3;
 }

 VAR_17 = VAR_8(VAR_11, VAR_10);
 if (!VAR_17)
  return -VAR_2;

 if (!FUNC_14(VAR_11)) {
  if (!VAR_12)
   goto out;
  switch (VAR_13) {
  case 129:
  case 128:
   break;
  default:
   goto out;
  }
  FUNC_2(VAR_11);
 }






 if (FUNC_9(VAR_11) && !FUNC_8(VAR_11)) {
  VAR_15 = -VAR_1;
  goto out_unlock;
 }

 if (FUNC_0(VAR_11))
  VAR_18 = FUNC_5(VAR_11);

 if (FUNC_15(!FUNC_14(VAR_17)))
  goto put_anon;

 if (FUNC_7(VAR_11)) {
  FUNC_13(VAR_11,
   VAR_7|VAR_6|VAR_5);
  VAR_16 = 1;
 }

 if (!FUNC_7(VAR_11))
  VAR_15 = FUNC_4(VAR_17, VAR_11, VAR_13);

 if (VAR_16)
  FUNC_12(VAR_11,
   VAR_15 == VAR_4 ? VAR_17 : VAR_11, 0);

 FUNC_16(VAR_17);

put_anon:
 if (VAR_18)
  FUNC_10(VAR_18);

 if (VAR_15 == VAR_4) {
  FUNC_3(VAR_11, VAR_17, VAR_14);
  VAR_9 = ((void*)0);
 }

out_unlock:
 FUNC_16(VAR_11);
out:
 if (VAR_15 != -VAR_0)
  FUNC_11(VAR_11);






 if (VAR_9)
  VAR_9(VAR_17, VAR_10);
 else
  FUNC_11(VAR_17);

 return VAR_15;
}
