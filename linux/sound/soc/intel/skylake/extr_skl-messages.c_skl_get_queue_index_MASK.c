
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ module_id; scalar_t__ instance_id; } ;
struct skl_module_pin {TYPE_1__ id; } ;
struct skl_module_inst_id {scalar_t__ module_id; scalar_t__ instance_id; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct skl_module_pin *VAR_1,
    struct skl_module_inst_id VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  if (VAR_1[VAR_4].id.module_id == VAR_2.module_id &&
   VAR_1[VAR_4].id.instance_id == VAR_2.instance_id)
   return VAR_4;
 }

 return -VAR_0;
}
