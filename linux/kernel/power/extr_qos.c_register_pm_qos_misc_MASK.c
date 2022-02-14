
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * fops; int name; int minor; } ;
struct pm_qos_object {TYPE_1__ pm_qos_power_miscdev; int name; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct dentry*,void*,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct pm_qos_object *VAR_4, struct dentry *VAR_5)
{
 VAR_4->pm_qos_power_miscdev.minor = VAR_0;
 VAR_4->pm_qos_power_miscdev.name = VAR_4->name;
 VAR_4->pm_qos_power_miscdev.fops = &VAR_3;

 FUNC_0(VAR_4->name, VAR_1, VAR_5, (void *)VAR_4,
       &VAR_2);

 return FUNC_1(&VAR_4->pm_qos_power_miscdev);
}
