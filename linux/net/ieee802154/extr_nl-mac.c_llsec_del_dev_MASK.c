
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ieee802154_mlme_ops {TYPE_1__* llsec; } ;
struct genl_info {int * attrs; } ;
typedef int __le64 ;
struct TYPE_2__ {int (* del_dev ) (struct net_device*,int ) ;} ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct ieee802154_mlme_ops* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2, struct genl_info *VAR_3)
{
 struct ieee802154_mlme_ops *VAR_4 = FUNC_0(VAR_2);
 __le64 VAR_5;

 if (!VAR_3->attrs[VAR_1])
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_3->attrs[VAR_1]);

 return VAR_4->llsec->del_dev(VAR_2, VAR_5);
}
