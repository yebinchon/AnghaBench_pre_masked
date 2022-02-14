
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ Status; } ;
struct TYPE_9__ {unsigned int Information; TYPE_1__ u; } ;
struct TYPE_8__ {int pipe; } ;
typedef TYPE_2__ RpcConnection_np ;
typedef int RpcConnection ;
typedef scalar_t__ NTSTATUS ;
typedef TYPE_3__ IO_STATUS_BLOCK ;
typedef int HANDLE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int *,int *,TYPE_3__*,void const*,unsigned int,int *,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_5(RpcConnection *VAR_2, const void *VAR_3, unsigned int VAR_4)
{
    RpcConnection_np *VAR_5 = (RpcConnection_np *) VAR_2;
    IO_STATUS_BLOCK VAR_6;
    HANDLE VAR_7;
    NTSTATUS VAR_8;

    VAR_7 = FUNC_3(VAR_5);
    if (!VAR_7)
        return -1;

    VAR_8 = FUNC_0(VAR_5->pipe, VAR_7, ((void*)0), ((void*)0), &VAR_6, VAR_3, VAR_4, ((void*)0), ((void*)0));
    if (VAR_8 == VAR_1)
    {
        FUNC_1(VAR_7, VAR_0);
        VAR_8 = VAR_6.u.Status;
    }
    FUNC_4(VAR_5, VAR_7);
    if (VAR_8)
        return -1;

    FUNC_2(VAR_6.Information == VAR_4);
    return VAR_4;
}
