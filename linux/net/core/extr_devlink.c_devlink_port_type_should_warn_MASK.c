
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ flavour; } ;
struct devlink_port {TYPE_1__ attrs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct devlink_port *VAR_2)
{

 return VAR_2->attrs.flavour != VAR_0 &&
        VAR_2->attrs.flavour != VAR_1;
}
