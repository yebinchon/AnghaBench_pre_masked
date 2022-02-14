
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_interface {void* hostapd_ctrl; void* ctrl_interface; void* bridge_ifname; void* confname; void* ifname; void* driver; } ;
struct wpa_global {int dummy; } ;
struct ubus_request_data {int dummy; } ;
struct ubus_object {int dummy; } ;
struct ubus_context {int dummy; } ;
struct blob_attr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct blob_attr*) ;
 int FUNC_1 (struct blob_attr*) ;
 void* FUNC_2 (struct blob_attr*) ;
 int FUNC_3 (int ,int,struct blob_attr**,int ,int ) ;
 struct wpa_global* FUNC_4 (struct ubus_object*) ;
 struct wpa_interface* FUNC_5 (int) ;
 int FUNC_6 (struct wpa_global*,struct wpa_interface*,int *) ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_7(struct ubus_context *VAR_11, struct ubus_object *VAR_12,
  struct ubus_request_data *VAR_13, const char *VAR_14,
  struct blob_attr *VAR_15)
{
 struct blob_attr *VAR_16[VAR_9];
 struct wpa_global *VAR_17 = FUNC_4(VAR_12);
 struct wpa_interface *VAR_18;

 FUNC_3(VAR_10, VAR_9, VAR_16, FUNC_0(VAR_15), FUNC_1(VAR_15));

 if (!VAR_16[VAR_6] || !VAR_16[VAR_8] || !VAR_16[VAR_5])
  return VAR_0;

 VAR_18 = FUNC_5(sizeof(struct wpa_interface));
 if (VAR_18 == ((void*)0))
  return VAR_2;

 VAR_18->driver = FUNC_2(VAR_16[VAR_5]);
 VAR_18->ifname = FUNC_2(VAR_16[VAR_8]);
 VAR_18->confname = FUNC_2(VAR_16[VAR_6]);

 if (VAR_16[VAR_3])
  VAR_18->bridge_ifname = FUNC_2(VAR_16[VAR_3]);

 if (VAR_16[VAR_4])
  VAR_18->ctrl_interface = FUNC_2(VAR_16[VAR_4]);

 if (VAR_16[VAR_7])
  VAR_18->hostapd_ctrl = FUNC_2(VAR_16[VAR_7]);

 if (!FUNC_6(VAR_17, VAR_18, ((void*)0)))
  return VAR_0;

 return VAR_1;
}
