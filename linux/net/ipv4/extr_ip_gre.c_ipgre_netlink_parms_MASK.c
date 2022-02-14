
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct net_device {scalar_t__ type; } ;
struct TYPE_2__ {int frag_off; void* tos; void* ttl; void* daddr; void* saddr; int protocol; } ;
struct ip_tunnel_parm {TYPE_1__ iph; void* o_key; void* i_key; void* o_flags; void* i_flags; void* link; } ;
struct ip_tunnel {int ignore_df; int collect_md; int erspan_ver; int index; int dir; int hwid; } ;
typedef void* __u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ip_tunnel_parm*,int ,int) ;
 struct ip_tunnel* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct nlattr*) ;
 void* FUNC_5 (struct nlattr*) ;
 void* FUNC_6 (struct nlattr*) ;
 int FUNC_7 (struct nlattr*) ;
 void* FUNC_8 (struct nlattr*) ;
 void* FUNC_9 (struct nlattr*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_27,
    struct nlattr *VAR_28[],
    struct nlattr *VAR_29[],
    struct ip_tunnel_parm *VAR_30,
    __u32 *VAR_31)
{
 struct ip_tunnel *VAR_32 = FUNC_3(VAR_27);

 FUNC_2(VAR_30, 0, sizeof(*VAR_30));

 VAR_30->iph.protocol = VAR_25;

 if (!VAR_28)
  return 0;

 if (VAR_28[VAR_16])
  VAR_30->link = FUNC_8(VAR_28[VAR_16]);

 if (VAR_28[VAR_13])
  VAR_30->i_flags = FUNC_0(FUNC_4(VAR_28[VAR_13]));

 if (VAR_28[VAR_18])
  VAR_30->o_flags = FUNC_0(FUNC_4(VAR_28[VAR_18]));

 if (VAR_28[VAR_15])
  VAR_30->i_key = FUNC_5(VAR_28[VAR_15]);

 if (VAR_28[VAR_19])
  VAR_30->o_key = FUNC_5(VAR_28[VAR_19]);

 if (VAR_28[VAR_17])
  VAR_30->iph.saddr = FUNC_6(VAR_28[VAR_17]);

 if (VAR_28[VAR_21])
  VAR_30->iph.daddr = FUNC_6(VAR_28[VAR_21]);

 if (VAR_28[VAR_23])
  VAR_30->iph.ttl = FUNC_9(VAR_28[VAR_23]);

 if (VAR_28[VAR_22])
  VAR_30->iph.tos = FUNC_9(VAR_28[VAR_22]);

 if (!VAR_28[VAR_20] || FUNC_9(VAR_28[VAR_20])) {
  if (VAR_32->ignore_df)
   return -VAR_4;
  VAR_30->iph.frag_off = FUNC_1(VAR_26);
 }

 if (VAR_28[VAR_7]) {
  VAR_32->collect_md = 1;
  if (VAR_27->type == VAR_0)
   VAR_27->type = VAR_1;
 }

 if (VAR_28[VAR_14]) {
  if (FUNC_9(VAR_28[VAR_14])
    && (VAR_30->iph.frag_off & FUNC_1(VAR_26)))
   return -VAR_4;
  VAR_32->ignore_df = !!FUNC_9(VAR_28[VAR_14]);
 }

 if (VAR_28[VAR_12])
  *VAR_31 = FUNC_8(VAR_28[VAR_12]);

 if (VAR_28[VAR_11]) {
  VAR_32->erspan_ver = FUNC_9(VAR_28[VAR_11]);

  if (VAR_32->erspan_ver != 1 && VAR_32->erspan_ver != 2)
   return -VAR_4;
 }

 if (VAR_32->erspan_ver == 1) {
  if (VAR_28[VAR_10]) {
   VAR_32->index = FUNC_8(VAR_28[VAR_10]);
   if (VAR_32->index & ~VAR_24)
    return -VAR_4;
  }
 } else if (VAR_32->erspan_ver == 2) {
  if (VAR_28[VAR_8]) {
   VAR_32->dir = FUNC_9(VAR_28[VAR_8]);
   if (VAR_32->dir & ~(VAR_2 >> VAR_3))
    return -VAR_4;
  }
  if (VAR_28[VAR_9]) {
   VAR_32->hwid = FUNC_7(VAR_28[VAR_9]);
   if (VAR_32->hwid & ~(VAR_5 >> VAR_6))
    return -VAR_4;
  }
 }

 return 0;
}
