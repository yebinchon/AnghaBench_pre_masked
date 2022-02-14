
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct xt_rateest_match_info {int flags; int mode; scalar_t__ pps2; scalar_t__ bps2; TYPE_2__* est2; scalar_t__ pps1; scalar_t__ bps1; TYPE_1__* est1; } ;
struct xt_action_param {struct xt_rateest_match_info* matchinfo; } ;
struct sk_buff {int dummy; } ;
struct gnet_stats_rate_est64 {scalar_t__ pps; scalar_t__ bps; int member_0; } ;
struct TYPE_4__ {int rate_est; } ;
struct TYPE_3__ {int rate_est; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;

 int VAR_4 ;
 int FUNC_0 (int *,struct gnet_stats_rate_est64*) ;

__attribute__((used)) static bool
FUNC_1(const struct sk_buff *VAR_5, struct xt_action_param *VAR_6)
{
 const struct xt_rateest_match_info *VAR_7 = VAR_6->matchinfo;
 struct gnet_stats_rate_est64 VAR_8 = {0};
 u_int32_t VAR_9, VAR_10, VAR_11, VAR_12;
 bool VAR_13 = 1;

 FUNC_0(&VAR_7->est1->rate_est, &VAR_8);

 if (VAR_7->flags & VAR_2) {
  VAR_9 = VAR_7->bps1 >= VAR_8.bps ? VAR_7->bps1 - VAR_8.bps : 0;
  VAR_11 = VAR_7->pps1 >= VAR_8.pps ? VAR_7->pps1 - VAR_8.pps : 0;
 } else {
  VAR_9 = VAR_8.bps;
  VAR_11 = VAR_8.pps;
 }

 if (VAR_7->flags & VAR_0) {
  VAR_10 = VAR_7->bps2;
  VAR_12 = VAR_7->pps2;
 } else {
  FUNC_0(&VAR_7->est2->rate_est, &VAR_8);

  if (VAR_7->flags & VAR_2) {
   VAR_10 = VAR_7->bps2 >= VAR_8.bps ? VAR_7->bps2 - VAR_8.bps : 0;
   VAR_12 = VAR_7->pps2 >= VAR_8.pps ? VAR_7->pps2 - VAR_8.pps : 0;
  } else {
   VAR_10 = VAR_8.bps;
   VAR_12 = VAR_8.pps;
  }
 }

 switch (VAR_7->mode) {
 case 128:
  if (VAR_7->flags & VAR_1)
   VAR_13 &= VAR_9 < VAR_10;
  if (VAR_7->flags & VAR_4)
   VAR_13 &= VAR_11 < VAR_12;
  break;
 case 129:
  if (VAR_7->flags & VAR_1)
   VAR_13 &= VAR_9 > VAR_10;
  if (VAR_7->flags & VAR_4)
   VAR_13 &= VAR_11 > VAR_12;
  break;
 case 130:
  if (VAR_7->flags & VAR_1)
   VAR_13 &= VAR_9 == VAR_10;
  if (VAR_7->flags & VAR_4)
   VAR_13 &= VAR_11 == VAR_12;
  break;
 }

 VAR_13 ^= VAR_7->flags & VAR_3 ? 1 : 0;
 return VAR_13;
}
