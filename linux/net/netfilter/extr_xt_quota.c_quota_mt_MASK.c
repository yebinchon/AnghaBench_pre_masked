
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_quota_priv {scalar_t__ quota; int lock; } ;
struct xt_quota_info {int flags; struct xt_quota_priv* master; } ;
struct xt_action_param {scalar_t__ matchinfo; } ;
struct sk_buff {scalar_t__ len; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool
FUNC_2(const struct sk_buff *VAR_1, struct xt_action_param *VAR_2)
{
 struct xt_quota_info *VAR_3 = (void *)VAR_2->matchinfo;
 struct xt_quota_priv *VAR_4 = VAR_3->master;
 bool VAR_5 = VAR_3->flags & VAR_0;

 FUNC_0(&VAR_4->lock);
 if (VAR_4->quota >= VAR_1->len) {
  VAR_4->quota -= VAR_1->len;
  VAR_5 = !VAR_5;
 } else {

  VAR_4->quota = 0;
 }
 FUNC_1(&VAR_4->lock);

 return VAR_5;
}
