
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ut8 ;
typedef scalar_t__ ut64 ;
typedef int RBuffer ;


 char* FUNC_0 (scalar_t__) ;
 size_t FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,scalar_t__,size_t*,size_t) ;

__attribute__((used)) static char *FUNC_3(RBuffer *VAR_0, ut64 VAR_1) {
 ut8 VAR_2 = FUNC_1 (VAR_0, VAR_1);
 if (!VAR_2) {
  return ((void*)0);
 }
 char *VAR_3 = FUNC_0 ((ut64)VAR_2 + 1);
 if (!VAR_3) {
  return ((void*)0);
 }
 FUNC_2 (VAR_0, VAR_1 + 1, (ut8 *)VAR_3, VAR_2);
 VAR_3[VAR_2] = '\0';
 return VAR_3;
}
