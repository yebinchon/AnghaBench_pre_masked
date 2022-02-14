
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rds_connection {TYPE_1__* c_trans; } ;
struct TYPE_2__ {scalar_t__ (* t_unloading ) (struct rds_connection*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct rds_connection*) ;
 scalar_t__ FUNC_2 (struct rds_connection*) ;

__attribute__((used)) static inline bool FUNC_3(struct rds_connection *VAR_0)
{
 return !FUNC_0(FUNC_1(VAR_0)) ||
        (VAR_0->c_trans->t_unloading && VAR_0->c_trans->t_unloading(VAR_0));
}
