
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int VOID ;
typedef size_t ULONG ;
struct TYPE_12__ {TYPE_4__* hLsassMem; } ;
struct TYPE_11__ {int type; TYPE_1__* pHandleProcessDmp; TYPE_2__* pHandleProcess; } ;
struct TYPE_10__ {int Module; } ;
struct TYPE_9__ {int hProcess; } ;
struct TYPE_8__ {int hMinidump; } ;
typedef int KUHL_M_SEKURLSA_LIB ;
typedef int HANDLE ;


 size_t FUNC_0 (TYPE_3__**) ;
 int FUNC_1 (int ) ;


 int FUNC_2 (int *,int) ;
 TYPE_6__ VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 TYPE_4__* FUNC_5 (TYPE_4__*) ;
 TYPE_3__** VAR_1 ;
 int * VAR_2 ;

VOID FUNC_6()
{
 HANDLE VAR_3;
 ULONG VAR_4;

 if(VAR_2)
 {
  FUNC_3(VAR_2);
  VAR_2 = ((void*)0);
 }

 if(VAR_0.hLsassMem)
 {
  switch(VAR_0.hLsassMem->type)
  {
  case 129:
   VAR_3 = VAR_0.hLsassMem->pHandleProcess->hProcess;
   break;
  case 128:
   VAR_3 = VAR_0.hLsassMem->pHandleProcessDmp->hMinidump;
   break;
  default:
   ;
  }
  VAR_0.hLsassMem = FUNC_5(VAR_0.hLsassMem);
  FUNC_1(VAR_3);
  FUNC_4();
 }
 for(VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++)
  FUNC_2(&VAR_1[VAR_4]->Module, sizeof(KUHL_M_SEKURLSA_LIB));
}
