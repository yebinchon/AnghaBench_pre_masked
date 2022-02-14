
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nl_info {int nl_net; TYPE_1__* nlh; int portid; } ;
struct nexthop {int dummy; } ;
struct TYPE_2__ {unsigned int nlmsg_flags; int nlmsg_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct nexthop*,int,int ,int ,unsigned int) ;
 int FUNC_4 (struct nexthop*) ;
 struct sk_buff* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct sk_buff*,int ,int ,int ,TYPE_1__*,int ) ;
 int FUNC_7 (int ,int ,int) ;

__attribute__((used)) static void FUNC_8(int VAR_3, struct nexthop *VAR_4, struct nl_info *VAR_5)
{
 unsigned int VAR_6 = VAR_5->nlh ? VAR_5->nlh->nlmsg_flags : 0;
 u32 VAR_7 = VAR_5->nlh ? VAR_5->nlh->nlmsg_seq : 0;
 struct sk_buff *VAR_8;
 int VAR_9 = -VAR_1;

 VAR_8 = FUNC_5(FUNC_4(VAR_4), FUNC_1());
 if (!VAR_8)
  goto errout;

 VAR_9 = FUNC_3(VAR_8, VAR_4, VAR_3, VAR_5->portid, VAR_7, VAR_6);
 if (VAR_9 < 0) {

  FUNC_0(VAR_9 == -VAR_0);
  FUNC_2(VAR_8);
  goto errout;
 }

 FUNC_6(VAR_8, VAR_5->nl_net, VAR_5->portid, VAR_2,
      VAR_5->nlh, FUNC_1());
 return;
errout:
 if (VAR_9 < 0)
  FUNC_7(VAR_5->nl_net, VAR_2, VAR_9);
}
