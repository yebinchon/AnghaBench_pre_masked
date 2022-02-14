
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_rateinfo {scalar_t__ credit_cap; scalar_t__ cost; struct xt_limit_priv* master; } ;
struct xt_limit_priv {scalar_t__ credit; int lock; int prev; } ;
struct xt_action_param {struct xt_rateinfo* matchinfo; } ;
struct sk_buff {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned long FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static bool
FUNC_3(const struct sk_buff *VAR_2, struct xt_action_param *VAR_3)
{
 const struct xt_rateinfo *VAR_4 = VAR_3->matchinfo;
 struct xt_limit_priv *VAR_5 = VAR_4->master;
 unsigned long VAR_6 = VAR_1;

 FUNC_0(&VAR_5->lock);
 VAR_5->credit += (VAR_6 - FUNC_2(&VAR_5->prev, VAR_6)) * VAR_0;
 if (VAR_5->credit > VAR_4->credit_cap)
  VAR_5->credit = VAR_4->credit_cap;

 if (VAR_5->credit >= VAR_4->cost) {

  VAR_5->credit -= VAR_4->cost;
  FUNC_1(&VAR_5->lock);
  return 1;
 }

 FUNC_1(&VAR_5->lock);
 return 0;
}
