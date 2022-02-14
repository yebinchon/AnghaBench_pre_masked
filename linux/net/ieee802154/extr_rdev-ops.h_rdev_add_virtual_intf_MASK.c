
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cfg802154_registered_device {int wpan_phy; TYPE_1__* ops; } ;
typedef enum nl802154_iftype { ____Placeholder_nl802154_iftype } nl802154_iftype ;
typedef int __le64 ;
struct TYPE_2__ {int (* add_virtual_intf ) (int *,char*,unsigned char,int,int ) ;} ;


 int FUNC_0 (int *,char*,unsigned char,int,int ) ;
 int FUNC_1 (int *,char*,int,int ) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static inline int
FUNC_3(struct cfg802154_registered_device *VAR_0, char *VAR_1,
        unsigned char VAR_2,
        enum nl802154_iftype VAR_3, __le64 VAR_4)
{
 int VAR_5;

 FUNC_1(&VAR_0->wpan_phy, VAR_1, VAR_3,
        VAR_4);
 VAR_5 = VAR_0->ops->add_virtual_intf(&VAR_0->wpan_phy, VAR_1,
       VAR_2, VAR_3,
       VAR_4);
 FUNC_2(&VAR_0->wpan_phy, VAR_5);
 return VAR_5;
}
