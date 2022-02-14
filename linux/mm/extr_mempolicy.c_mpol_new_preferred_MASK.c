
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int preferred_node; } ;
struct mempolicy {TYPE_1__ v; int flags; } ;
typedef int nodemask_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const) ;
 scalar_t__ FUNC_1 (int const) ;

__attribute__((used)) static int FUNC_2(struct mempolicy *VAR_2, const nodemask_t *VAR_3)
{
 if (!VAR_3)
  VAR_2->flags |= VAR_1;
 else if (FUNC_1(*VAR_3))
  return -VAR_0;
 else
  VAR_2->v.preferred_node = FUNC_0(*VAR_3);
 return 0;
}
