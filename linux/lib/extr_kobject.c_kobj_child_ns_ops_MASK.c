
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {TYPE_1__* ktype; } ;
struct kobj_ns_type_operations {int dummy; } ;
struct TYPE_2__ {struct kobj_ns_type_operations* (* child_ns_type ) (struct kobject*) ;} ;


 struct kobj_ns_type_operations* FUNC_0 (struct kobject*) ;

const struct kobj_ns_type_operations *FUNC_1(struct kobject *VAR_0)
{
 const struct kobj_ns_type_operations *VAR_1 = ((void*)0);

 if (VAR_0 && VAR_0->ktype && VAR_0->ktype->child_ns_type)
  VAR_1 = VAR_0->ktype->child_ns_type(VAR_0);

 return VAR_1;
}
