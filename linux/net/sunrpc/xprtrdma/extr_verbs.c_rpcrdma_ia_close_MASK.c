
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct rpcrdma_ia {TYPE_1__* ri_pd; TYPE_1__* ri_id; } ;
struct TYPE_5__ {scalar_t__ qp; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

void
FUNC_4(struct rpcrdma_ia *VAR_0)
{
 if (VAR_0->ri_id != ((void*)0) && !FUNC_0(VAR_0->ri_id)) {
  if (VAR_0->ri_id->qp)
   FUNC_3(VAR_0->ri_id);
  FUNC_2(VAR_0->ri_id);
 }
 VAR_0->ri_id = ((void*)0);


 if (VAR_0->ri_pd && !FUNC_0(VAR_0->ri_pd))
  FUNC_1(VAR_0->ri_pd);
 VAR_0->ri_pd = ((void*)0);
}
