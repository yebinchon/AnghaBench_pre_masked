
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ async_result; int completion_event; } ;
typedef TYPE_1__ RpcHttpAsyncData ;
typedef int RPC_STATUS ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_4 (int,int *,int ,int ) ;

__attribute__((used)) static RPC_STATUS FUNC_5(RpcHttpAsyncData *VAR_7, BOOL VAR_8, HANDLE VAR_9)
{
    HANDLE VAR_10[2] = { VAR_7->completion_event, VAR_9 };
    DWORD VAR_11;

    if(VAR_8) {
        FUNC_2(VAR_7);
        return VAR_4;
    }

    if(FUNC_1() != VAR_1) {
        FUNC_2(VAR_7);
        FUNC_0("Request failed with error %d\n", FUNC_1());
        return VAR_5;
    }

    VAR_11 = FUNC_4(2, VAR_10, VAR_2, VAR_0);
    if(VAR_11 != VAR_6) {
        FUNC_3("Cancelled\n");
        return VAR_3;
    }

    if(VAR_7->async_result) {
        FUNC_0("Async request failed with error %d\n", VAR_7->async_result);
        return VAR_5;
    }

    return VAR_4;
}
