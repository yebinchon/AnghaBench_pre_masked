
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rds_connection {int * c_path; TYPE_1__* c_trans; } ;
struct TYPE_2__ {int t_mp_capable; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int,int) ;

__attribute__((used)) static inline int
FUNC_2(struct rds_connection *VAR_0, int VAR_1, int VAR_2)
{
 FUNC_0(VAR_0->c_trans->t_mp_capable);
 return FUNC_1(&VAR_0->c_path[0], VAR_1, VAR_2);
}
