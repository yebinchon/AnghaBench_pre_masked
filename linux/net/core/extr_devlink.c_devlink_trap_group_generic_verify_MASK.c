
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct devlink_trap_group {size_t id; int name; } ;
struct TYPE_2__ {int name; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(const struct devlink_trap_group *VAR_3)
{
 if (VAR_3->id > VAR_0)
  return -VAR_1;

 if (FUNC_0(VAR_3->name, VAR_2[VAR_3->id].name))
  return -VAR_1;

 return 0;
}
