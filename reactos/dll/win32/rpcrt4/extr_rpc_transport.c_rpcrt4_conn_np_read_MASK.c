
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ Status; } ;
struct TYPE_9__ {int Information; TYPE_1__ u; } ;
struct TYPE_8__ {TYPE_5__ io_status; int pipe; scalar_t__ read_closed; } ;
typedef TYPE_2__ RpcConnection_np ;
typedef int RpcConnection ;
typedef scalar_t__ NTSTATUS ;
typedef int IO_STATUS_BLOCK ;
typedef int HANDLE ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,TYPE_5__*,int *) ;
 scalar_t__ FUNC_2 (int ,int ,int *,int *,TYPE_5__*,void*,unsigned int,int *,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_6(RpcConnection *VAR_4, void *VAR_5, unsigned int VAR_6)
{
    RpcConnection_np *VAR_7 = (RpcConnection_np *) VAR_4;
    HANDLE VAR_8;
    NTSTATUS VAR_9;

    VAR_8 = FUNC_4(VAR_7);
    if (!VAR_8)
        return -1;

    if (VAR_7->read_closed)
        VAR_9 = VAR_2;
    else
        VAR_9 = FUNC_2(VAR_7->pipe, VAR_8, ((void*)0), ((void*)0), &VAR_7->io_status, VAR_5, VAR_6, ((void*)0), ((void*)0));
    if (VAR_9 == VAR_3)
    {

        if (VAR_7->read_closed)
        {
            IO_STATUS_BLOCK VAR_10;



            FUNC_1(VAR_7->pipe, &VAR_7->io_status, &VAR_10);

        }
        FUNC_3(VAR_8, VAR_0);
        VAR_9 = VAR_7->io_status.u.Status;
    }
    FUNC_5(VAR_7, VAR_8);
    return VAR_9 && VAR_9 != VAR_1 ? -1 : VAR_7->io_status.Information;
}
