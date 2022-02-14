
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct key_params {int cipher; int seq_len; scalar_t__ seq; int key_len; int mode; } ;
struct TYPE_3__ {int flags; } ;
struct cfg80211_registered_device {TYPE_1__ wiphy; } ;


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
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;

int FUNC_2(struct cfg80211_registered_device *VAR_17,
       struct key_params *VAR_18, int VAR_19,
       bool VAR_20, const u8 *VAR_21)
{
 if (VAR_19 < 0 || VAR_19 > 5)
  return -VAR_0;

 if (!VAR_20 && VAR_21 && !(VAR_17->wiphy.flags & VAR_5))
  return -VAR_0;

 if (VAR_20 && !VAR_21)
  return -VAR_0;

 switch (VAR_18->cipher) {
 case 130:

  if ((VAR_20 && VAR_19) ||
      VAR_18->mode != VAR_3)
   return -VAR_0;
  break;
 case 134:
 case 133:
 case 132:
 case 131:







  if ((VAR_18->mode == VAR_2 && !VAR_20) ||
      VAR_18->mode == VAR_4)
   return -VAR_0;
  if (FUNC_1(&VAR_17->wiphy,
         VAR_1)) {
   if (VAR_20 && (VAR_19 < 0 || VAR_19 > 1))
    return -VAR_0;
  } else if (VAR_20 && VAR_19) {
   return -VAR_0;
  }
  break;
 case 138:
 case 137:
 case 136:
 case 135:

  if (VAR_20)
   return -VAR_0;
  if (VAR_19 < 4)
   return -VAR_0;
  break;
 case 128:
 case 129:
  if (VAR_19 > 3)
   return -VAR_0;
 default:
  break;
 }

 switch (VAR_18->cipher) {
 case 128:
  if (VAR_18->key_len != VAR_16)
   return -VAR_0;
  break;
 case 130:
  if (VAR_18->key_len != VAR_14)
   return -VAR_0;
  break;
 case 134:
  if (VAR_18->key_len != VAR_10)
   return -VAR_0;
  break;
 case 133:
  if (VAR_18->key_len != VAR_11)
   return -VAR_0;
  break;
 case 132:
  if (VAR_18->key_len != VAR_12)
   return -VAR_0;
  break;
 case 131:
  if (VAR_18->key_len != VAR_13)
   return -VAR_0;
  break;
 case 129:
  if (VAR_18->key_len != VAR_15)
   return -VAR_0;
  break;
 case 138:
  if (VAR_18->key_len != VAR_6)
   return -VAR_0;
  break;
 case 137:
  if (VAR_18->key_len != VAR_7)
   return -VAR_0;
  break;
 case 136:
  if (VAR_18->key_len != VAR_8)
   return -VAR_0;
  break;
 case 135:
  if (VAR_18->key_len != VAR_9)
   return -VAR_0;
  break;
 default:







  break;
 }

 if (VAR_18->seq) {
  switch (VAR_18->cipher) {
  case 128:
  case 129:

   return -VAR_0;
  case 130:
  case 134:
  case 133:
  case 132:
  case 131:
  case 138:
  case 137:
  case 136:
  case 135:
   if (VAR_18->seq_len != 6)
    return -VAR_0;
   break;
  }
 }

 if (!FUNC_0(&VAR_17->wiphy, VAR_18->cipher))
  return -VAR_0;

 return 0;
}
