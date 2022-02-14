
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct page*) ;
 struct page* FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (int *,int ,int *,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_8 () ;
 unsigned long FUNC_9 (struct page*) ;
 int VAR_6 ;
 int FUNC_10 (char*,unsigned long,...) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (struct page*) ;
 int FUNC_14 (struct page*) ;

__attribute__((used)) static int FUNC_15(struct page *VAR_7, int VAR_8)
{
 int VAR_9;
 unsigned long VAR_10 = FUNC_9(VAR_7);
 struct page *VAR_11 = FUNC_2(VAR_7);
 FUNC_0(VAR_6);





 FUNC_6(VAR_11);
 if (FUNC_1(VAR_11)) {
  FUNC_14(VAR_11);
  FUNC_11(VAR_11);
  FUNC_10("soft offline: %#lx hugepage already poisoned\n", VAR_10);
  return -VAR_0;
 }
 FUNC_14(VAR_11);

 VAR_9 = FUNC_4(VAR_11, &VAR_6);




 FUNC_11(VAR_11);
 if (!VAR_9) {
  FUNC_10("soft offline: %#lx hugepage failed to isolate\n", VAR_10);
  return -VAR_0;
 }

 VAR_9 = FUNC_7(&VAR_6, VAR_5, ((void*)0), VAR_3,
    VAR_2, VAR_4);
 if (VAR_9) {
  FUNC_10("soft offline: %#lx: hugepage migration failed %d, type %lx (%pGp)\n",
   VAR_10, VAR_9, VAR_7->flags, &VAR_7->flags);
  if (!FUNC_5(&VAR_6))
   FUNC_12(&VAR_6);
  if (VAR_9 > 0)
   VAR_9 = -VAR_1;
 } else {







  VAR_9 = FUNC_3(VAR_7);
  if (!VAR_9) {
   if (FUNC_13(VAR_7))
    FUNC_8();
   else
    VAR_9 = -VAR_0;
  }
 }
 return VAR_9;
}
