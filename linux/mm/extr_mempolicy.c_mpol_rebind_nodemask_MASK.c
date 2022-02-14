
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nodes; } ;
struct TYPE_4__ {int cpuset_mems_allowed; int user_nodemask; } ;
struct mempolicy {int flags; TYPE_1__ v; TYPE_2__ w; } ;
typedef int nodemask_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int const*) ;
 int FUNC_1 (int ,int ,int const) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int const) ;

__attribute__((used)) static void FUNC_4(struct mempolicy *VAR_2, const nodemask_t *VAR_3)
{
 nodemask_t VAR_4;

 if (VAR_2->flags & VAR_1)
  FUNC_1(VAR_4, VAR_2->w.user_nodemask, *VAR_3);
 else if (VAR_2->flags & VAR_0)
  FUNC_0(&VAR_4, &VAR_2->w.user_nodemask, VAR_3);
 else {
  FUNC_3(VAR_4, VAR_2->v.nodes,VAR_2->w.cpuset_mems_allowed,
        *VAR_3);
  VAR_2->w.cpuset_mems_allowed = *VAR_3;
 }

 if (FUNC_2(VAR_4))
  VAR_4 = *VAR_3;

 VAR_2->v.nodes = VAR_4;
}
