
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct xfrmu_spdinfo {int rbits; int lbits; int spdhmcnt; int spdhcnt; int fwdscnt; int outscnt; int inscnt; int fwdcnt; int outcnt; int incnt; } ;
struct xfrmu_spdhthresh {int rbits; int lbits; int spdhmcnt; int spdhcnt; int fwdscnt; int outscnt; int inscnt; int fwdcnt; int outcnt; int incnt; } ;
struct xfrmu_spdhinfo {int rbits; int lbits; int spdhmcnt; int spdhcnt; int fwdscnt; int outscnt; int inscnt; int fwdcnt; int outcnt; int incnt; } ;
struct xfrmk_spdinfo {int spdhmcnt; int spdhcnt; int fwdscnt; int outscnt; int inscnt; int fwdcnt; int outcnt; int incnt; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct TYPE_3__ {int rbits6; int lbits6; int rbits4; int lbits4; int lock; } ;
struct TYPE_4__ {TYPE_1__ policy_hthresh; } ;
struct net {TYPE_2__ xfrm; } ;
typedef int spt6 ;
typedef int spt4 ;
typedef int sph ;
typedef int spc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,int ,int,struct xfrmu_spdinfo*) ;
 int FUNC_1 (struct sk_buff*,struct nlmsghdr*) ;
 int * FUNC_2 (struct nlmsghdr*) ;
 int FUNC_3 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_4 (struct sk_buff*,int ,int ,int ,int,int ) ;
 unsigned int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,unsigned int) ;
 int FUNC_7 (struct net*,struct xfrmk_spdinfo*) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_6, struct net *VAR_7,
    u32 VAR_8, u32 VAR_9, u32 VAR_10)
{
 struct xfrmk_spdinfo VAR_11;
 struct xfrmu_spdinfo VAR_12;
 struct xfrmu_spdhinfo VAR_13;
 struct xfrmu_spdhthresh VAR_14, VAR_15;
 struct nlmsghdr *VAR_16;
 int VAR_17;
 u32 *VAR_18;
 unsigned VAR_19;

 VAR_16 = FUNC_4(VAR_6, VAR_8, VAR_9, VAR_5, sizeof(u32), 0);
 if (VAR_16 == ((void*)0))
  return -VAR_0;

 VAR_18 = FUNC_2(VAR_16);
 *VAR_18 = VAR_10;
 FUNC_7(VAR_7, &VAR_11);
 VAR_12.incnt = VAR_11.incnt;
 VAR_12.outcnt = VAR_11.outcnt;
 VAR_12.fwdcnt = VAR_11.fwdcnt;
 VAR_12.inscnt = VAR_11.inscnt;
 VAR_12.outscnt = VAR_11.outscnt;
 VAR_12.fwdscnt = VAR_11.fwdscnt;
 VAR_13.spdhcnt = VAR_11.spdhcnt;
 VAR_13.spdhmcnt = VAR_11.spdhmcnt;

 do {
  VAR_19 = FUNC_5(&VAR_7->xfrm.policy_hthresh.lock);

  VAR_14 = VAR_7->xfrm.policy_hthresh.lbits4;
  VAR_14 = VAR_7->xfrm.policy_hthresh.rbits4;
  VAR_15 = VAR_7->xfrm.policy_hthresh.lbits6;
  VAR_15 = VAR_7->xfrm.policy_hthresh.rbits6;
 } while (FUNC_6(&VAR_7->xfrm.policy_hthresh.lock, VAR_19));

 VAR_17 = FUNC_0(VAR_6, VAR_2, sizeof(VAR_12), &VAR_12);
 if (!VAR_17)
  VAR_17 = FUNC_0(VAR_6, VAR_1, sizeof(VAR_13), &VAR_13);
 if (!VAR_17)
  VAR_17 = FUNC_0(VAR_6, VAR_3, sizeof(VAR_14), &VAR_14);
 if (!VAR_17)
  VAR_17 = FUNC_0(VAR_6, VAR_4, sizeof(VAR_15), &VAR_15);
 if (VAR_17) {
  FUNC_1(VAR_6, VAR_16);
  return VAR_17;
 }

 FUNC_3(VAR_6, VAR_16);
 return 0;
}
