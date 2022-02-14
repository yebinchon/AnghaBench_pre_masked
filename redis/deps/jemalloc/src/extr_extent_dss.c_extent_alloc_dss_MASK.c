
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsdn_t ;
typedef int extent_t ;
typedef int extent_hooks_t ;
typedef int arena_t ;


 scalar_t__ FUNC_0 (uintptr_t,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (uintptr_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,void*,int ) ;
 int FUNC_7 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *,int *) ;
 int FUNC_10 (int *,int *,int *) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 void* FUNC_13 (void*) ;
 void* FUNC_14 (intptr_t) ;
 int FUNC_15 (int *,int *,void*,size_t,size_t,int,int,int ,int,int,int) ;
 scalar_t__ FUNC_16 (int *,int *,int **,int *,int ,size_t) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_17 (void*,int ,size_t) ;
 int FUNC_18 (void*,size_t) ;

void *
FUNC_19(tsdn_t *VAR_8, arena_t *VAR_9, void *VAR_10, size_t VAR_11,
    size_t VAR_12, bool *VAR_13, bool *VAR_14) {
 extent_t *VAR_15;

 FUNC_7(VAR_7);
 FUNC_3(VAR_11 > 0);
 FUNC_3(VAR_12 > 0);





 if ((intptr_t)VAR_11 < 0) {
  return ((void*)0);
 }

 VAR_15 = FUNC_8(VAR_8, VAR_9);
 if (VAR_15 == ((void*)0)) {
  return ((void*)0);
 }

 FUNC_12();
 if (!FUNC_4(&VAR_4, VAR_0)) {





  while (1) {
   void *VAR_16 = FUNC_13(VAR_10);
   if (VAR_16 == ((void*)0)) {
    goto label_oom;
   }






   void *VAR_17 = (void *)(FUNC_1(
       (uintptr_t)VAR_16));
   void *VAR_18 = (void *)FUNC_0(
       (uintptr_t)VAR_17, VAR_12);
   size_t VAR_19 = (uintptr_t)VAR_18 -
       (uintptr_t)VAR_17;
   if (VAR_19 != 0) {
    FUNC_15(VAR_15, VAR_9, VAR_17,
        VAR_19, 0, VAR_3,
        FUNC_2(VAR_9),
        VAR_6, 0, 1, 1);
   }




   void *VAR_20 = (void *)((uintptr_t)VAR_18 + VAR_11);
   if ((uintptr_t)VAR_18 < (uintptr_t)VAR_16 ||
       (uintptr_t)VAR_20 < (uintptr_t)VAR_16) {
    goto label_oom;
   }

   void *VAR_21 = VAR_16;
   size_t VAR_22 = (uintptr_t)VAR_18 -
       (uintptr_t)VAR_21;
   intptr_t VAR_23 = VAR_22 + VAR_11;

   FUNC_3((uintptr_t)VAR_16 + VAR_23 == (uintptr_t)VAR_18 +
       VAR_11);


   void *VAR_24 = FUNC_14(VAR_23);
   if (VAR_24 == VAR_16) {

    FUNC_6(&VAR_5, VAR_20,
        VAR_1);
    FUNC_11();

    if (VAR_19 != 0) {
     FUNC_10(VAR_8, VAR_9, VAR_15);
    } else {
     FUNC_9(VAR_8, VAR_9, VAR_15);
    }
    if (!*VAR_14) {
     *VAR_14 = FUNC_18(VAR_18, VAR_11);
    }
    if (*VAR_13 && *VAR_14) {
     extent_hooks_t *VAR_25 =
         VAR_2;
     extent_t VAR_26;

     FUNC_15(&VAR_26, VAR_9, VAR_18, VAR_11,
         VAR_11, 0, VAR_3,
         VAR_6, 0, 1,
         1);
     if (FUNC_16(VAR_8,
         VAR_9, &VAR_25, &VAR_26, 0,
         VAR_11)) {
      FUNC_17(VAR_18, 0, VAR_11);
     }
    }
    return VAR_18;
   }




   if (VAR_24 == (void *)-1) {

    FUNC_5(&VAR_4, 1,
        VAR_1);
    goto label_oom;
   }
  }
 }
label_oom:
 FUNC_11();
 FUNC_9(VAR_8, VAR_9, VAR_15);
 return ((void*)0);
}
