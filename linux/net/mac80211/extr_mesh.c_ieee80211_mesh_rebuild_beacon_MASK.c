
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int beacon; } ;
struct TYPE_5__ {TYPE_3__ mesh; } ;
struct TYPE_4__ {int mtx; } ;
struct ieee80211_sub_if_data {TYPE_2__ u; TYPE_1__ wdev; } ;
struct beacon_data {int dummy; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct beacon_data*,int ) ;
 int FUNC_2 (int *) ;
 struct beacon_data* FUNC_3 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_4(struct ieee80211_sub_if_data *VAR_1)
{
 struct beacon_data *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_3(VAR_1->u.mesh.beacon,
         FUNC_2(&VAR_1->wdev.mtx));
 VAR_3 = FUNC_0(&VAR_1->u.mesh);
 if (VAR_3)

  return VAR_3;

 if (VAR_2)
  FUNC_1(VAR_2, VAR_0);
 return 0;
}
