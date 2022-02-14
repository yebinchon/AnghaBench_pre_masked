
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int modes; } ;
struct wpa_supplicant {TYPE_1__ hw; } ;
struct ubus_request_data {int dummy; } ;
struct ubus_object {int dummy; } ;
struct ubus_context {int dummy; } ;
struct blob_attr {int dummy; } ;
struct TYPE_6__ {int head; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,char*,int ) ;
 struct wpa_supplicant* FUNC_2 (struct ubus_object*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ubus_context*,struct ubus_request_data*,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct ubus_context *VAR_1, struct ubus_object *VAR_2,
   struct ubus_request_data *VAR_3, const char *VAR_4,
   struct blob_attr *VAR_5)
{
 struct wpa_supplicant *VAR_6 = FUNC_2(VAR_2);

 FUNC_0(&VAR_0, 0);
 FUNC_1(&VAR_0, "ht_supported", FUNC_3(VAR_6->hw.modes));
 FUNC_1(&VAR_0, "vht_supported", FUNC_5(VAR_6->hw.modes));
 FUNC_4(VAR_1, VAR_3, VAR_0.head);

 return 0;
}
