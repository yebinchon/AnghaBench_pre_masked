
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int common; int mgr_event; } ;
typedef TYPE_1__ RpcServerProtseq_np ;
typedef int RpcServerProtseq ;


 int FUNC_0 (int *,int ,int ,int *) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (int ,int ,int) ;

__attribute__((used)) static RpcServerProtseq *FUNC_3(void)
{
    RpcServerProtseq_np *VAR_2 = FUNC_2(FUNC_1(), VAR_1, sizeof(*VAR_2));
    if (VAR_2)
        VAR_2->mgr_event = FUNC_0(((void*)0), VAR_0, VAR_0, ((void*)0));
    return &VAR_2->common;
}
