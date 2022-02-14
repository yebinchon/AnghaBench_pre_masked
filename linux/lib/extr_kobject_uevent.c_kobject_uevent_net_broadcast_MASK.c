
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net {TYPE_3__* uevent_sock; } ;
struct kobject {TYPE_2__* ktype; struct kobject* parent; TYPE_1__* kset; } ;
struct kobj_uevent_env {int dummy; } ;
struct kobj_ns_type_operations {scalar_t__ type; scalar_t__ netlink_ns; } ;
struct TYPE_6__ {int sk; } ;
struct TYPE_5__ {struct net* (* namespace ) (struct kobject*) ;} ;
struct TYPE_4__ {struct kobject kobj; } ;


 scalar_t__ VAR_0 ;
 struct kobj_ns_type_operations* FUNC_0 (struct kobject*) ;
 struct net* FUNC_1 (struct kobject*) ;
 int FUNC_2 (int ,struct kobj_uevent_env*,char const*,char const*) ;
 int FUNC_3 (struct kobj_uevent_env*,char const*,char const*) ;

__attribute__((used)) static int FUNC_4(struct kobject *VAR_1,
     struct kobj_uevent_env *VAR_2,
     const char *VAR_3,
     const char *VAR_4)
{
 int VAR_5 = 0;
 return VAR_5;
}
