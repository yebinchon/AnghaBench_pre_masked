
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int all; } ;
struct xt_recent_mtinfo_v1 {TYPE_1__ mask; } ;
struct xt_recent_mtinfo_v0 {int dummy; } ;
struct xt_recent_mtinfo {int dummy; } ;
struct xt_mtchk_param {struct xt_recent_mtinfo_v0* matchinfo; } ;


 int FUNC_0 (struct xt_recent_mtinfo_v1*,struct xt_recent_mtinfo_v0 const*,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (struct xt_mtchk_param const*,struct xt_recent_mtinfo_v1*) ;

__attribute__((used)) static int FUNC_3(const struct xt_mtchk_param *VAR_0)
{
 const struct xt_recent_mtinfo_v0 *VAR_1 = VAR_0->matchinfo;
 struct xt_recent_mtinfo_v1 VAR_2;


 FUNC_0(&VAR_2, VAR_1, sizeof(struct xt_recent_mtinfo));

 FUNC_1(VAR_2, 0xFF, sizeof(VAR_2));

 return FUNC_2(VAR_0, &VAR_2);
}
