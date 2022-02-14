
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nla_policy {scalar_t__ validation_type; int type; scalar_t__ min; scalar_t__ max; } ;
struct netlink_ext_ack {int dummy; } ;
typedef scalar_t__ s64 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct netlink_ext_ack*,struct nlattr const*,char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct nlattr const*) ;
 scalar_t__ FUNC_3 (struct nlattr const*) ;
 scalar_t__ FUNC_4 (struct nlattr const*) ;
 scalar_t__ FUNC_5 (struct nlattr const*) ;
 scalar_t__ FUNC_6 (struct nlattr const*) ;
 scalar_t__ FUNC_7 (struct nlattr const*) ;
 scalar_t__ FUNC_8 (struct nlattr const*) ;
 scalar_t__ FUNC_9 (struct nlattr const*) ;

__attribute__((used)) static int FUNC_10(const struct nla_policy *VAR_5,
      const struct nlattr *VAR_6,
      struct netlink_ext_ack *VAR_7)
{
 bool VAR_8, VAR_9;
 s64 VAR_10;

 VAR_8 = VAR_5->validation_type == VAR_4 ||
         VAR_5->validation_type == VAR_3;
 VAR_9 = VAR_5->validation_type == VAR_4 ||
         VAR_5->validation_type == VAR_2;

 switch (VAR_5->type) {
 case 128:
  VAR_10 = FUNC_9(VAR_6);
  break;
 case 131:
  VAR_10 = FUNC_6(VAR_6);
  break;
 case 130:
  VAR_10 = FUNC_7(VAR_6);
  break;
 case 132:
  VAR_10 = FUNC_5(VAR_6);
  break;
 case 135:
  VAR_10 = FUNC_2(VAR_6);
  break;
 case 134:
  VAR_10 = FUNC_3(VAR_6);
  break;
 case 133:
  VAR_10 = FUNC_4(VAR_6);
  break;
 case 129:

  if ((VAR_8 && FUNC_8(VAR_6) < VAR_5->min) ||
      (VAR_9 && FUNC_8(VAR_6) > VAR_5->max)) {
   FUNC_0(VAR_7, VAR_6,
         "integer out of range");
   return -VAR_1;
  }
  return 0;
 default:
  FUNC_1(1);
  return -VAR_0;
 }

 if ((VAR_8 && VAR_10 < VAR_5->min) ||
     (VAR_9 && VAR_10 > VAR_5->max)) {
  FUNC_0(VAR_7, VAR_6,
        "integer out of range");
  return -VAR_1;
 }

 return 0;
}
