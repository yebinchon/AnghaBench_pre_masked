
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ts_pktinfo ;
struct sk_buff {scalar_t__ len; } ;
struct scm_ts_pktinfo {scalar_t__ pkt_length; int if_index; } ;
struct net_device {int ifindex; } ;
struct msghdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct net_device* FUNC_0 (int ) ;
 int FUNC_1 (struct scm_ts_pktinfo*,int ,int) ;
 int FUNC_2 (struct msghdr*,int ,int ,int,struct scm_ts_pktinfo*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_8(struct msghdr *VAR_2, struct sk_buff *VAR_3)
{
 struct scm_ts_pktinfo VAR_4;
 struct net_device *VAR_5;

 if (!FUNC_5(VAR_3))
  return;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));

 FUNC_3();
 VAR_5 = FUNC_0(FUNC_7(VAR_3));
 if (VAR_5)
  VAR_4.if_index = VAR_5->ifindex;
 FUNC_4();

 VAR_4.pkt_length = VAR_3->len - FUNC_6(VAR_3);
 FUNC_2(VAR_2, VAR_1, VAR_0,
   sizeof(VAR_4), &VAR_4);
}
