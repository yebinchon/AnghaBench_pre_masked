
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct devlink_trap {size_t id; scalar_t__ type; int name; } ;
struct TYPE_2__ {scalar_t__ type; int name; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(const struct devlink_trap *VAR_3)
{
 if (VAR_3->id > VAR_0)
  return -VAR_1;

 if (FUNC_0(VAR_3->name, VAR_2[VAR_3->id].name))
  return -VAR_1;

 if (VAR_3->type != VAR_2[VAR_3->id].type)
  return -VAR_1;

 return 0;
}
