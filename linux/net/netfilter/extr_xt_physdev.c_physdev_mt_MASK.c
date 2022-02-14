
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_physdev_info {int bitmask; int invert; int out_mask; int physoutdev; int in_mask; int physindev; } ;
struct xt_action_param {struct xt_physdev_info* matchinfo; } ;
struct sk_buff {int dummy; } ;
struct net_device {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_0 (char const*,int ,int ) ;
 struct net_device* FUNC_1 (struct sk_buff const*) ;
 struct net_device* FUNC_2 (struct sk_buff const*) ;
 int FUNC_3 (struct sk_buff const*) ;

__attribute__((used)) static bool
FUNC_4(const struct sk_buff *VAR_5, struct xt_action_param *VAR_6)
{
 const struct xt_physdev_info *VAR_7 = VAR_6->matchinfo;
 const struct net_device *VAR_8;
 unsigned long VAR_9;
 const char *VAR_10, *VAR_11;




 if (!FUNC_3(VAR_5)) {

  if ((VAR_7->bitmask & VAR_0) &&
      !(VAR_7->invert & VAR_0))
   return 0;
  if ((VAR_7->bitmask & VAR_2) &&
      !(VAR_7->invert & VAR_2))
   return 0;
  if ((VAR_7->bitmask & VAR_3) &&
      !(VAR_7->invert & VAR_3))
   return 0;
  if ((VAR_7->bitmask & VAR_1) &&
      !(VAR_7->invert & VAR_1))
   return 0;
  if ((VAR_7->bitmask & VAR_4) &&
      !(VAR_7->invert & VAR_4))
   return 0;
  return 1;
 }

 VAR_8 = FUNC_2(VAR_5);
 VAR_11 = VAR_8 ? VAR_8->name : ((void*)0);


 if ((VAR_7->bitmask & VAR_0) &&
     (!!VAR_11 ^ !(VAR_7->invert & VAR_0)))
  return 0;

 VAR_8 = FUNC_1(VAR_5);
 VAR_10 = VAR_8 ? VAR_8->name : ((void*)0);

 if ((VAR_7->bitmask & VAR_2 &&
     (!VAR_10 ^ !!(VAR_7->invert & VAR_2))) ||
     (VAR_7->bitmask & VAR_3 &&
     (!VAR_11 ^ !!(VAR_7->invert & VAR_3))))
  return 0;

 if (!(VAR_7->bitmask & VAR_1))
  goto match_outdev;

 if (VAR_10) {
  VAR_9 = FUNC_0(VAR_10, VAR_7->physindev,
          VAR_7->in_mask);

  if (!VAR_9 ^ !(VAR_7->invert & VAR_1))
   return 0;
 }

match_outdev:
 if (!(VAR_7->bitmask & VAR_4))
  return 1;

 if (!VAR_11)
  return 0;

 VAR_9 = FUNC_0(VAR_11, VAR_7->physoutdev, VAR_7->out_mask);

 return (!!VAR_9 ^ !(VAR_7->invert & VAR_4));
}
