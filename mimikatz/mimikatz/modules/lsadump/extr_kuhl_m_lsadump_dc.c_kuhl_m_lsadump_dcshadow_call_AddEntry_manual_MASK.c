
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_6__ {TYPE_1__* request; } ;
struct TYPE_5__ {scalar_t__ cNumObjects; scalar_t__ pObjects; } ;
typedef TYPE_2__* PDCSHADOW_DOMAIN_INFO ;
typedef int NTSTATUS ;
typedef scalar_t__ DWORD ;
typedef int DRS_HANDLE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*,int ,scalar_t__) ;

ULONG FUNC_3(PDCSHADOW_DOMAIN_INFO VAR_1, DRS_HANDLE VAR_2)
{
 NTSTATUS VAR_3 = VAR_0;
 DWORD VAR_4;
 for(VAR_4 = 0; VAR_4 < VAR_1->request->cNumObjects; VAR_4++)
 {
  if(!FUNC_0(VAR_3 = FUNC_2(VAR_1, VAR_2, VAR_1->request->pObjects + VAR_4)))
  {
   FUNC_1(L"DRSAddEntry object %u: 0x%08x\n", VAR_4, VAR_3);
   break;
  }
 }
 return VAR_3;
}
