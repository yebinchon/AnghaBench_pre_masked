
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct xt_action_param {int hotdrop; struct ip6t_ipv6header_info* matchinfo; } ;
struct sk_buff {unsigned int len; } ;
struct ipv6hdr {int dummy; } ;
struct ipv6_opt_hdr {int nexthdr; } ;
struct ip6t_ipv6header_info {unsigned int matchflags; unsigned int invflags; scalar_t__ modeflag; } ;
typedef int _hdr ;
struct TYPE_2__ {int nexthdr; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;


 int VAR_8 ;


 int VAR_9 ;

 int FUNC_0 (struct ipv6_opt_hdr const*) ;
 TYPE_1__* FUNC_1 (struct sk_buff const*) ;
 int FUNC_2 (struct ipv6_opt_hdr const*) ;
 scalar_t__ FUNC_3 (int) ;
 struct ipv6_opt_hdr* FUNC_4 (struct sk_buff const*,unsigned int,int,struct ipv6_opt_hdr*) ;

__attribute__((used)) static bool
FUNC_5(const struct sk_buff *VAR_10, struct xt_action_param *VAR_11)
{
 const struct ip6t_ipv6header_info *VAR_12 = VAR_11->matchinfo;
 unsigned int VAR_13;
 int VAR_14;
 u8 VAR_15;
 unsigned int VAR_16;




 VAR_15 = FUNC_1(VAR_10)->nexthdr;

 VAR_16 = sizeof(struct ipv6hdr);

 VAR_14 = VAR_10->len - VAR_16;
 VAR_13 = 0;

 while (FUNC_3(VAR_15)) {
  const struct ipv6_opt_hdr *VAR_17;
  struct ipv6_opt_hdr VAR_18;
  int VAR_19;


  if (VAR_15 == VAR_9) {
   VAR_13 |= VAR_5;
   break;
  }

  if (VAR_14 < (int)sizeof(struct ipv6_opt_hdr))
   return 0;

  if (VAR_15 == VAR_8) {
   VAR_13 |= VAR_2;
   break;
  }

  VAR_17 = FUNC_4(VAR_10, VAR_16, sizeof(VAR_18), &VAR_18);
  if (!VAR_17) {
   VAR_11->hotdrop = 1;
   return 0;
  }


  if (VAR_15 == 130)
   VAR_19 = 8;
  else if (VAR_15 == 132)
   VAR_19 = FUNC_0(VAR_17);
  else
   VAR_19 = FUNC_2(VAR_17);


  switch (VAR_15) {
  case 129:
   VAR_13 |= VAR_4;
   break;
  case 128:
   VAR_13 |= VAR_7;
   break;
  case 130:
   VAR_13 |= VAR_3;
   break;
  case 132:
   VAR_13 |= VAR_0;
   break;
  case 131:
   VAR_13 |= VAR_1;
   break;
  default:
   return 0;
  }

  VAR_15 = VAR_17->nexthdr;
  VAR_14 -= VAR_19;
  VAR_16 += VAR_19;
  if (VAR_16 > VAR_10->len)
   break;
 }

 if (VAR_15 != VAR_9 && VAR_15 != VAR_8)
  VAR_13 |= VAR_6;

 if (VAR_12->modeflag)
  return !((VAR_13 ^ VAR_12->matchflags ^ VAR_12->invflags)
    & VAR_12->matchflags);
 else {
  if (VAR_12->invflags)
   return VAR_13 != VAR_12->matchflags;
  else
   return VAR_13 == VAR_12->matchflags;
 }
}
