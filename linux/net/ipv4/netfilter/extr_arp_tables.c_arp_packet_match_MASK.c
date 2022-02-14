
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int addr_len; } ;
struct TYPE_8__ {int s_addr; } ;
struct TYPE_7__ {int s_addr; } ;
struct TYPE_6__ {int s_addr; } ;
struct TYPE_5__ {int s_addr; } ;
struct arpt_arp {int arpop_mask; int arpop; int arhrd_mask; int arhrd; int arpro_mask; int arpro; int arhln_mask; int arhln; int outiface_mask; int outiface; int iniface_mask; int iniface; TYPE_4__ tgt; TYPE_3__ tmsk; TYPE_2__ src; TYPE_1__ smsk; int tgt_devaddr; int src_devaddr; } ;
struct arphdr {int ar_op; int ar_hrd; int ar_pro; int ar_hln; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct arpt_arp const*,int ,int) ;
 int FUNC_1 (int *,char const*,int ) ;
 long FUNC_2 (char const*,int ,int ) ;
 int FUNC_3 (int*,char const*,int) ;

__attribute__((used)) static inline int FUNC_4(const struct arphdr *VAR_10,
       struct net_device *VAR_11,
       const char *VAR_12,
       const char *VAR_13,
       const struct arpt_arp *VAR_14)
{
 const char *VAR_15 = (char *)(VAR_10 + 1);
 const char *VAR_16, *VAR_17;
 __be32 VAR_18, VAR_19;
 long VAR_20;

 if (FUNC_0(VAR_14, VAR_2,
      (VAR_10->ar_op & VAR_14->arpop_mask) != VAR_14->arpop))
  return 0;

 if (FUNC_0(VAR_14, VAR_1,
      (VAR_10->ar_hrd & VAR_14->arhrd_mask) != VAR_14->arhrd))
  return 0;

 if (FUNC_0(VAR_14, VAR_3,
      (VAR_10->ar_pro & VAR_14->arpro_mask) != VAR_14->arpro))
  return 0;

 if (FUNC_0(VAR_14, VAR_0,
      (VAR_10->ar_hln & VAR_14->arhln_mask) != VAR_14->arhln))
  return 0;

 VAR_16 = VAR_15;
 VAR_15 += VAR_11->addr_len;
 FUNC_3(&VAR_18, VAR_15, sizeof(u32));
 VAR_15 += sizeof(u32);
 VAR_17 = VAR_15;
 VAR_15 += VAR_11->addr_len;
 FUNC_3(&VAR_19, VAR_15, sizeof(u32));

 if (FUNC_0(VAR_14, VAR_4,
      FUNC_1(&VAR_14->src_devaddr, VAR_16,
     VAR_11->addr_len)) ||
     FUNC_0(VAR_14, VAR_6,
      FUNC_1(&VAR_14->tgt_devaddr, VAR_17,
     VAR_11->addr_len)))
  return 0;

 if (FUNC_0(VAR_14, VAR_5,
      (VAR_18 & VAR_14->smsk.s_addr) != VAR_14->src.s_addr) ||
     FUNC_0(VAR_14, VAR_7,
      (VAR_19 & VAR_14->tmsk.s_addr) != VAR_14->tgt.s_addr))
  return 0;


 VAR_20 = FUNC_2(VAR_12, VAR_14->iniface, VAR_14->iniface_mask);

 if (FUNC_0(VAR_14, VAR_8, VAR_20 != 0))
  return 0;

 VAR_20 = FUNC_2(VAR_13, VAR_14->outiface, VAR_14->outiface_mask);

 if (FUNC_0(VAR_14, VAR_9, VAR_20 != 0))
  return 0;

 return 1;
}
