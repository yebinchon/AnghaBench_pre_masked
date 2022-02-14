
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; } ;
struct nlmsghdr {scalar_t__ nlmsg_len; scalar_t__ nlmsg_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct sk_buff*,struct nlmsghdr*,int ,int *) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 int VAR_4 ;
 int FUNC_3 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_5(struct sk_buff *VAR_5)
{
 struct nlmsghdr *VAR_6 = FUNC_4(VAR_5);

 if (VAR_5->len < VAR_3 ||
     VAR_6->nlmsg_len < VAR_3 ||
     VAR_5->len < VAR_6->nlmsg_len)
  return;

 if (!FUNC_1(VAR_5, VAR_0)) {
  FUNC_0(VAR_5, VAR_6, -VAR_1, ((void*)0));
  return;
 }

 if (VAR_6->nlmsg_type == VAR_2)
  FUNC_3(VAR_5, VAR_6);
 else
  FUNC_2(VAR_5, VAR_4);
}
