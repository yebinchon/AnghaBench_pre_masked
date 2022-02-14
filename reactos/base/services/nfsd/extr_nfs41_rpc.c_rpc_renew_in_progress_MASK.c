
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int in_recovery; int lock; int cond; } ;
typedef TYPE_1__ nfs41_rpc_clnt ;
typedef int bool_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,char*,int) ;

__attribute__((used)) static bool_t FUNC_4(nfs41_rpc_clnt *VAR_1, int *VAR_2)
{
    bool_t VAR_3 = VAR_0;
    FUNC_0(&VAR_1->lock);
    if (VAR_2) {
        FUNC_3(1, "nfs41_rpc_renew_in_progress: setting value %d\n", *VAR_2);
        VAR_1->in_recovery = *VAR_2;
        if (!VAR_1->in_recovery)
            FUNC_2(VAR_1->cond);
    } else {
        VAR_3 = VAR_1->in_recovery;
        FUNC_3(1, "nfs41_rpc_renew_in_progress: returning value %d\n", VAR_3);
    }
    FUNC_1(&VAR_1->lock);
    return VAR_3;
}
