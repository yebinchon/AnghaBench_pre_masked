
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ MinBuildNumber; } ;
typedef size_t SIZE_T ;
typedef TYPE_1__* PKULL_M_PATCH_GENERIC ;
typedef scalar_t__ DWORD ;



PKULL_M_PATCH_GENERIC FUNC_0(PKULL_M_PATCH_GENERIC VAR_0, SIZE_T VAR_1, DWORD VAR_2)
{
 SIZE_T VAR_3;
 PKULL_M_PATCH_GENERIC VAR_4 = ((void*)0);

 for(VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
 {
  if(VAR_0[VAR_3].MinBuildNumber <= VAR_2)
   VAR_4 = &VAR_0[VAR_3];
  else break;
 }
 return VAR_4;
}
