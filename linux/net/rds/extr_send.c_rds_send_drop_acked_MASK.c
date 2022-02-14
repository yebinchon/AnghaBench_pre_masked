
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct rds_connection {int * c_path; TYPE_1__* c_trans; } ;
typedef int is_acked_func ;
struct TYPE_2__ {int t_mp_capable; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;

void FUNC_2(struct rds_connection *VAR_0, u64 VAR_1,
    is_acked_func VAR_2)
{
 FUNC_0(VAR_0->c_trans->t_mp_capable);
 FUNC_1(&VAR_0->c_path[0], VAR_1, VAR_2);
}
