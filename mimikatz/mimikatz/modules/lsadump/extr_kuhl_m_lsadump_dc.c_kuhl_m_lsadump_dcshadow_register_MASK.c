
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int isInstanceId; } ;
struct TYPE_7__ {TYPE_6__ mimiDc; int szFakeFQDN; } ;
typedef TYPE_1__* PDCSHADOW_DOMAIN_INFO ;
typedef int NTSTATUS ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,TYPE_6__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

NTSTATUS FUNC_6(PDCSHADOW_DOMAIN_INFO VAR_2)
{
 NTSTATUS VAR_3 = VAR_1;

 if(!VAR_2->mimiDc.isInstanceId)
 {
  if(FUNC_5(VAR_2))
  {
   if(FUNC_0(FUNC_4(VAR_2)))
   {
    if(FUNC_3(VAR_2, VAR_2->szFakeFQDN, &VAR_2->mimiDc))
     VAR_3 = VAR_0;
    else FUNC_1(L"Unable to get invocation Id\n");
   }
   else FUNC_1(L"Unable to add object via Drs\n");
  }
 }
 else
 {
  FUNC_2(L"Already registered\n");
  VAR_3 = VAR_0;
 }
 return VAR_3;
}
