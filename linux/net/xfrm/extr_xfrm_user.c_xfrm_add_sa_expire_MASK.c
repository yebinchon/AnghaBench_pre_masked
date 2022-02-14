
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int proto; int spi; int daddr; } ;
struct xfrm_usersa_info {int family; TYPE_1__ id; } ;
struct xfrm_user_expire {scalar_t__ hard; struct xfrm_usersa_info state; } ;
struct TYPE_4__ {scalar_t__ state; } ;
struct xfrm_state {int lock; TYPE_2__ km; } ;
struct xfrm_mark {int dummy; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_pid; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct xfrm_state*) ;
 int FUNC_1 (struct xfrm_state*,scalar_t__,int ) ;
 struct xfrm_user_expire* FUNC_2 (struct nlmsghdr*) ;
 struct net* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct xfrm_state*,int,int) ;
 int FUNC_7 (struct nlattr**,struct xfrm_mark*) ;
 struct xfrm_state* FUNC_8 (struct net*,int ,int *,int ,int ,int ) ;
 int FUNC_9 (struct xfrm_state*) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_3, struct nlmsghdr *VAR_4,
  struct nlattr **VAR_5)
{
 struct net *VAR_6 = FUNC_3(VAR_3->sk);
 struct xfrm_state *VAR_7;
 int VAR_8;
 struct xfrm_user_expire *VAR_9 = FUNC_2(VAR_4);
 struct xfrm_usersa_info *VAR_10 = &VAR_9->state;
 struct xfrm_mark VAR_11;
 u32 VAR_12 = FUNC_7(VAR_5, &VAR_11);

 VAR_7 = FUNC_8(VAR_6, VAR_12, &VAR_10->id.daddr, VAR_10->id.spi, VAR_10->id.proto, VAR_10->family);

 VAR_8 = -VAR_1;
 if (VAR_7 == ((void*)0))
  return VAR_8;

 FUNC_4(&VAR_7->lock);
 VAR_8 = -VAR_0;
 if (VAR_7->km.state != VAR_2)
  goto out;
 FUNC_1(VAR_7, VAR_9->hard, VAR_4->nlmsg_pid);

 if (VAR_9->hard) {
  FUNC_0(VAR_7);
  FUNC_6(VAR_7, 1, 1);
 }
 VAR_8 = 0;
out:
 FUNC_5(&VAR_7->lock);
 FUNC_9(VAR_7);
 return VAR_8;
}
