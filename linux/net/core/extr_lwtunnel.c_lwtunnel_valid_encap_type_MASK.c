
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct netlink_ext_ack {int dummy; } ;
struct lwtunnel_encap_ops {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 () ;
 int * VAR_4 ;
 char* FUNC_2 (size_t) ;
 struct lwtunnel_encap_ops* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 () ;

int FUNC_8(u16 VAR_5, struct netlink_ext_ack *VAR_6)
{
 const struct lwtunnel_encap_ops *VAR_7;
 int VAR_8 = -VAR_0;

 if (VAR_5 == VAR_3 ||
     VAR_5 > VAR_2) {
  FUNC_0(VAR_6, "Unknown lwt encapsulation type");
  return VAR_8;
 }

 FUNC_4();
 VAR_7 = FUNC_3(VAR_4[VAR_5]);
 FUNC_5();
 VAR_8 = VAR_7 ? 0 : -VAR_1;
 if (VAR_8 < 0)
  FUNC_0(VAR_6, "lwt encapsulation type not supported");

 return VAR_8;
}
