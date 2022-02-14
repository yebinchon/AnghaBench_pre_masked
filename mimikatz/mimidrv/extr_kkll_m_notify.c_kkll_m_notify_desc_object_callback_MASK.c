
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ PostOperation; scalar_t__ PreOperation; int Handle; int Operations; } ;
typedef TYPE_1__* POBJECT_CALLBACK_ENTRY ;
typedef int PKIWI_BUFFER ;
typedef int NTSTATUS ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,char*,...) ;

NTSTATUS FUNC_3(POBJECT_CALLBACK_ENTRY VAR_1, PKIWI_BUFFER VAR_2)
{
 NTSTATUS VAR_3 = VAR_0;
 if(VAR_1->PreOperation || VAR_1->PostOperation)
 {
  VAR_3 = FUNC_2(VAR_2, L"\t* Callback [type %u] - Handle 0x%p (@ 0x%p)\n", VAR_1->Operations, VAR_1->Handle, VAR_1);
  if(FUNC_0(VAR_3) && VAR_1->PreOperation)
  {
   VAR_3 = FUNC_2(VAR_2, L"\t\tPreOperation  : ");
   if(FUNC_0(VAR_3))
    VAR_3 = FUNC_1(VAR_2, VAR_1->PreOperation);
  }
  if(FUNC_0(VAR_3) && VAR_1->PostOperation)
  {
   VAR_3 = FUNC_2(VAR_2, L"\t\tPostOperation : ");
   if(FUNC_0(VAR_3))
    VAR_3 = FUNC_1(VAR_2, VAR_1->PostOperation);
  }
 }
 return VAR_3;
}
