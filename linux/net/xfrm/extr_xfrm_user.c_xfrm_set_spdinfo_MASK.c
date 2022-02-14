
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfrmu_spdhthresh {int lbits; int rbits; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_3__ {int lbits4; int rbits4; int lbits6; int rbits6; int lock; } ;
struct TYPE_4__ {TYPE_1__ policy_hthresh; } ;
struct net {TYPE_2__ xfrm; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 struct xfrmu_spdhthresh* FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr*) ;
 struct net* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct net*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_3, struct nlmsghdr *VAR_4,
       struct nlattr **VAR_5)
{
 struct net *VAR_6 = FUNC_2(VAR_3->sk);
 struct xfrmu_spdhthresh *VAR_7 = ((void*)0);
 struct xfrmu_spdhthresh *VAR_8 = ((void*)0);


 if (VAR_5[VAR_1]) {
  struct nlattr *VAR_9 = VAR_5[VAR_1];

  if (FUNC_1(VAR_9) < sizeof(*VAR_7))
   return -VAR_0;
  VAR_7 = FUNC_0(VAR_9);
  if (VAR_7->lbits > 32 || VAR_7->rbits > 32)
   return -VAR_0;
 }
 if (VAR_5[VAR_2]) {
  struct nlattr *VAR_10 = VAR_5[VAR_2];

  if (FUNC_1(VAR_10) < sizeof(*VAR_8))
   return -VAR_0;
  VAR_8 = FUNC_0(VAR_10);
  if (VAR_8->lbits > 128 || VAR_8->rbits > 128)
   return -VAR_0;
 }

 if (VAR_7 || VAR_8) {
  FUNC_3(&VAR_6->xfrm.policy_hthresh.lock);
  if (VAR_7) {
   VAR_6->xfrm.policy_hthresh.lbits4 = VAR_7->lbits;
   VAR_6->xfrm.policy_hthresh.rbits4 = VAR_7->rbits;
  }
  if (VAR_8) {
   VAR_6->xfrm.policy_hthresh.lbits6 = VAR_8->lbits;
   VAR_6->xfrm.policy_hthresh.rbits6 = VAR_8->rbits;
  }
  FUNC_4(&VAR_6->xfrm.policy_hthresh.lock);

  FUNC_5(VAR_6);
 }

 return 0;
}
