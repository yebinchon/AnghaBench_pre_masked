
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee802154_local {int started; int hw; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* start ) (int *) ;} ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ieee802154_local*,int) ;
 int FUNC_4 (struct ieee802154_local*) ;

__attribute__((used)) static inline int FUNC_5(struct ieee802154_local *VAR_0)
{
 int VAR_1;

 FUNC_0();

 FUNC_4(VAR_0);
 VAR_0->started = 1;
 FUNC_1();
 VAR_1 = VAR_0->ops->start(&VAR_0->hw);
 FUNC_3(VAR_0, VAR_1);
 return VAR_1;
}
