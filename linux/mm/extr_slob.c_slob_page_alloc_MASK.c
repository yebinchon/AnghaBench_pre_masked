
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {scalar_t__ units; void* freelist; } ;
typedef int slobidx_t ;
typedef void slob_t ;


 int FUNC_0 (unsigned long,int) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (void*,int,void*) ;
 scalar_t__ FUNC_4 (void*) ;
 void* FUNC_5 (void*) ;
 int FUNC_6 (void*) ;

__attribute__((used)) static void *FUNC_7(struct page *VAR_0, size_t VAR_1, int VAR_2,
         int VAR_3, bool *VAR_4)
{
 slob_t *VAR_5, *VAR_6, *VAR_7 = ((void*)0);
 int VAR_8 = 0, VAR_9 = FUNC_1(VAR_1);

 *VAR_4 = 0;
 for (VAR_5 = ((void*)0), VAR_6 = VAR_0->freelist; ; VAR_5 = VAR_6, VAR_6 = FUNC_5(VAR_6)) {
  slobidx_t VAR_10 = FUNC_6(VAR_6);
  if (VAR_2) {
   VAR_7 = (slob_t *)
    (FUNC_0((unsigned long)VAR_6 + VAR_3, VAR_2)
     - VAR_3);
   VAR_8 = VAR_7 - VAR_6;
  }
  if (VAR_10 >= VAR_9 + VAR_8) {
   slob_t *VAR_11;

   if (VAR_8) {
    VAR_11 = FUNC_5(VAR_6);
    FUNC_3(VAR_7, VAR_10 - VAR_8, VAR_11);
    FUNC_3(VAR_6, VAR_8, VAR_7);
    VAR_5 = VAR_6;
    VAR_6 = VAR_7;
    VAR_10 = FUNC_6(VAR_6);
   }

   VAR_11 = FUNC_5(VAR_6);
   if (VAR_10 == VAR_9) {
    if (VAR_5)
     FUNC_3(VAR_5, FUNC_6(VAR_5), VAR_11);
    else
     VAR_0->freelist = VAR_11;
   } else {
    if (VAR_5)
     FUNC_3(VAR_5, FUNC_6(VAR_5), VAR_6 + VAR_9);
    else
     VAR_0->freelist = VAR_6 + VAR_9;
    FUNC_3(VAR_6 + VAR_9, VAR_10 - VAR_9, VAR_11);
   }

   VAR_0->units -= VAR_9;
   if (!VAR_0->units) {
    FUNC_2(VAR_0);
    *VAR_4 = 1;
   }
   return VAR_6;
  }
  if (FUNC_4(VAR_6))
   return ((void*)0);
 }
}
