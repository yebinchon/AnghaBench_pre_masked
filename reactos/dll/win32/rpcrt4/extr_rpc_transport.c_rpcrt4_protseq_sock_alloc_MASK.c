
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WSADATA ;
struct TYPE_3__ {int common; int mgr_event; } ;
typedef TYPE_1__ RpcServerProtseq_sock ;
typedef int RpcServerProtseq ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *,int ,int ,int *) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static RpcServerProtseq *FUNC_5(void)
{
    RpcServerProtseq_sock *VAR_3 = FUNC_2(FUNC_1(), VAR_1, sizeof(*VAR_3));
    if (VAR_3)
    {
        static BOOL VAR_4;
        if (!VAR_4)
        {
            WSADATA VAR_5;
            FUNC_4(FUNC_3(2, 2), &VAR_5);


            VAR_4 = VAR_2;
        }
        VAR_3->mgr_event = FUNC_0(((void*)0), VAR_0, VAR_0, ((void*)0));
    }
    return &VAR_3->common;
}
