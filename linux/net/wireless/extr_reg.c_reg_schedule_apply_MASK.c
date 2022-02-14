
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_regdb_apply_request {int list; struct ieee80211_regdomain const* regdom; } ;
struct ieee80211_regdomain {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_regdomain const*) ;
 struct reg_regdb_apply_request* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(const struct ieee80211_regdomain *VAR_5)
{
 struct reg_regdb_apply_request *VAR_6;

 VAR_6 = FUNC_1(sizeof(struct reg_regdb_apply_request), VAR_1);
 if (!VAR_6) {
  FUNC_0(VAR_5);
  return -VAR_0;
 }

 VAR_6->regdom = VAR_5;

 FUNC_3(&VAR_3);
 FUNC_2(&VAR_6->list, &VAR_2);
 FUNC_4(&VAR_3);

 FUNC_5(&VAR_4);
 return 0;
}
