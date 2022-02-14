
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* client; } ;
typedef TYPE_2__ nfs41_session ;
struct TYPE_5__ {int lock; int opens; } ;
struct TYPE_7__ {TYPE_1__ state; } ;
typedef TYPE_3__ nfs41_client ;
typedef int nfs41_abs_path ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *,int *,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(nfs41_abs_path *VAR_3, nfs41_session *VAR_4)
{
    int VAR_5;
    nfs41_client *VAR_6 = VAR_4->client;

    FUNC_0(&VAR_6->state.lock);
    if (FUNC_2(&VAR_6->state.opens, VAR_3, VAR_2))
        VAR_5 = VAR_1;
    else
        VAR_5 = VAR_0;
    FUNC_1(&VAR_6->state.lock);

    return VAR_5;
}
