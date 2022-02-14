
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ t; scalar_t__ N; scalar_t__ m; scalar_t__ n; } ;
typedef TYPE_1__* BlockSampler ;



bool
FUNC_0(BlockSampler VAR_0)
{
 return (VAR_0->t < VAR_0->N) && (VAR_0->m < VAR_0->n);
}
