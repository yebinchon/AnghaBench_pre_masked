
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsdn_t ;
typedef scalar_t__ dss_prec_t ;
typedef int arena_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_1 (int *,int *,void*,size_t,size_t,int*,int*) ;
 void* FUNC_2 (void*,size_t,size_t,int*,int*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void *
FUNC_3(tsdn_t *VAR_3, arena_t *VAR_4, void *VAR_5, size_t VAR_6,
    size_t VAR_7, bool *VAR_8, bool *VAR_9, dss_prec_t VAR_10) {
 void *VAR_11;

 FUNC_0(VAR_6 != 0);
 FUNC_0(VAR_7 != 0);


 if (VAR_2 && VAR_10 == VAR_0 && (VAR_11 =
     FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
     VAR_9)) != ((void*)0)) {
  return VAR_11;
 }

 if ((VAR_11 = FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9))
     != ((void*)0)) {
  return VAR_11;
 }

 if (VAR_2 && VAR_10 == VAR_1 && (VAR_11 =
     FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
     VAR_9)) != ((void*)0)) {
  return VAR_11;
 }


 return ((void*)0);
}
