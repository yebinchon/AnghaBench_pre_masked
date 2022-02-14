
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ac97_controller {TYPE_1__* ops; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int (* warm_reset ) (struct ac97_controller*) ;} ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ac97_controller*) ;
 struct ac97_controller* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
    struct device_attribute *VAR_3, const char *VAR_4,
    size_t VAR_5)
{
 struct ac97_controller *VAR_6;

 if (!VAR_2)
  return -VAR_0;

 FUNC_0(&VAR_1);
 VAR_6 = FUNC_3(VAR_2);
 VAR_6->ops->warm_reset(VAR_6);
 FUNC_1(&VAR_1);
 return VAR_5;
}
