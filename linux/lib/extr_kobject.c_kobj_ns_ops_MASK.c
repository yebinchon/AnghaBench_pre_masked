
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int parent; } ;
struct kobj_ns_type_operations {int dummy; } ;


 struct kobj_ns_type_operations const* FUNC_0 (int ) ;

const struct kobj_ns_type_operations *FUNC_1(struct kobject *VAR_0)
{
 return FUNC_0(VAR_0->parent);
}
