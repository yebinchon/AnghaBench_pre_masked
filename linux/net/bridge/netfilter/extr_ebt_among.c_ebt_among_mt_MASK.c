
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xt_action_param {struct ebt_among_info* matchinfo; } ;
struct sk_buff {int dummy; } ;
struct ebt_mac_wormhash {int dummy; } ;
struct ebt_among_info {int bitmask; } ;
typedef int __be32 ;
struct TYPE_2__ {char* h_source; char* h_dest; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ebt_mac_wormhash* FUNC_0 (struct ebt_among_info const*) ;
 struct ebt_mac_wormhash* FUNC_1 (struct ebt_among_info const*) ;
 scalar_t__ FUNC_2 (struct ebt_mac_wormhash const*,char const*,int ) ;
 TYPE_1__* FUNC_3 (struct sk_buff const*) ;
 scalar_t__ FUNC_4 (struct sk_buff const*,int *) ;
 scalar_t__ FUNC_5 (struct sk_buff const*,int *) ;

__attribute__((used)) static bool
FUNC_6(const struct sk_buff *VAR_2, struct xt_action_param *VAR_3)
{
 const struct ebt_among_info *VAR_4 = VAR_3->matchinfo;
 const char *VAR_5, *VAR_6;
 const struct ebt_mac_wormhash *VAR_7, *VAR_8;
 __be32 VAR_9 = 0, VAR_10 = 0;

 VAR_7 = FUNC_0(VAR_4);
 VAR_8 = FUNC_1(VAR_4);

 if (VAR_8) {
  VAR_6 = FUNC_3(VAR_2)->h_source;
  if (FUNC_5(VAR_2, &VAR_10))
   return 0;
  if (!(VAR_4->bitmask & VAR_1)) {

   if (!FUNC_2(VAR_8, VAR_6, VAR_10))
    return 0;
  } else {

   if (FUNC_2(VAR_8, VAR_6, VAR_10))
    return 0;
  }
 }

 if (VAR_7) {
  VAR_5 = FUNC_3(VAR_2)->h_dest;
  if (FUNC_4(VAR_2, &VAR_9))
   return 0;
  if (!(VAR_4->bitmask & VAR_0)) {

   if (!FUNC_2(VAR_7, VAR_5, VAR_9))
    return 0;
  } else {

   if (FUNC_2(VAR_7, VAR_5, VAR_9))
    return 0;
  }
 }

 return 1;
}
