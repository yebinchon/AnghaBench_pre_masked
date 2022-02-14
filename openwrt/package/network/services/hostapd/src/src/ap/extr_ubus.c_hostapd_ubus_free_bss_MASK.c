
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubus_object {scalar_t__ id; scalar_t__ name; } ;
struct TYPE_2__ {struct ubus_object obj; } ;
struct hostapd_data {TYPE_1__ ubus; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,struct ubus_object*) ;

void FUNC_3(struct hostapd_data *VAR_1)
{
 struct ubus_object *VAR_2 = &VAR_1->ubus.obj;
 char *VAR_3 = (char *) VAR_2->name;

 if (!VAR_0)
  return;

 if (VAR_2->id) {
  FUNC_2(VAR_0, VAR_2);
  FUNC_1();
 }

 FUNC_0(VAR_3);
}
