
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {TYPE_1__* ktype; } ;
struct kobj_ns_type_operations {scalar_t__ type; } ;
struct TYPE_2__ {void const* (* namespace ) (struct kobject*) ;} ;


 scalar_t__ VAR_0 ;
 struct kobj_ns_type_operations* FUNC_0 (struct kobject*) ;
 void const* FUNC_1 (struct kobject*) ;

const void *FUNC_2(struct kobject *VAR_1)
{
 const struct kobj_ns_type_operations *VAR_2 = FUNC_0(VAR_1);

 if (!VAR_2 || VAR_2->type == VAR_0)
  return ((void*)0);

 return VAR_1->ktype->namespace(VAR_1);
}
