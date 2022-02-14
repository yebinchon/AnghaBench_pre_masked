
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee802154_llsec_params {int dummy; } ;
struct mac802154_llsec {int lock; struct ieee802154_llsec_params params; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct mac802154_llsec *VAR_0,
          struct ieee802154_llsec_params *VAR_1)
{
 FUNC_0(&VAR_0->lock);
 *VAR_1 = VAR_0->params;
 FUNC_1(&VAR_0->lock);

 return 0;
}
