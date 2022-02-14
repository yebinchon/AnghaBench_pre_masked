
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int ifname; struct wpa_supplicant* next; } ;
struct wpa_global {struct wpa_supplicant* ifaces; } ;
struct ubus_request_data {int dummy; } ;
struct ubus_object {int dummy; } ;
struct ubus_context {int dummy; } ;
struct blob_attr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct blob_attr*) ;
 int FUNC_1 (struct blob_attr*) ;
 int FUNC_2 (struct blob_attr*) ;
 int FUNC_3 (int ,int,struct blob_attr**,int ,int ) ;
 struct wpa_global* FUNC_4 (struct ubus_object*) ;
 int FUNC_5 (int ,int ,int) ;
 scalar_t__ FUNC_6 (struct wpa_global*,struct wpa_supplicant*,int ) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_7(struct ubus_context *VAR_5, struct ubus_object *VAR_6,
     struct ubus_request_data *VAR_7, const char *VAR_8,
     struct blob_attr *VAR_9)
{
 struct blob_attr *VAR_10[VAR_3];
 struct wpa_global *VAR_11 = FUNC_4(VAR_6);
 struct wpa_supplicant *VAR_12 = ((void*)0);
 unsigned int VAR_13 = 0;

 FUNC_3(VAR_4, VAR_3, VAR_10, FUNC_0(VAR_9), FUNC_1(VAR_9));

 if (!VAR_10[VAR_2])
  return VAR_0;


 for (VAR_12 = VAR_11->ifaces; VAR_12; VAR_12 = VAR_12->next) {
  if (!FUNC_5(VAR_12->ifname,
        FUNC_2(VAR_10[VAR_2]),
        sizeof(VAR_12->ifname)))
  {
   VAR_13 = 1;
   break;
  }
 }

 if (!VAR_13)
  return VAR_0;

 if (FUNC_6(VAR_11, VAR_12, 0))
  return VAR_0;

 return VAR_1;
}
