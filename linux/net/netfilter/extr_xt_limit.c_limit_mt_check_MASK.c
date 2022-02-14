
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_rateinfo {int burst; int avg; scalar_t__ cost; scalar_t__ credit_cap; struct xt_limit_priv* master; } ;
struct xt_mtchk_param {struct xt_rateinfo* matchinfo; } ;
struct xt_limit_priv {int lock; scalar_t__ credit; int prev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct xt_limit_priv* FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(const struct xt_mtchk_param *VAR_4)
{
 struct xt_rateinfo *VAR_5 = VAR_4->matchinfo;
 struct xt_limit_priv *VAR_6;


 if (VAR_5->burst == 0
     || FUNC_3(VAR_5->avg * VAR_5->burst) < FUNC_3(VAR_5->avg)) {
  FUNC_1("Overflow, try lower: %u/%u\n",
        VAR_5->avg, VAR_5->burst);
  return -VAR_1;
 }

 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_2);
 if (VAR_6 == ((void*)0))
  return -VAR_0;


 VAR_5->master = VAR_6;


 VAR_6->prev = VAR_3;
 VAR_6->credit = FUNC_3(VAR_5->avg * VAR_5->burst);
 if (VAR_5->cost == 0) {
  VAR_5->credit_cap = VAR_6->credit;
  VAR_5->cost = FUNC_3(VAR_5->avg);
 }
 FUNC_2(&VAR_6->lock);

 return 0;
}
