
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cpuset_mems_allowed; int user_nodemask; } ;
struct TYPE_3__ {int preferred_node; } ;
struct mempolicy {int flags; TYPE_2__ w; TYPE_1__ v; } ;
typedef int nodemask_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int const*) ;
 scalar_t__ FUNC_2 (int,int const) ;
 int FUNC_3 (int,int ,int const) ;

__attribute__((used)) static void FUNC_4(struct mempolicy *VAR_3,
      const nodemask_t *VAR_4)
{
 nodemask_t VAR_5;

 if (VAR_3->flags & VAR_2) {
  int VAR_6 = FUNC_0(VAR_3->w.user_nodemask);

  if (FUNC_2(VAR_6, *VAR_4)) {
   VAR_3->v.preferred_node = VAR_6;
   VAR_3->flags &= ~VAR_0;
  } else
   VAR_3->flags |= VAR_0;
 } else if (VAR_3->flags & VAR_1) {
  FUNC_1(&VAR_5, &VAR_3->w.user_nodemask, VAR_4);
  VAR_3->v.preferred_node = FUNC_0(VAR_5);
 } else if (!(VAR_3->flags & VAR_0)) {
  VAR_3->v.preferred_node = FUNC_3(VAR_3->v.preferred_node,
         VAR_3->w.cpuset_mems_allowed,
         *VAR_4);
  VAR_3->w.cpuset_mems_allowed = *VAR_4;
 }
}
