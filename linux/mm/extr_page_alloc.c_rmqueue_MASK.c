
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int flags; int lock; } ;
struct page {int dummy; } ;
typedef int gfp_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,struct page*) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct zone*,int,int ) ;
 struct page* FUNC_4 (struct zone*,unsigned int,int,unsigned int) ;
 struct page* FUNC_5 (struct zone*,unsigned int,int ) ;
 scalar_t__ FUNC_6 (struct zone*,struct page*) ;
 scalar_t__ FUNC_7 (struct page*,unsigned int) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (struct page*) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (unsigned long) ;
 int FUNC_12 (struct page*) ;
 struct page* FUNC_13 (struct zone*,struct zone*,int,int,unsigned int) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int ,int *) ;
 int FUNC_17 (struct page*,unsigned int,int) ;
 int FUNC_18 (struct zone*,int ,int ,int ) ;
 int FUNC_19 (struct zone*) ;
 int FUNC_20 (struct zone*,struct zone*) ;

__attribute__((used)) static inline
struct page *FUNC_21(struct zone *VAR_5,
   struct zone *VAR_6, unsigned int VAR_7,
   gfp_t VAR_8, unsigned int VAR_9,
   int VAR_10)
{
 unsigned long VAR_11;
 struct page *VAR_12;

 if (FUNC_10(VAR_7 == 0)) {
  VAR_12 = FUNC_13(VAR_5, VAR_6, VAR_8,
     VAR_10, VAR_9);
  goto out;
 }





 FUNC_1((VAR_8 & VAR_4) && (VAR_7 > 1));
 FUNC_14(&VAR_6->lock, VAR_11);

 do {
  VAR_12 = ((void*)0);
  if (VAR_9 & VAR_0) {
   VAR_12 = FUNC_5(VAR_6, VAR_7, VAR_1);
   if (VAR_12)
    FUNC_17(VAR_12, VAR_7, VAR_10);
  }
  if (!VAR_12)
   VAR_12 = FUNC_4(VAR_6, VAR_7, VAR_10, VAR_9);
 } while (VAR_12 && FUNC_7(VAR_12, VAR_7));
 FUNC_15(&VAR_6->lock);
 if (!VAR_12)
  goto failed;
 FUNC_3(VAR_6, -(1 << VAR_7),
      FUNC_9(VAR_12));

 FUNC_2(VAR_2, FUNC_12(VAR_12), 1 << VAR_7);
 FUNC_20(VAR_5, VAR_6);
 FUNC_11(VAR_11);

out:

 if (FUNC_16(VAR_3, &VAR_6->flags)) {
  FUNC_8(VAR_3, &VAR_6->flags);
  FUNC_18(VAR_6, 0, 0, FUNC_19(VAR_6));
 }

 FUNC_0(VAR_12 && FUNC_6(VAR_6, VAR_12), VAR_12);
 return VAR_12;

failed:
 FUNC_11(VAR_11);
 return ((void*)0);
}
