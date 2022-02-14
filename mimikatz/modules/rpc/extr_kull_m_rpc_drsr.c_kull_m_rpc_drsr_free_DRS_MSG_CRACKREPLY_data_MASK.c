
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int V1; } ;
typedef int DWORD ;
typedef TYPE_1__ DRS_MSG_CRACKREPLY ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int *) ;

void FUNC_2(DWORD VAR_0, DRS_MSG_CRACKREPLY * VAR_1)
{
 if(VAR_1)
 {
  switch (VAR_0)
  {
  case 1:
   FUNC_1(&VAR_1->V1);
   break;
  default:
   FUNC_0(L"nameCrackOutVersion not valid (0x%08x - %u)\n", VAR_0, VAR_0);
   break;
  }
 }
}
