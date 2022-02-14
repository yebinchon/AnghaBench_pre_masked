
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_rateest_match_info {scalar_t__ est2; scalar_t__ est1; } ;
struct xt_mtdtor_param {int net; struct xt_rateest_match_info* matchinfo; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(const struct xt_mtdtor_param *VAR_0)
{
 struct xt_rateest_match_info *VAR_1 = VAR_0->matchinfo;

 FUNC_0(VAR_0->net, VAR_1->est1);
 if (VAR_1->est2)
  FUNC_0(VAR_0->net, VAR_1->est2);
}
