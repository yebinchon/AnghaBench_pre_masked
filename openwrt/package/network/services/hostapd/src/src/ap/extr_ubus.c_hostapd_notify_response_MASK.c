
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct ubus_request_data {int dummy; } ;
struct ubus_object {int dummy; } ;
struct ubus_context {int dummy; } ;
struct TYPE_2__ {int notify_response; } ;
struct hostapd_data {TYPE_1__ ubus; } ;
struct blob_attr {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct blob_attr*) ;
 int FUNC_1 (struct blob_attr*) ;
 int FUNC_2 (struct blob_attr*) ;
 int FUNC_3 (int ,int,struct blob_attr**,int ,int ) ;
 struct hostapd_data* FUNC_4 (struct ubus_object*) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_5(struct ubus_context *VAR_5, struct ubus_object *VAR_6,
   struct ubus_request_data *VAR_7, const char *VAR_8,
   struct blob_attr *VAR_9)
{
 struct blob_attr *VAR_10[VAR_3];
 struct hostapd_data *VAR_11 = FUNC_4(VAR_6);
 struct wpabuf *VAR_12;
 const char *VAR_13;
 size_t VAR_14;

 FUNC_3(VAR_4, VAR_3, VAR_10,
        FUNC_0(VAR_9), FUNC_1(VAR_9));

 if (!VAR_10[VAR_0])
  return VAR_1;

 VAR_11->ubus.notify_response = FUNC_2(VAR_10[VAR_0]);

 return VAR_2;
}
