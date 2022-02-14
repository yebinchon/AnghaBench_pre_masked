
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int * parent; scalar_t__ state_in_sysfs; struct kernfs_node* sd; } ;
struct kobj_type {int default_groups; } ;
struct kernfs_node {int dummy; } ;


 struct kobj_type* FUNC_0 (struct kobject*) ;
 int FUNC_1 (struct kobject*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct kernfs_node*) ;
 int FUNC_4 (struct kobject*) ;
 int FUNC_5 (struct kobject*,int ) ;

void FUNC_6(struct kobject *VAR_0)
{
 struct kernfs_node *VAR_1;
 const struct kobj_type *VAR_2;

 if (!VAR_0)
  return;

 VAR_1 = VAR_0->sd;
 VAR_2 = FUNC_0(VAR_0);

 if (VAR_2)
  FUNC_5(VAR_0, VAR_2->default_groups);

 FUNC_4(VAR_0);
 FUNC_3(VAR_1);

 VAR_0->state_in_sysfs = 0;
 FUNC_1(VAR_0);
 FUNC_2(VAR_0->parent);
 VAR_0->parent = ((void*)0);
}
