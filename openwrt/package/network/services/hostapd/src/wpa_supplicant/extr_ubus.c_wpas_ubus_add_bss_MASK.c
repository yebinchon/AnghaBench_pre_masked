
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ubus_object {char* name; int n_methods; int methods; TYPE_2__* type; } ;
struct TYPE_3__ {struct ubus_object obj; } ;
struct wpa_supplicant {int ifname; TYPE_1__ ubus; } ;
struct TYPE_4__ {int n_methods; int methods; } ;


 scalar_t__ FUNC_0 (char**,char*,int ) ;
 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct ubus_object*) ;
 int FUNC_2 () ;

void FUNC_3(struct wpa_supplicant *VAR_2)
{
 struct ubus_object *VAR_3 = &VAR_2->ubus.obj;
 char *VAR_4;
 int VAR_5;


 if (FUNC_0(&VAR_4, "wpa_supplicant.%d", VAR_2->ifname) < 0)
  return;

 VAR_3->name = VAR_4;
 VAR_3->type = &VAR_0;
 VAR_3->methods = VAR_0.methods;
 VAR_3->n_methods = VAR_0.n_methods;
 VAR_5 = FUNC_1(VAR_1, VAR_3);
 FUNC_2();
}
