
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; } ;
struct ubus_object {int n_methods; int methods; TYPE_2__* type; int name; } ;
struct wpa_global {TYPE_1__ params; struct ubus_object ubus_global; } ;
struct TYPE_4__ {int n_methods; int methods; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,struct ubus_object*) ;
 TYPE_2__ VAR_1 ;
 int FUNC_5 () ;
 int FUNC_6 () ;

void FUNC_7(struct wpa_global *VAR_2)
{
 struct ubus_object *VAR_3 = &VAR_2->ubus_global;
 int VAR_4;
 int VAR_5;

 if (!FUNC_5())
  return;

 VAR_4 = FUNC_3("wpa_supplicant") + 1;
 if (VAR_2->params.name)
  VAR_4 += FUNC_3(VAR_2->params.name) + 1;
 VAR_3->name = FUNC_0(VAR_4);
 FUNC_2(VAR_3->name, "wpa_supplicant");

 if (VAR_2->params.name)
 {
  FUNC_1(VAR_3->name, ".");
  FUNC_1(VAR_3->name, VAR_2->params.name);
 }

 VAR_3->type = &VAR_1;
 VAR_3->methods = VAR_1.methods;
 VAR_3->n_methods = VAR_1.n_methods;
 VAR_5 = FUNC_4(VAR_0, VAR_3);
 FUNC_6();
}
