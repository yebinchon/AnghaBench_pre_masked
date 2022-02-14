
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_type; } ;
struct netlink_ext_ack {int dummy; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (struct sk_buff*,struct nlmsghdr*) ;
 int FUNC_1 (struct sk_buff*,struct nlmsghdr*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_4, struct nlmsghdr *VAR_5,
        struct netlink_ext_ack *VAR_6)
{
 int VAR_7;

 switch (VAR_5->nlmsg_type) {
 case 128:
 case 131:
  if (&FUNC_1 == ((void*)0))
   FUNC_4(VAR_0, 0);

  FUNC_2(&VAR_3);
  if (&FUNC_1 != ((void*)0))
   VAR_7 = FUNC_1(VAR_4, VAR_5);
  else
   VAR_7 = -VAR_2;
  FUNC_3(&VAR_3);

  return VAR_7;
 case 129:
 case 130:
  return FUNC_0(VAR_4, VAR_5);
 default:
  return -VAR_1;
 }
}
