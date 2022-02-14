
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubus_object {int n_methods; int methods; TYPE_1__* type; int name; } ;
struct hapd_interfaces {char* name; struct ubus_object ubus; } ;
struct TYPE_2__ {int n_methods; int methods; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,struct ubus_object*) ;

void FUNC_7(struct hapd_interfaces *VAR_2)
{
 struct ubus_object *VAR_3 = &VAR_2->ubus;
 int VAR_4;
 int VAR_5;

 if (!FUNC_0())
  return;

 VAR_4 = FUNC_5("hostapd") + 1;
 if (VAR_2->name)
  VAR_4 += FUNC_5(VAR_2->name) + 1;
 VAR_3->name = FUNC_2(VAR_4);
 FUNC_4(VAR_3->name, "hostapd");
 if (VAR_2->name) {
  FUNC_3(VAR_3->name, ".");
  FUNC_3(VAR_3->name, VAR_2->name);
 }

 VAR_3->type = &VAR_1;
 VAR_3->methods = VAR_1.methods;
 VAR_3->n_methods = VAR_1.n_methods;
 VAR_5 = FUNC_6(VAR_0, VAR_3);
 FUNC_1();
}
