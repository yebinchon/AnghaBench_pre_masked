
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsdn_t ;
typedef int extent_t ;
typedef int base_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *,int,int ,size_t*) ;
 int FUNC_1 (int *,size_t) ;

extent_t *
FUNC_2(tsdn_t *VAR_1, base_t *VAR_2) {
 size_t VAR_3;
 extent_t *VAR_4 = FUNC_0(VAR_1, VAR_2, sizeof(extent_t),
     VAR_0, &VAR_3);
 if (VAR_4 == ((void*)0)) {
  return ((void*)0);
 }
 FUNC_1(VAR_4, VAR_3);
 return VAR_4;
}
