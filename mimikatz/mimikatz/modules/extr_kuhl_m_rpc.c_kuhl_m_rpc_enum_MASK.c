
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_7__ {int member_0; } ;
typedef TYPE_1__ UUID ;
struct TYPE_8__ {TYPE_1__ Uuid; } ;
typedef scalar_t__ RPC_WSTR ;
typedef scalar_t__ RPC_STATUS ;
typedef TYPE_2__ RPC_IF_ID ;
typedef int RPC_EP_INQ_HANDLE ;
typedef scalar_t__ RPC_BINDING_HANDLE ;
typedef int PCWSTR ;
typedef int NTSTATUS ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int *,int ,int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,TYPE_2__*,scalar_t__*,int *,scalar_t__*) ;
 int FUNC_6 (scalar_t__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,TYPE_1__*) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_8 (char*,...) ;
 scalar_t__ FUNC_9 (int *,int ,int ,int *,int *,scalar_t__,int ,int *,int ,scalar_t__*,int *) ;
 int FUNC_10 (scalar_t__*) ;
 int FUNC_11 (int,int **,int *,int *,int *,int *,int *,int ,scalar_t__*,int *,scalar_t__) ;
 int FUNC_12 (TYPE_1__*) ;

NTSTATUS FUNC_13(int VAR_9, wchar_t * VAR_10[])
{
 RPC_STATUS VAR_11, VAR_12;
 RPC_BINDING_HANDLE VAR_13, VAR_14;
 RPC_EP_INQ_HANDLE VAR_15;
 RPC_IF_ID VAR_16;
 RPC_WSTR VAR_17, VAR_18;
 UUID VAR_19 = {0};
 BOOL VAR_20, VAR_21, VAR_22 = VAR_0;
 PCWSTR VAR_23, VAR_24;
 DWORD VAR_25;

 FUNC_11(VAR_9, VAR_10, &VAR_23, &VAR_24, ((void*)0), ((void*)0), &VAR_25, VAR_2, &VAR_20, ((void*)0), VAR_8);
 if(FUNC_9(((void*)0), VAR_24, VAR_23, ((void*)0), ((void*)0), VAR_0, VAR_25, VAR_20 ? VAR_1 : ((void*)0), VAR_4, &VAR_13, ((void*)0)))
 {
  VAR_11 = FUNC_3(VAR_13, VAR_3, ((void*)0), 0, ((void*)0), &VAR_15);
  if(VAR_11 == VAR_5)
  {
   do
   {
    VAR_12 = FUNC_5(VAR_15, &VAR_16, &VAR_14, ((void*)0), &VAR_17);
    if(VAR_12 == VAR_5)
    {
     VAR_22 = VAR_8;
     VAR_21 = FUNC_7(&VAR_16.Uuid, &VAR_19);
     if(!VAR_21)
     {
      FUNC_8(L"UUID: ");
      FUNC_12(&VAR_16.Uuid);
      if(VAR_17)
      {
       FUNC_8(L"\t%s", VAR_17);
       FUNC_6(&VAR_17);
      }
      FUNC_8(L"\n");
      VAR_19 = VAR_16.Uuid;
     }
     if(VAR_14)
     {
      VAR_11 = FUNC_2(VAR_14, &VAR_18);
      if(VAR_11 == VAR_5)
      {
       FUNC_8(L"\t%s\n", VAR_18);
       FUNC_6(&VAR_18);
      }
      else FUNC_0(L"RpcBindingToStringBinding: %08x\n", VAR_11);
      FUNC_1(&VAR_14);
     }
    }
   } while(VAR_12 == VAR_5);

   if(!VAR_22 && (VAR_12 == VAR_6))
    FUNC_0(L"RpcMgmtEpEltInqNext: %08x, maybe really no EP, maybe network problem\n", VAR_12);
   else if(VAR_12 != VAR_6)
    FUNC_0(L"RpcMgmtEpEltInqNext: %08x\n", VAR_12);
   VAR_11 = FUNC_4(&VAR_15);
   if(VAR_11 != VAR_5)
    FUNC_0(L"RpcMgmtEpEltInqDone: %08x\n", VAR_11);
  }
  else FUNC_0(L"RpcMgmtEpEltInqBegin: %08x\n", VAR_11);
  FUNC_10(&VAR_13);
 }
 return VAR_7;
}
