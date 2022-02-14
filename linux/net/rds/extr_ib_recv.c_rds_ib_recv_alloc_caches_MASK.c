
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int percpu; } ;
struct rds_ib_connection {TYPE_1__ i_cache_incs; TYPE_1__ i_cache_frags; } ;
typedef int gfp_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;

int FUNC_2(struct rds_ib_connection *VAR_0, gfp_t VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(&VAR_0->i_cache_incs, VAR_1);
 if (!VAR_2) {
  VAR_2 = FUNC_1(&VAR_0->i_cache_frags, VAR_1);
  if (VAR_2)
   FUNC_0(VAR_0->i_cache_incs.percpu);
 }

 return VAR_2;
}
