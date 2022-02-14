
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int proto; int frag; } ;
struct sw_flow_key {TYPE_1__ ip; } ;
struct sw_flow_actions {int dummy; } ;
struct ovs_key_ipv6 {int ipv6_label; int ipv6_frag; int ipv6_proto; } ;
struct ovs_key_ipv4 {int ipv4_frag; int ipv4_proto; } ;
typedef struct nlattr const nlattr ;
typedef int __be16 ;
struct TYPE_4__ {int len; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 struct nlattr const* FUNC_2 (struct sw_flow_actions**,int,int *,int,int) ;
 int FUNC_3 (struct sw_flow_actions*,int) ;
 int FUNC_4 (struct sw_flow_actions**,int ,int) ;
 int FUNC_5 (size_t,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (void*,void*,size_t) ;
 int FUNC_10 (void*,int,size_t) ;
 void* FUNC_11 (struct nlattr const*) ;
 size_t FUNC_12 (struct nlattr const*) ;
 size_t FUNC_13 (size_t) ;
 int FUNC_14 (struct nlattr const*) ;
 int FUNC_15 (int ) ;
 TYPE_2__* VAR_10 ;
 int FUNC_16 (struct nlattr const*,struct sw_flow_actions**,int) ;
 int FUNC_17 (void*,size_t) ;
 int FUNC_18 (void*,int,int,int) ;

__attribute__((used)) static int FUNC_19(const struct nlattr *VAR_11,
   const struct sw_flow_key *VAR_12,
   struct sw_flow_actions **VAR_13, bool *VAR_14,
   u8 VAR_15, __be16 VAR_16, bool VAR_17, bool VAR_18)
{
 const struct nlattr *VAR_19 = FUNC_11(VAR_11);
 int VAR_20 = FUNC_14(VAR_19);
 size_t VAR_21;


 if (FUNC_13(FUNC_12(VAR_19)) != FUNC_12(VAR_11))
  return -VAR_0;

 VAR_21 = FUNC_12(VAR_19);
 if (VAR_17)
  VAR_21 /= 2;

 if (VAR_20 > VAR_9 ||
     !FUNC_5(VAR_21, VAR_10[VAR_20].len))
  return -VAR_0;

 if (VAR_17 && !FUNC_17(FUNC_11(VAR_19), VAR_21))
  return -VAR_0;

 switch (VAR_20) {
 const struct ovs_key_ipv4 *VAR_22;
 const struct ovs_key_ipv6 *VAR_23;
 int VAR_24;

 case 133:
 case 131:
 case 139:
 case 140:
  break;

 case 138:
  if (VAR_15 != VAR_7)
   return -VAR_0;
  break;

 case 129:
  if (VAR_17)
   return -VAR_0;

  *VAR_14 = 1;
  VAR_24 = FUNC_16(VAR_11, VAR_13, VAR_18);
  if (VAR_24)
   return VAR_24;
  break;

 case 137:
  if (VAR_16 != FUNC_8(VAR_1))
   return -VAR_0;

  VAR_22 = FUNC_11(VAR_19);

  if (VAR_17) {
   const struct ovs_key_ipv4 *VAR_25 = VAR_22 + 1;


   if (VAR_25->ipv4_proto || VAR_25->ipv4_frag)
    return -VAR_0;
  } else {
   if (VAR_22->ipv4_proto != VAR_12->ip.proto)
    return -VAR_0;

   if (VAR_22->ipv4_frag != VAR_12->ip.frag)
    return -VAR_0;
  }
  break;

 case 136:
  if (VAR_16 != FUNC_8(VAR_2))
   return -VAR_0;

  VAR_23 = FUNC_11(VAR_19);

  if (VAR_17) {
   const struct ovs_key_ipv6 *VAR_26 = VAR_23 + 1;


   if (VAR_26->ipv6_proto || VAR_26->ipv6_frag)
    return -VAR_0;


   if (FUNC_15(VAR_26->ipv6_label) & 0xFFF00000)
    return -VAR_0;
  } else {
   if (VAR_23->ipv6_proto != VAR_12->ip.proto)
    return -VAR_0;

   if (VAR_23->ipv6_frag != VAR_12->ip.frag)
    return -VAR_0;
  }
  if (FUNC_15(VAR_23->ipv6_label) & 0xFFF00000)
   return -VAR_0;

  break;

 case 130:
  if ((VAR_16 != FUNC_8(VAR_1) &&
       VAR_16 != FUNC_8(VAR_2)) ||
      VAR_12->ip.proto != VAR_5)
   return -VAR_0;

  break;

 case 128:
  if ((VAR_16 != FUNC_8(VAR_1) &&
       VAR_16 != FUNC_8(VAR_2)) ||
      VAR_12->ip.proto != VAR_6)
   return -VAR_0;

  break;

 case 135:
  if (!FUNC_6(VAR_16))
   return -VAR_0;
  break;

 case 132:
  if ((VAR_16 != FUNC_8(VAR_1) &&
       VAR_16 != FUNC_8(VAR_2)) ||
      VAR_12->ip.proto != VAR_4)
   return -VAR_0;

  break;

 case 134:
  if (VAR_16 != FUNC_8(VAR_3))
   return -VAR_0;
  if (!FUNC_18(FUNC_11(VAR_11), VAR_17, 0, VAR_18))
   return -VAR_0;
  break;

 default:
  return -VAR_0;
 }


 if (!VAR_17 && VAR_20 != 129) {
  int VAR_27, VAR_28 = VAR_21 * 2;
  struct nlattr *VAR_29;

  *VAR_14 = 1;

  VAR_27 = FUNC_4(VAR_13,
      VAR_8,
      VAR_18);
  if (VAR_27 < 0)
   return VAR_27;

  VAR_29 = FUNC_2(VAR_13, VAR_20, ((void*)0), VAR_28, VAR_18);
  if (FUNC_0(VAR_29))
   return FUNC_1(VAR_29);

  FUNC_9(FUNC_11(VAR_29), FUNC_11(VAR_19), VAR_21);
  FUNC_10(FUNC_11(VAR_29) + VAR_21, 0xff, VAR_21);

  if (VAR_20 == 136) {
   struct ovs_key_ipv6 *VAR_30 = FUNC_11(VAR_29) + VAR_21;

   VAR_30->ipv6_label &= FUNC_7(0x000FFFFF);
  }
  FUNC_3(*VAR_13, VAR_27);
 }

 return 0;
}
