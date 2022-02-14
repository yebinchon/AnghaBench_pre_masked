
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ut8 ;
typedef int ut64 ;
typedef int RBuffer ;


 scalar_t__* FUNC_0 (int) ;
 int FUNC_1 (int *,int ,scalar_t__*,int) ;

__attribute__((used)) static char *FUNC_2(RBuffer *VAR_0, ut64 VAR_1, int VAR_2) {
 ut8 *VAR_3 = FUNC_0 (VAR_2);
 if (VAR_3) {
  FUNC_1 (VAR_0, VAR_1, VAR_3, VAR_2);
  VAR_3[VAR_2 - 1] = 0;
  return (char *)VAR_3;
 }
 return ((void*)0);
}
