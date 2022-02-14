
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct xfrm_usersa_id {int family; int proto; int spi; int daddr; } ;
struct xfrm_state {int lock; } ;
struct xfrm_mark {int dummy; } ;
struct xfrm_aevent_id {int flags; struct xfrm_usersa_id sa_id; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_pid; int nlmsg_seq; } ;
struct nlattr {int dummy; } ;
struct TYPE_5__ {int nlsk; } ;
struct net {TYPE_2__ xfrm; } ;
struct TYPE_4__ {int aevent; } ;
struct km_event {int portid; int seq; TYPE_1__ data; } ;
struct TYPE_6__ {int portid; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,struct xfrm_state*,struct km_event*) ;
 struct xfrm_aevent_id* FUNC_3 (struct nlmsghdr*) ;
 struct sk_buff* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,struct sk_buff*,int ) ;
 struct net* FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct xfrm_state*) ;
 int FUNC_10 (struct nlattr**,struct xfrm_mark*) ;
 struct xfrm_state* FUNC_11 (struct net*,int ,int *,int ,int ,int ) ;
 int FUNC_12 (struct xfrm_state*) ;

__attribute__((used)) static int FUNC_13(struct sk_buff *VAR_3, struct nlmsghdr *VAR_4,
  struct nlattr **VAR_5)
{
 struct net *VAR_6 = FUNC_6(VAR_3->sk);
 struct xfrm_state *VAR_7;
 struct sk_buff *VAR_8;
 int VAR_9;
 struct km_event VAR_10;
 u32 VAR_11;
 struct xfrm_mark VAR_12;
 struct xfrm_aevent_id *VAR_13 = FUNC_3(VAR_4);
 struct xfrm_usersa_id *VAR_14 = &VAR_13->sa_id;

 VAR_11 = FUNC_10(VAR_5, &VAR_12);

 VAR_7 = FUNC_11(VAR_6, VAR_11, &VAR_14->daddr, VAR_14->spi, VAR_14->proto, VAR_14->family);
 if (VAR_7 == ((void*)0))
  return -VAR_1;

 VAR_8 = FUNC_4(FUNC_9(VAR_7), VAR_2);
 if (VAR_8 == ((void*)0)) {
  FUNC_12(VAR_7);
  return -VAR_0;
 }






 FUNC_7(&VAR_7->lock);
 VAR_10.data.aevent = VAR_13->flags;
 VAR_10.seq = VAR_4->nlmsg_seq;
 VAR_10.portid = VAR_4->nlmsg_pid;

 VAR_9 = FUNC_2(VAR_8, VAR_7, &VAR_10);
 FUNC_0(VAR_9 < 0);

 VAR_9 = FUNC_5(VAR_6->xfrm.nlsk, VAR_8, FUNC_1(VAR_3).portid);
 FUNC_8(&VAR_7->lock);
 FUNC_12(VAR_7);
 return VAR_9;
}
