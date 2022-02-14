
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ieee802154_sub_if_data {int state; struct ieee802154_local* local; } ;
struct ieee802154_local {int open_count; } ;


 int FUNC_0 () ;
 struct ieee802154_sub_if_data* FUNC_1 (struct net_device*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct ieee802154_local*) ;
 int FUNC_4 (struct ieee802154_sub_if_data*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_1)
{
 struct ieee802154_sub_if_data *VAR_2 = FUNC_1(VAR_1);
 struct ieee802154_local *VAR_3 = VAR_2->local;
 int VAR_4;

 FUNC_0();

 FUNC_6(VAR_0, &VAR_2->state);

 if (!VAR_3->open_count) {
  VAR_4 = FUNC_4(VAR_2);
  if (VAR_4)
   goto err;

  VAR_4 = FUNC_3(VAR_3);
  if (VAR_4)
   goto err;
 }

 VAR_3->open_count++;
 FUNC_5(VAR_1);
 return 0;
err:

 FUNC_2(VAR_0, &VAR_2->state);

 return VAR_4;
}
