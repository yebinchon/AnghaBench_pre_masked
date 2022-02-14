
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;


 int FUNC_1 () ;
 int FUNC_2 (struct netlink_ext_ack*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(int VAR_3, struct netlink_ext_ack *VAR_4)
{
 int VAR_5 = 0;

 if (VAR_3 == VAR_2) {
  FUNC_0(VAR_4, "Trace state already set to requested state");
  return -VAR_0;
 }

 switch (VAR_3) {
 case 128:
  VAR_5 = FUNC_2(VAR_4);
  break;
 case 129:
  FUNC_1();
  break;
 default:
  VAR_5 = 1;
  break;
 }

 if (!VAR_5)
  VAR_2 = VAR_3;
 else
  VAR_5 = -VAR_1;

 return VAR_5;
}
