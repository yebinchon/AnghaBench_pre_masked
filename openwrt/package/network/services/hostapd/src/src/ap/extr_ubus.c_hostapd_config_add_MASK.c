
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubus_request_data {int dummy; } ;
struct ubus_object {int dummy; } ;
struct ubus_context {int dummy; } ;
struct hapd_interfaces {int dummy; } ;
struct blob_attr {int dummy; } ;
typedef int buf ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct blob_attr*) ;
 int FUNC_1 (struct blob_attr*) ;
 char* FUNC_2 (struct blob_attr*) ;
 int FUNC_3 (int ,int,struct blob_attr**,int ,int ) ;
 int VAR_5 ;
 struct hapd_interfaces* FUNC_4 (struct ubus_object*) ;
 scalar_t__ FUNC_5 (struct hapd_interfaces*,char*) ;
 int FUNC_6 (char*,int,char*,char*,char*) ;

__attribute__((used)) static int
FUNC_7(struct ubus_context *VAR_6, struct ubus_object *VAR_7,
     struct ubus_request_data *VAR_8, const char *VAR_9,
     struct blob_attr *VAR_10)
{
 struct blob_attr *VAR_11[VAR_4];
 struct hapd_interfaces *VAR_12 = FUNC_4(VAR_7);
 char VAR_13[128];

 FUNC_3(VAR_5, VAR_4, VAR_11, FUNC_0(VAR_10), FUNC_1(VAR_10));

 if (!VAR_11[VAR_0] || !VAR_11[VAR_1])
  return VAR_2;

 FUNC_6(VAR_13, sizeof(VAR_13), "bss_config=%s:%s",
  FUNC_2(VAR_11[VAR_1]),
  FUNC_2(VAR_11[VAR_0]));

 if (FUNC_5(VAR_12, VAR_13))
  return VAR_2;

 return VAR_3;
}
