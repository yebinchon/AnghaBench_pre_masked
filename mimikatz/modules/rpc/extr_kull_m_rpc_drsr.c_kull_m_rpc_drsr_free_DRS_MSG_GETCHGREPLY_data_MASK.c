
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int V6; } ;
typedef int DWORD ;
typedef TYPE_1__ DRS_MSG_GETCHGREPLY ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;

void FUNC_2(DWORD VAR_0, DRS_MSG_GETCHGREPLY * VAR_1)
{
 if(VAR_1)
 {
  switch(VAR_0)
  {
  case 6:
   FUNC_1(&VAR_1->V6);
   break;
  case 1:
  case 2:
  case 7:
  case 9:
   FUNC_0(L"TODO (maybe?)\n");
   break;
  default:
   FUNC_0(L"dwOutVersion not valid (0x%08x - %u)\n", VAR_0, VAR_0);
   break;
  }
 }
}
