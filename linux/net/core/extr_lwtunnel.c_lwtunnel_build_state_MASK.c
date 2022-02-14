
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct lwtunnel_state {int dummy; } ;
struct lwtunnel_encap_ops {int (* build_state ) (struct nlattr*,unsigned int,void const*,struct lwtunnel_state**,struct netlink_ext_ack*) ;int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct netlink_ext_ack*,struct nlattr*,char*) ;
 scalar_t__ FUNC_1 (int) ;
 int * VAR_4 ;
 int FUNC_2 (int ) ;
 struct lwtunnel_encap_ops* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct nlattr*,unsigned int,void const*,struct lwtunnel_state**,struct netlink_ext_ack*) ;
 scalar_t__ FUNC_7 (int ) ;

int FUNC_8(u16 VAR_5,
    struct nlattr *VAR_6, unsigned int VAR_7,
    const void *VAR_8, struct lwtunnel_state **VAR_9,
    struct netlink_ext_ack *VAR_10)
{
 const struct lwtunnel_encap_ops *VAR_11;
 bool VAR_12 = 0;
 int VAR_13 = -VAR_0;

 if (VAR_5 == VAR_3 ||
     VAR_5 > VAR_2) {
  FUNC_0(VAR_10, VAR_6,
        "Unknown LWT encapsulation type");
  return VAR_13;
 }

 VAR_13 = -VAR_1;
 FUNC_4();
 VAR_11 = FUNC_3(VAR_4[VAR_5]);
 if (FUNC_1(VAR_11 && VAR_11->build_state && FUNC_7(VAR_11->owner)))
  VAR_12 = 1;
 FUNC_5();

 if (VAR_12) {
  VAR_13 = VAR_11->build_state(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
  if (VAR_13)
   FUNC_2(VAR_11->owner);
 } else {



  FUNC_0(VAR_10, VAR_6,
        "LWT encapsulation type not supported");
 }

 return VAR_13;
}
