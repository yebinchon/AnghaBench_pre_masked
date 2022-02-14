
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ubus_object {char* name; int n_methods; int methods; TYPE_3__* type; } ;
struct TYPE_5__ {int banned; struct ubus_object obj; } ;
struct hostapd_data {TYPE_2__ ubus; TYPE_1__* conf; } ;
struct TYPE_6__ {int n_methods; int methods; } ;
struct TYPE_4__ {int mesh; int iface; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char**,char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int,int *) ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,struct ubus_object*) ;

void FUNC_5(struct hostapd_data *VAR_4)
{
 struct ubus_object *VAR_5 = &VAR_4->ubus.obj;
 char *VAR_6;
 int VAR_7;






 if (!FUNC_2())
  return;

 if (FUNC_0(&VAR_6, "hostapd.%d", VAR_4->conf->iface) < 0)
  return;

 FUNC_1(&VAR_4->ubus.banned, VAR_1, 0, ((void*)0));
 VAR_5->name = VAR_6;
 VAR_5->type = &VAR_2;
 VAR_5->methods = VAR_2.methods;
 VAR_5->n_methods = VAR_2.n_methods;
 VAR_7 = FUNC_4(VAR_3, VAR_5);
 FUNC_3();
}
