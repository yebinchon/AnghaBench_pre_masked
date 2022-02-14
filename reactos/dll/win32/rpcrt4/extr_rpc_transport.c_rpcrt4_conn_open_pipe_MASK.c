
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* QOS; } ;
struct TYPE_8__ {scalar_t__ pipe; } ;
struct TYPE_7__ {TYPE_1__* qos; } ;
struct TYPE_6__ {int ImpersonationType; scalar_t__ IdentityTracking; } ;
typedef TYPE_3__ RpcConnection_np ;
typedef TYPE_4__ RpcConnection ;
typedef int RPC_STATUS ;
typedef scalar_t__ LPCSTR ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (scalar_t__,int,int ,int *,int ,scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;





 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_2 (scalar_t__,scalar_t__*,int *,int *) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ VAR_19 ;
 int FUNC_4 (char*,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;

__attribute__((used)) static RPC_STATUS FUNC_6(RpcConnection *VAR_20, LPCSTR VAR_21, BOOL VAR_22)
{
  RpcConnection_np *VAR_23 = (RpcConnection_np *) VAR_20;
  HANDLE VAR_24;
  DWORD VAR_25, VAR_26;

  FUNC_3("connecting to %s\n", VAR_21);

  while (VAR_19) {
    DWORD VAR_27 = 0;
    if (VAR_20->QOS)
    {
        VAR_27 = VAR_18;
        switch (VAR_20->QOS->qos->ImpersonationType)
        {
            case 131:

                break;
            case 132:
                VAR_27 |= VAR_13;
                break;
            case 129:
                VAR_27 |= VAR_16;
                break;
            case 128:
                VAR_27 |= VAR_17;
                break;
            case 130:
                VAR_27 |= VAR_15;
                break;
        }
        if (VAR_20->QOS->qos->IdentityTracking == VAR_9)
            VAR_27 |= VAR_14;
    }
    VAR_24 = FUNC_0(VAR_21, VAR_2|VAR_3, 0, ((void*)0),
                       VAR_7, VAR_27 | VAR_1, 0);
    if (VAR_24 != VAR_4) break;
    VAR_25 = FUNC_1();
    if (VAR_25 == VAR_0) {
      if (FUNC_5(VAR_21, VAR_5)) {
        FUNC_3("retrying busy server\n");
        continue;
      }
      FUNC_3("connection failed, error=%x\n", VAR_25);
      return VAR_11;
    }
    if (!VAR_22 || !FUNC_5(VAR_21, VAR_6)) {
      VAR_25 = FUNC_1();
      FUNC_4("connection failed, error=%x\n", VAR_25);
      return VAR_12;
    }
  }



  VAR_26 = VAR_8;
  FUNC_2(VAR_24, &VAR_26, ((void*)0), ((void*)0));
  VAR_23->pipe = VAR_24;

  return VAR_10;
}
