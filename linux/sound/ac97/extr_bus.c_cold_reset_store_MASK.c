
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ac97_controller {TYPE_1__* ops; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int (* reset ) (struct ac97_controller*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ac97_controller*) ;
 struct ac97_controller* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
    struct device_attribute *VAR_2, const char *VAR_3,
    size_t VAR_4)
{
 struct ac97_controller *VAR_5;

 FUNC_0(&VAR_0);
 VAR_5 = FUNC_3(VAR_1);
 VAR_5->ops->reset(VAR_5);
 FUNC_1(&VAR_0);
 return VAR_4;
}
