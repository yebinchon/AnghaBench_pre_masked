
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtchk_param {struct ebt_limit_info* matchinfo; } ;
struct ebt_limit_info {int burst; int avg; scalar_t__ cost; scalar_t__ credit_cap; scalar_t__ credit; int prev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(const struct xt_mtchk_param *VAR_2)
{
 struct ebt_limit_info *VAR_3 = VAR_2->matchinfo;


 if (VAR_3->burst == 0 ||
     FUNC_1(VAR_3->avg * VAR_3->burst) < FUNC_1(VAR_3->avg)) {
  FUNC_0("overflow, try lower: %u/%u\n",
        VAR_3->avg, VAR_3->burst);
  return -VAR_0;
 }


 VAR_3->prev = VAR_1;
 VAR_3->credit = FUNC_1(VAR_3->avg * VAR_3->burst);
 VAR_3->credit_cap = FUNC_1(VAR_3->avg * VAR_3->burst);
 VAR_3->cost = FUNC_1(VAR_3->avg);
 return 0;
}
