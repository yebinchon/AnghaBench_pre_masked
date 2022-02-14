
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct devlink_trap {scalar_t__ generic; TYPE_1__ group; int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct devlink_trap const*) ;
 int FUNC_1 (struct devlink_trap const*) ;

__attribute__((used)) static int FUNC_2(const struct devlink_trap *VAR_1)
{
 if (!VAR_1 || !VAR_1->name || !VAR_1->group.name)
  return -VAR_0;

 if (VAR_1->generic)
  return FUNC_1(VAR_1);
 else
  return FUNC_0(VAR_1);
}
