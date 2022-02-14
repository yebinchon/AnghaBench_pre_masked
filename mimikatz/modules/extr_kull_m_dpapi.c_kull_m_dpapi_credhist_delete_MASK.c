
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t __dwCount; int * entries; } ;
typedef TYPE_1__* PKULL_M_DPAPI_CREDHIST ;
typedef size_t DWORD ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

void FUNC_2(PKULL_M_DPAPI_CREDHIST VAR_0)
{
 DWORD VAR_1;
 if(VAR_0)
 {
  for(VAR_1 = 0; VAR_1 < VAR_0->__dwCount; VAR_1++)
   FUNC_1(VAR_0->entries[VAR_1]);
  FUNC_0(VAR_0);
 }
}
