
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ubus_request_data {int dummy; } ;
struct ubus_object {int dummy; } ;
struct ubus_context {int dummy; } ;
struct hostapd_neighbor_entry {int dummy; } ;
struct hostapd_data {int own_addr; } ;
struct blob_attr {int dummy; } ;
struct TYPE_5__ {int head; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,void*) ;
 void* FUNC_2 (TYPE_1__*,char*) ;
 struct hostapd_data* FUNC_3 (struct ubus_object*) ;
 struct hostapd_neighbor_entry* FUNC_4 (struct hostapd_data*,int ,int *) ;
 int FUNC_5 (struct hostapd_data*) ;
 int FUNC_6 (struct hostapd_neighbor_entry*) ;
 int FUNC_7 (struct ubus_context*,struct ubus_request_data*,int ) ;

__attribute__((used)) static int
FUNC_8(struct ubus_context *VAR_2, struct ubus_object *VAR_3,
         struct ubus_request_data *VAR_4, const char *VAR_5,
         struct blob_attr *VAR_6)
{
 struct hostapd_data *VAR_7 = FUNC_3(VAR_3);
 struct hostapd_neighbor_entry *VAR_8;
 void *VAR_9;

 FUNC_5(VAR_7);

 VAR_8 = FUNC_4(VAR_7, VAR_7->own_addr, ((void*)0));
 if (!VAR_8)
  return VAR_0;

 FUNC_0(&VAR_1, 0);

 VAR_9 = FUNC_2(&VAR_1, "value");
 FUNC_6(VAR_8);
 FUNC_1(&VAR_1, VAR_9);

 FUNC_7(VAR_2, VAR_4, VAR_1.head);

 return 0;
}
