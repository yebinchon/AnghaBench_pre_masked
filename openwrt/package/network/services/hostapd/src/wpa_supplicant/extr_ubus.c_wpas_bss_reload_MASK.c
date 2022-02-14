
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {int dummy; } ;
struct ubus_request_data {int dummy; } ;
struct ubus_object {int dummy; } ;
struct ubus_context {int dummy; } ;
struct blob_attr {int dummy; } ;


 int VAR_0 ;
 struct wpa_supplicant* FUNC_0 (struct ubus_object*) ;
 scalar_t__ FUNC_1 (struct wpa_supplicant*) ;

__attribute__((used)) static int
FUNC_2(struct ubus_context *VAR_1, struct ubus_object *VAR_2,
  struct ubus_request_data *VAR_3, const char *VAR_4,
  struct blob_attr *VAR_5)
{
 struct wpa_supplicant *VAR_6 = FUNC_0(VAR_2);

 if (FUNC_1(VAR_6))
  return VAR_0;
 else
  return 0;
}
