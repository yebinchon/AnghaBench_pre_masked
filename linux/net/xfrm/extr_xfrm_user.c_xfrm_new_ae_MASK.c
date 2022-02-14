
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {scalar_t__ state; } ;
struct xfrm_state {int lock; int replay_esn; TYPE_2__ km; } ;
struct xfrm_mark {int dummy; } ;
struct TYPE_4__ {int family; int proto; int spi; int daddr; } ;
struct xfrm_aevent_id {TYPE_1__ sa_id; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_flags; int nlmsg_pid; int nlmsg_seq; int nlmsg_type; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_6__ {int aevent; } ;
struct km_event {TYPE_3__ data; int portid; int seq; int event; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct xfrm_state*,struct km_event*) ;
 struct xfrm_aevent_id* FUNC_1 (struct nlmsghdr*) ;
 struct net* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct nlattr**,struct xfrm_mark*) ;
 int FUNC_6 (int ,struct nlattr*) ;
 struct xfrm_state* FUNC_7 (struct net*,int ,int *,int ,int ,int ) ;
 int FUNC_8 (struct xfrm_state*) ;
 int FUNC_9 (struct xfrm_state*,struct nlattr**,int) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_10, struct nlmsghdr *VAR_11,
  struct nlattr **VAR_12)
{
 struct net *VAR_13 = FUNC_2(VAR_10->sk);
 struct xfrm_state *VAR_14;
 struct km_event VAR_15;
 int VAR_16 = -VAR_0;
 u32 VAR_17 = 0;
 struct xfrm_mark VAR_18;
 struct xfrm_aevent_id *VAR_19 = FUNC_1(VAR_11);
 struct nlattr *VAR_20 = VAR_12[VAR_7];
 struct nlattr *VAR_21 = VAR_12[VAR_5];
 struct nlattr *VAR_22 = VAR_12[VAR_4];
 struct nlattr *VAR_23 = VAR_12[VAR_3];
 struct nlattr *VAR_24 = VAR_12[VAR_6];

 if (!VAR_22 && !VAR_20 && !VAR_21 && !VAR_23 && !VAR_24)
  return VAR_16;


 if (!(VAR_11->nlmsg_flags&VAR_2))
  return VAR_16;

 VAR_17 = FUNC_5(VAR_12, &VAR_18);

 VAR_14 = FUNC_7(VAR_13, VAR_17, &VAR_19->sa_id.daddr, VAR_19->sa_id.spi, VAR_19->sa_id.proto, VAR_19->sa_id.family);
 if (VAR_14 == ((void*)0))
  return -VAR_1;

 if (VAR_14->km.state != VAR_9)
  goto out;

 VAR_16 = FUNC_6(VAR_14->replay_esn, VAR_21);
 if (VAR_16)
  goto out;

 FUNC_3(&VAR_14->lock);
 FUNC_9(VAR_14, VAR_12, 1);
 FUNC_4(&VAR_14->lock);

 VAR_15.event = VAR_11->nlmsg_type;
 VAR_15.seq = VAR_11->nlmsg_seq;
 VAR_15.portid = VAR_11->nlmsg_pid;
 VAR_15.data.aevent = VAR_8;
 FUNC_0(VAR_14, &VAR_15);
 VAR_16 = 0;
out:
 FUNC_8(VAR_14);
 return VAR_16;
}
