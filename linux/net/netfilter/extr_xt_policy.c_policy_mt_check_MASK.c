
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_policy_info {int flags; scalar_t__ len; } ;
struct xt_mtchk_param {int hook_mask; struct xt_policy_info* matchinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char*,char const*) ;

__attribute__((used)) static int FUNC_1(const struct xt_mtchk_param *VAR_8)
{
 const struct xt_policy_info *VAR_9 = VAR_8->matchinfo;
 const char *VAR_10 = "neither incoming nor outgoing policy selected";

 if (!(VAR_9->flags & (VAR_5|VAR_6)))
  goto err;

 if (VAR_8->hook_mask & ((1 << VAR_4) |
     (1 << VAR_1)) && VAR_9->flags & VAR_6) {
  VAR_10 = "output policy not valid in PREROUTING and INPUT";
  goto err;
 }
 if (VAR_8->hook_mask & ((1 << VAR_3) |
     (1 << VAR_2)) && VAR_9->flags & VAR_5) {
  VAR_10 = "input policy not valid in POSTROUTING and OUTPUT";
  goto err;
 }
 if (VAR_9->len > VAR_7) {
  VAR_10 = "too many policy elements";
  goto err;
 }
 return 0;
err:
 FUNC_0("%s\n", VAR_10);
 return -VAR_0;
}
