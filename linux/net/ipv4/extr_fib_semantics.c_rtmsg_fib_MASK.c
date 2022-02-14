
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nl_info {int nl_net; TYPE_1__* nlh; int portid; } ;
struct fib_alias {int fa_info; int fa_tos; int fa_type; } ;
typedef int __be32 ;
struct TYPE_2__ {int nlmsg_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,int ,int ,int,int ,int ,int ,int,int ,int ,unsigned int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct sk_buff*,int ,int ,int ,TYPE_1__*,int ) ;
 int FUNC_6 (int ,int ,int) ;

void FUNC_7(int VAR_4, __be32 VAR_5, struct fib_alias *VAR_6,
        int VAR_7, u32 VAR_8, const struct nl_info *VAR_9,
        unsigned int VAR_10)
{
 struct sk_buff *VAR_11;
 u32 VAR_12 = VAR_9->nlh ? VAR_9->nlh->nlmsg_seq : 0;
 int VAR_13 = -VAR_1;

 VAR_11 = FUNC_4(FUNC_2(VAR_6->fa_info), VAR_2);
 if (!VAR_11)
  goto errout;

 VAR_13 = FUNC_1(VAR_11, VAR_9->portid, VAR_12, VAR_4, VAR_8,
       VAR_6->fa_type, VAR_5, VAR_7,
       VAR_6->fa_tos, VAR_6->fa_info, VAR_10);
 if (VAR_13 < 0) {

  FUNC_0(VAR_13 == -VAR_0);
  FUNC_3(VAR_11);
  goto errout;
 }
 FUNC_5(VAR_11, VAR_9->nl_net, VAR_9->portid, VAR_3,
      VAR_9->nlh, VAR_2);
 return;
errout:
 if (VAR_13 < 0)
  FUNC_6(VAR_9->nl_net, VAR_3, VAR_13);
}
