
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ieee802154_local {int hw; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_csma_params ) (int *,int ,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (struct ieee802154_local*,int) ;
 int FUNC_4 (struct ieee802154_local*,int ,int ,int ) ;

__attribute__((used)) static inline int
FUNC_5(struct ieee802154_local *VAR_1, u8 VAR_2, u8 VAR_3,
      u8 VAR_4)
{
 int VAR_5;

 FUNC_1();

 if (!VAR_1->ops->set_csma_params) {
  FUNC_0(1);
  return -VAR_0;
 }

 FUNC_4(VAR_1, VAR_2, VAR_3,
      VAR_4);
 VAR_5 = VAR_1->ops->set_csma_params(&VAR_1->hw, VAR_2, VAR_3,
        VAR_4);
 FUNC_3(VAR_1, VAR_5);
 return VAR_5;
}
