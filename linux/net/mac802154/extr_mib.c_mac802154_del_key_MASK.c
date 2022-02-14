
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ type; } ;
struct ieee802154_sub_if_data {int sec_mtx; int sec; } ;
struct ieee802154_llsec_key_id {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 struct ieee802154_sub_if_data* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,struct ieee802154_llsec_key_id const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct net_device *VAR_1,
        const struct ieee802154_llsec_key_id *VAR_2)
{
 struct ieee802154_sub_if_data *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;

 FUNC_0(VAR_1->type != VAR_0);

 FUNC_3(&VAR_3->sec_mtx);
 VAR_4 = FUNC_2(&VAR_3->sec, VAR_2);
 FUNC_4(&VAR_3->sec_mtx);

 return VAR_4;
}
