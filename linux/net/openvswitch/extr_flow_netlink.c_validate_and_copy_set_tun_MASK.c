
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sw_flow_match {int dummy; } ;
struct TYPE_6__ {scalar_t__ dst; } ;
struct TYPE_7__ {TYPE_2__ ipv4; } ;
struct TYPE_8__ {TYPE_3__ u; } ;
struct sw_flow_key {scalar_t__ tun_proto; scalar_t__ tun_opts_len; TYPE_4__ tun_key; } ;
struct sw_flow_actions {int dummy; } ;
struct ovs_tunnel_info {struct metadata_dst* tun_dst; } ;
typedef struct nlattr const nlattr ;
struct ip_tunnel_info {TYPE_4__ key; int mode; int dst_cache; } ;
struct TYPE_5__ {struct ip_tunnel_info tun_info; } ;
struct metadata_dst {TYPE_1__ u; } ;
struct dst_entry {int dummy; } ;
typedef scalar_t__ __be16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct nlattr const*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;



 int FUNC_1 (struct nlattr const*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (struct sw_flow_key*,scalar_t__) ;
 struct nlattr const* FUNC_3 (struct sw_flow_actions**,int ,int *,int,int) ;
 int FUNC_4 (struct sw_flow_actions*,int) ;
 int FUNC_5 (struct sw_flow_actions**,int ,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct dst_entry*) ;
 int FUNC_8 (struct ovs_tunnel_info*,struct sw_flow_match*,int,int) ;
 int FUNC_9 (struct ip_tunnel_info*,int ,scalar_t__,scalar_t__) ;
 struct metadata_dst* FUNC_10 (scalar_t__,int ,int ) ;
 struct ovs_tunnel_info* FUNC_11 (struct nlattr const*) ;
 int FUNC_12 (struct sw_flow_match*,struct sw_flow_key*,int,int *) ;
 int FUNC_13 (struct sw_flow_key*) ;

__attribute__((used)) static int FUNC_14(const struct nlattr *VAR_13,
         struct sw_flow_actions **VAR_14, bool VAR_15)
{
 struct sw_flow_match VAR_16;
 struct sw_flow_key VAR_17;
 struct metadata_dst *VAR_18;
 struct ip_tunnel_info *VAR_19;
 struct ovs_tunnel_info *VAR_20;
 struct nlattr *VAR_21;
 int VAR_22 = 0, VAR_23, VAR_24;
 __be16 VAR_25;

 VAR_25 = 0;
 FUNC_12(&VAR_16, &VAR_17, 1, ((void*)0));
 VAR_24 = FUNC_8(FUNC_11(VAR_13), &VAR_16, 0, VAR_15);
 if (VAR_24 < 0)
  return VAR_24;

 if (VAR_17.tun_opts_len) {
  switch (VAR_24) {
  case 129:
   VAR_22 = FUNC_13(&VAR_17);
   if (VAR_22 < 0)
    return VAR_22;
   VAR_25 = VAR_11;
   break;
  case 128:
   VAR_25 = VAR_12;
   break;
  case 130:
   VAR_25 = VAR_10;
   break;
  }
 }

 VAR_23 = FUNC_5(VAR_14, VAR_8, VAR_15);
 if (VAR_23 < 0)
  return VAR_23;

 VAR_18 = FUNC_10(VAR_17.tun_opts_len, VAR_7,
         VAR_3);

 if (!VAR_18)
  return -VAR_2;

 VAR_22 = FUNC_6(&VAR_18->u.tun_info.dst_cache, VAR_3);
 if (VAR_22) {
  FUNC_7((struct dst_entry *)VAR_18);
  return VAR_22;
 }

 VAR_21 = FUNC_3(VAR_14, VAR_9, ((void*)0),
    sizeof(*VAR_20), VAR_15);
 if (FUNC_0(VAR_21)) {
  FUNC_7((struct dst_entry *)VAR_18);
  return FUNC_1(VAR_21);
 }

 VAR_20 = FUNC_11(VAR_21);
 VAR_20->tun_dst = VAR_18;

 VAR_19 = &VAR_18->u.tun_info;
 VAR_19->mode = VAR_6;
 if (VAR_17.tun_proto == VAR_1)
  VAR_19->mode |= VAR_5;
 else if (VAR_17.tun_proto == VAR_0 && VAR_17.tun_key.u.ipv4.dst == 0)
  VAR_19->mode |= VAR_4;
 VAR_19->key = VAR_17.tun_key;





 FUNC_9(VAR_19,
    FUNC_2(&VAR_17, VAR_17.tun_opts_len),
    VAR_17.tun_opts_len, VAR_25);
 FUNC_4(*VAR_14, VAR_23);

 return VAR_22;
}
