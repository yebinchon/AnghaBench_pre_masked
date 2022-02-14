
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nodes; } ;
struct mempolicy {scalar_t__ mode; TYPE_1__ v; } ;
typedef int nodemask_t ;
typedef int gfp_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct mempolicy*,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static nodemask_t *FUNC_4(gfp_t VAR_1, struct mempolicy *VAR_2)
{

 if (FUNC_3(VAR_2->mode == VAR_0) &&
   FUNC_0(VAR_2, FUNC_2(VAR_1)) &&
   FUNC_1(&VAR_2->v.nodes))
  return &VAR_2->v.nodes;

 return ((void*)0);
}
