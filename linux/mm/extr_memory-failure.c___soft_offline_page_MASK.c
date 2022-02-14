
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int flags; int lru; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*,scalar_t__) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (int *,int ,int *,int ,int ,int ) ;
 int VAR_7 ;
 int FUNC_13 () ;
 int FUNC_14 (struct page*) ;
 scalar_t__ FUNC_15 (struct page*) ;
 unsigned long FUNC_16 (struct page*) ;
 int VAR_8 ;
 int FUNC_17 (char*,unsigned long,...) ;
 int FUNC_18 (struct page*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct page*) ;
 int FUNC_21 (struct page*) ;

__attribute__((used)) static int FUNC_22(struct page *VAR_9, int VAR_10)
{
 int VAR_11;
 unsigned long VAR_12 = FUNC_16(VAR_9);







 FUNC_11(VAR_9);
 FUNC_21(VAR_9);
 if (FUNC_1(VAR_9)) {
  FUNC_20(VAR_9);
  FUNC_18(VAR_9);
  FUNC_17("soft offline: %#lx page already poisoned\n", VAR_12);
  return -VAR_0;
 }




 VAR_11 = FUNC_6(VAR_9);
 FUNC_20(VAR_9);




 if (VAR_11 == 1) {
  FUNC_18(VAR_9);
  FUNC_17("soft_offline: %#lx: invalidated\n", VAR_12);
  FUNC_3(VAR_9);
  FUNC_13();
  return 0;
 }






 if (FUNC_2(VAR_9))
  VAR_11 = FUNC_7(VAR_9);
 else
  VAR_11 = FUNC_8(VAR_9, VAR_2);




 FUNC_18(VAR_9);
 if (!VAR_11) {
  FUNC_0(VAR_8);





  if (!FUNC_4(VAR_9))
   FUNC_5(VAR_9, VAR_6 +
      FUNC_15(VAR_9));
  FUNC_9(&VAR_9->lru, &VAR_8);
  VAR_11 = FUNC_12(&VAR_8, VAR_7, ((void*)0), VAR_4,
     VAR_3, VAR_5);
  if (VAR_11) {
   if (!FUNC_10(&VAR_8))
    FUNC_19(&VAR_8);

   FUNC_17("soft offline: %#lx: migration failed %d, type %lx (%pGp)\n",
    VAR_12, VAR_11, VAR_9->flags, &VAR_9->flags);
   if (VAR_11 > 0)
    VAR_11 = -VAR_1;
  }
 } else {
  FUNC_17("soft offline: %#lx: isolation failed: %d, page count %d, type %lx (%pGp)\n",
   VAR_12, VAR_11, FUNC_14(VAR_9), VAR_9->flags, &VAR_9->flags);
 }
 return VAR_11;
}
