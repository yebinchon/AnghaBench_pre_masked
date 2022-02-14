
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int module_id; int instance_id; } ;
struct skl_module_pin {int pin_state; scalar_t__ is_dynamic; scalar_t__ in_use; TYPE_1__ id; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int,char*,char*,int,int,int,char*,char*,int,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct skl_module_pin *VAR_1, char *VAR_2,
    int VAR_3, ssize_t VAR_4, bool VAR_5)
{
 int VAR_6;
 ssize_t VAR_7 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
  VAR_7 += FUNC_0(VAR_2 + VAR_4, VAR_0 - VAR_4,
    "%s %d\n\tModule %d\n\tInstance %d\n\t"
    "In-used %s\n\tType %s\n"
    "\tState %d\n\tIndex %d\n",
    VAR_5 ? "Input Pin:" : "Output Pin:",
    VAR_6, VAR_1[VAR_6].id.module_id,
    VAR_1[VAR_6].id.instance_id,
    VAR_1[VAR_6].in_use ? "Used" : "Unused",
    VAR_1[VAR_6].is_dynamic ? "Dynamic" : "Static",
    VAR_1[VAR_6].pin_state, VAR_6);
 return VAR_7;
}
