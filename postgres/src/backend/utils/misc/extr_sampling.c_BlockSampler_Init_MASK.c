
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n; int randstate; scalar_t__ m; scalar_t__ t; int N; } ;
typedef TYPE_1__* BlockSampler ;
typedef int BlockNumber ;


 int FUNC_0 (long,int ) ;

void
FUNC_1(BlockSampler VAR_0, BlockNumber VAR_1, int VAR_2,
      long VAR_3)
{
 VAR_0->N = VAR_1;





 VAR_0->n = VAR_2;
 VAR_0->t = 0;
 VAR_0->m = 0;

 FUNC_0(VAR_3, VAR_0->randstate);
}
