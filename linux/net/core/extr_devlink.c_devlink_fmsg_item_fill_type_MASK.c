
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct devlink_fmsg_item {int nla_type; } ;


 int VAR_0 ;
 int VAR_1 ;






 int FUNC_0 (struct sk_buff*,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct devlink_fmsg_item *VAR_2, struct sk_buff *VAR_3)
{
 switch (VAR_2->nla_type) {
 case 132:
 case 128:
 case 130:
 case 129:
 case 131:
 case 133:
  return FUNC_0(VAR_3, VAR_0,
      VAR_2->nla_type);
 default:
  return -VAR_1;
 }
}
