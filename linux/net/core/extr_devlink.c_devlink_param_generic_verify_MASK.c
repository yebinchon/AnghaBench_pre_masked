
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct devlink_param {size_t id; scalar_t__ type; int name; } ;
struct TYPE_2__ {scalar_t__ type; int name; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(const struct devlink_param *VAR_4)
{

 if (VAR_4->id > VAR_0)
  return -VAR_1;
 if (FUNC_1(VAR_4->name, VAR_3[VAR_4->id].name))
  return -VAR_2;

 FUNC_0(VAR_4->type != VAR_3[VAR_4->id].type);

 return 0;
}
