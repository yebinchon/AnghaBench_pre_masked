
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct genl_info {TYPE_1__* genlhdr; struct netlink_ext_ack* extack; int * attrs; } ;
struct TYPE_2__ {int cmd; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;


 int FUNC_0 (int,int,struct netlink_ext_ack*) ;
 int FUNC_1 (int,int,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_3,
   struct genl_info *VAR_4)
{
 bool VAR_5 = !!VAR_4->attrs[VAR_2];
 bool VAR_6 = !!VAR_4->attrs[VAR_1];
 struct netlink_ext_ack *VAR_7 = VAR_4->extack;




 if (!VAR_5 && !VAR_6)
  VAR_5 = 1;

 switch (VAR_4->genlhdr->cmd) {
 case 129:
  return FUNC_0(VAR_5, VAR_6, VAR_7);
 case 128:
  FUNC_1(VAR_5, VAR_6, VAR_7);
  return 0;
 }

 return -VAR_0;
}
