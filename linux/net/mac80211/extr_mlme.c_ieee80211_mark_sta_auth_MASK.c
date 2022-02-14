
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sta_info {int dummy; } ;
struct ieee80211_if_managed {TYPE_2__* auth_data; } ;
struct TYPE_4__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_3__* local; int name; TYPE_1__ u; } ;
struct TYPE_6__ {int sta_mtx; } ;
struct TYPE_5__ {int done; int timeout_started; scalar_t__ timeout; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ,int const*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,scalar_t__) ;
 int FUNC_4 (struct ieee80211_sub_if_data*,char*,...) ;
 struct sta_info* FUNC_5 (struct ieee80211_sub_if_data*,int const*) ;
 scalar_t__ FUNC_6 (struct sta_info*,int ) ;

__attribute__((used)) static bool FUNC_7(struct ieee80211_sub_if_data *VAR_3,
        const u8 *VAR_4)
{
 struct ieee80211_if_managed *VAR_5 = &VAR_3->u.mgd;
 struct sta_info *VAR_6;
 bool VAR_7 = 1;

 FUNC_4(VAR_3, "authenticated\n");
 VAR_5->auth_data->done = 1;
 VAR_5->auth_data->timeout = VAR_2 + VAR_0;
 VAR_5->auth_data->timeout_started = 1;
 FUNC_3(VAR_3, VAR_5->auth_data->timeout);


 FUNC_1(&VAR_3->local->sta_mtx);
 VAR_6 = FUNC_5(VAR_3, VAR_4);
 if (!VAR_6) {
  FUNC_0(1, "%s: STA %pM not found", VAR_3->name, VAR_4);
  VAR_7 = 0;
  goto out;
 }
 if (FUNC_6(VAR_6, VAR_1)) {
  FUNC_4(VAR_3, "failed moving %pM to auth\n", VAR_4);
  VAR_7 = 0;
  goto out;
 }

out:
 FUNC_2(&VAR_3->local->sta_mtx);
 return VAR_7;
}
