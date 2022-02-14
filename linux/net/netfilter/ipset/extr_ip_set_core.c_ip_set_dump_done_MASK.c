
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netlink_callback {scalar_t__* args; } ;
struct ip_set_net {int dummy; } ;
struct ip_set {int name; TYPE_1__* variant; } ;
typedef int ip_set_id_t ;
struct TYPE_2__ {int (* uref ) (struct ip_set*,struct netlink_callback*,int) ;} ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct ip_set*) ;
 struct ip_set* FUNC_1 (struct ip_set_net*,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct ip_set*,struct netlink_callback*,int) ;

__attribute__((used)) static int
FUNC_4(struct netlink_callback *VAR_3)
{
 if (VAR_3->args[VAR_0]) {
  struct ip_set_net *VAR_4 =
   (struct ip_set_net *)VAR_3->args[VAR_2];
  ip_set_id_t VAR_5 = (ip_set_id_t)VAR_3->args[VAR_1];
  struct ip_set *VAR_6 = FUNC_1(VAR_4, VAR_5);

  if (VAR_6->variant->uref)
   VAR_6->variant->uref(VAR_6, VAR_3, 0);
  FUNC_2("release set %s\n", VAR_6->name);
  FUNC_0(VAR_6);
 }
 return 0;
}
