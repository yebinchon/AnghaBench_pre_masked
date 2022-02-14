
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubus_request {int dummy; } ;
struct blob_attr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct blob_attr*) ;
 int FUNC_1 (struct blob_attr*) ;
 int FUNC_2 (struct blob_attr*) ;
 int FUNC_3 (int ,int ,struct blob_attr**,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(struct ubus_request *VAR_4 __attribute__((unused)),
  int VAR_5 __attribute__((unused)), struct blob_attr *VAR_6)
{
 struct blob_attr *VAR_7[VAR_0];
 FUNC_3(VAR_3, VAR_1, VAR_7, FUNC_0(VAR_6), FUNC_1(VAR_6));

 if (!VAR_7[VAR_0])
  return;

 VAR_2 = FUNC_2(VAR_7[VAR_0]);
}
