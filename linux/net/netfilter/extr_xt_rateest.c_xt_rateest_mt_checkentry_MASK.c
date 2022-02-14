
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_rateest_match_info {int flags; int mode; struct xt_rateest* est2; struct xt_rateest* est1; int name2; int name1; } ;
struct xt_rateest {int dummy; } ;
struct xt_mtchk_param {int net; struct xt_rateest_match_info* matchinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 struct xt_rateest* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,struct xt_rateest*) ;

__attribute__((used)) static int FUNC_3(const struct xt_mtchk_param *VAR_6)
{
 struct xt_rateest_match_info *VAR_7 = VAR_6->matchinfo;
 struct xt_rateest *VAR_8, *VAR_9;
 int VAR_10 = -VAR_0;

 if (FUNC_0(VAR_7->flags & (VAR_2 |
         VAR_5)) != 1)
  goto err1;

 if (!(VAR_7->flags & (VAR_3 | VAR_4)))
  goto err1;

 switch (VAR_7->mode) {
 case 130:
 case 128:
 case 129:
  break;
 default:
  goto err1;
 }

 VAR_10 = -VAR_1;
 VAR_8 = FUNC_1(VAR_6->net, VAR_7->name1);
 if (!VAR_8)
  goto err1;

 VAR_9 = ((void*)0);
 if (VAR_7->flags & VAR_5) {
  VAR_9 = FUNC_1(VAR_6->net, VAR_7->name2);
  if (!VAR_9)
   goto err2;
 }

 VAR_7->est1 = VAR_8;
 VAR_7->est2 = VAR_9;
 return 0;

err2:
 FUNC_2(VAR_6->net, VAR_8);
err1:
 return VAR_10;
}
