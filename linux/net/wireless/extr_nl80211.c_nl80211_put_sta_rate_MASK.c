
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
typedef unsigned long u16 ;
struct sk_buff {int dummy; } ;
struct rate_info {int bw; int flags; int he_ru_alloc; int he_dcm; int he_gi; int nss; int mcs; } ;
struct nlattr {int dummy; } ;
typedef enum nl80211_rate_info { ____Placeholder_nl80211_rate_info } nl80211_rate_info ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;







 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int) ;
 unsigned long FUNC_1 (struct rate_info*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,unsigned long) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,unsigned long) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;

bool FUNC_8(struct sk_buff *VAR_20, struct rate_info *VAR_21, int VAR_22)
{
 struct nlattr *VAR_23;
 u32 VAR_24;
 u16 VAR_25;
 enum nl80211_rate_info VAR_26;

 VAR_23 = FUNC_3(VAR_20, VAR_22);
 if (!VAR_23)
  return 0;


 VAR_24 = FUNC_1(VAR_21);

 VAR_25 = VAR_24 < (1UL << 16) ? VAR_24 : 0;
 if (VAR_24 > 0 &&
     FUNC_6(VAR_20, VAR_6, VAR_24))
  return 0;
 if (VAR_25 > 0 &&
     FUNC_5(VAR_20, VAR_5, VAR_25))
  return 0;

 switch (VAR_21->bw) {
 case 130:
  VAR_26 = VAR_3;
  break;
 case 134:
  VAR_26 = VAR_0;
  break;
 default:
  FUNC_0(1);

 case 132:
  VAR_26 = 0;
  break;
 case 131:
  VAR_26 = VAR_2;
  break;
 case 129:
  VAR_26 = VAR_4;
  break;
 case 133:
  VAR_26 = VAR_1;
  break;
 case 128:
  VAR_26 = 0;
  FUNC_0(!(VAR_21->flags & VAR_16));
 }

 if (VAR_26 && FUNC_4(VAR_20, VAR_26))
  return 0;

 if (VAR_21->flags & VAR_17) {
  if (FUNC_7(VAR_20, VAR_12, VAR_21->mcs))
   return 0;
  if (VAR_21->flags & VAR_18 &&
      FUNC_4(VAR_20, VAR_13))
   return 0;
 } else if (VAR_21->flags & VAR_19) {
  if (FUNC_7(VAR_20, VAR_14, VAR_21->mcs))
   return 0;
  if (FUNC_7(VAR_20, VAR_15, VAR_21->nss))
   return 0;
  if (VAR_21->flags & VAR_18 &&
      FUNC_4(VAR_20, VAR_13))
   return 0;
 } else if (VAR_21->flags & VAR_16) {
  if (FUNC_7(VAR_20, VAR_9, VAR_21->mcs))
   return 0;
  if (FUNC_7(VAR_20, VAR_10, VAR_21->nss))
   return 0;
  if (FUNC_7(VAR_20, VAR_8, VAR_21->he_gi))
   return 0;
  if (FUNC_7(VAR_20, VAR_7, VAR_21->he_dcm))
   return 0;
  if (VAR_21->bw == 128 &&
      FUNC_7(VAR_20, VAR_11,
          VAR_21->he_ru_alloc))
   return 0;
 }

 FUNC_2(VAR_20, VAR_23);
 return 1;
}
