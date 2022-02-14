
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONG_PTR ;
struct TYPE_7__ {scalar_t__* cmd_pipe; TYPE_1__* priv; } ;
struct TYPE_6__ {int iocp_handle; } ;
typedef TYPE_1__ SeafWTMonitorPriv ;
typedef TYPE_2__ SeafWTMonitor ;
typedef scalar_t__ HANDLE ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__,int ,int ,int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static BOOL
FUNC_5 (SeafWTMonitor *VAR_1, HANDLE VAR_2)
{
    SeafWTMonitorPriv *VAR_3 = VAR_1->priv;

    if (!VAR_3 || !VAR_2)
        return VAR_0;
    VAR_3->iocp_handle = FUNC_0
        (VAR_2,
         VAR_3->iocp_handle,
         (ULONG_PTR)VAR_2,
         1);

    if (!VAR_3->iocp_handle) {
        FUNC_2 ("failed to create/add iocp, error code %lu",
                      FUNC_1());
        return VAR_0;
    }

    if (VAR_2 == (HANDLE)VAR_1->cmd_pipe[0]) {

        return FUNC_3 (VAR_1, ((void*)0));
    } else {

        return FUNC_4 (VAR_3, VAR_2);
    }

}
