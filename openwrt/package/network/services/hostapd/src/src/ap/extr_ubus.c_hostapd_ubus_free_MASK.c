
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubus_object {scalar_t__ id; scalar_t__ name; } ;
struct hapd_interfaces {struct ubus_object ubus; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,struct ubus_object*) ;

void FUNC_3(struct hapd_interfaces *VAR_1)
{
 struct ubus_object *VAR_2 = &VAR_1->ubus;
 char *VAR_3 = (char *) VAR_2->name;

 if (!VAR_0)
  return;

 if (VAR_2->id) {
  FUNC_2(VAR_0, VAR_2);
  FUNC_1();
 }

 FUNC_0(VAR_3);
}
