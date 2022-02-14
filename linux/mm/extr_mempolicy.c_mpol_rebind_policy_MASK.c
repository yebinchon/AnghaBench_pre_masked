
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cpuset_mems_allowed; } ;
struct mempolicy {int flags; size_t mode; TYPE_1__ w; } ;
typedef int nodemask_t ;
struct TYPE_4__ {int (* rebind ) (struct mempolicy*,int const*) ;} ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (struct mempolicy*) ;
 scalar_t__ FUNC_1 (int ,int const) ;
 int FUNC_2 (struct mempolicy*,int const*) ;

__attribute__((used)) static void FUNC_3(struct mempolicy *VAR_2, const nodemask_t *VAR_3)
{
 if (!VAR_2)
  return;
 if (!FUNC_0(VAR_2) && !(VAR_2->flags & VAR_0) &&
     FUNC_1(VAR_2->w.cpuset_mems_allowed, *VAR_3))
  return;

 VAR_1[VAR_2->mode].rebind(VAR_2, VAR_3);
}
