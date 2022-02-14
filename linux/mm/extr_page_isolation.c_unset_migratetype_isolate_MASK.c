
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int lock; int nr_isolate_pageblock; } ;
struct page {int dummy; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 int VAR_0 ;
 unsigned long FUNC_1 (unsigned long,unsigned int) ;
 int FUNC_2 (struct page*,unsigned int) ;
 int FUNC_3 (struct page*,unsigned int) ;
 int FUNC_4 (struct zone*,unsigned long,unsigned int) ;
 int FUNC_5 (struct page*) ;
 unsigned long FUNC_6 (struct zone*,struct page*,unsigned int,int *) ;
 unsigned int FUNC_7 (struct page*) ;
 unsigned long FUNC_8 (struct page*) ;
 struct zone* FUNC_9 (struct page*) ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_10 (unsigned long) ;
 int FUNC_11 (struct page*,unsigned int,int ) ;
 int FUNC_12 (struct page*,unsigned int) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_15(struct page *VAR_2, unsigned VAR_3)
{
 struct zone *VAR_4;
 unsigned long VAR_5, VAR_6;
 bool VAR_7 = 0;
 unsigned int VAR_8;
 unsigned long VAR_9, VAR_10;
 struct page *VAR_11;

 VAR_4 = FUNC_9(VAR_2);
 FUNC_13(&VAR_4->lock, VAR_5);
 if (!FUNC_5(VAR_2))
  goto out;
 if (FUNC_0(VAR_2)) {
  VAR_8 = FUNC_7(VAR_2);
  if (VAR_8 >= VAR_1) {
   VAR_9 = FUNC_8(VAR_2);
   VAR_10 = FUNC_1(VAR_9, VAR_8);
   VAR_11 = VAR_2 + (VAR_10 - VAR_9);

   if (FUNC_10(VAR_10) &&
       !FUNC_5(VAR_11)) {
    FUNC_3(VAR_2, VAR_8);
    VAR_7 = 1;
   }
  }
 }






 if (!VAR_7) {
  VAR_6 = FUNC_6(VAR_4, VAR_2, VAR_3, ((void*)0));
  FUNC_4(VAR_4, VAR_6, VAR_3);
 }
 FUNC_12(VAR_2, VAR_3);
 VAR_4->nr_isolate_pageblock--;
out:
 FUNC_14(&VAR_4->lock, VAR_5);
 if (VAR_7) {
  FUNC_11(VAR_2, VAR_8, VAR_0);
  FUNC_2(VAR_2, VAR_8);
 }
}
