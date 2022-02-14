
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto_ops {int owner; } ;
struct netlink_ext_ack {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tcf_proto_ops const* FUNC_0 (int ) ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 struct tcf_proto_ops* FUNC_2 (char const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static const struct tcf_proto_ops *
FUNC_7(const char *VAR_2, bool VAR_3,
       struct netlink_ext_ack *VAR_4)
{
 const struct tcf_proto_ops *VAR_5;

 VAR_5 = FUNC_2(VAR_2);
 if (VAR_5)
  return VAR_5;
 FUNC_1(VAR_4, "TC classifier not found");
 return FUNC_0(-VAR_1);
}
