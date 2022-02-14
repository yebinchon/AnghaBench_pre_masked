
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int list; } ;
struct mac802154_llsec_device {int rcu; TYPE_1__ dev; int bucket_hw; int bucket_s; } ;
struct mac802154_llsec {int dummy; } ;
typedef int __le64 ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct mac802154_llsec_device* FUNC_3 (struct mac802154_llsec*,int ) ;
 int VAR_1 ;

int FUNC_4(struct mac802154_llsec *VAR_2, __le64 VAR_3)
{
 struct mac802154_llsec_device *VAR_4;

 VAR_4 = FUNC_3(VAR_2, VAR_3);
 if (!VAR_4)
  return -VAR_0;

 FUNC_1(&VAR_4->bucket_s);
 FUNC_1(&VAR_4->bucket_hw);
 FUNC_2(&VAR_4->dev.list);
 FUNC_0(&VAR_4->rcu, VAR_1);

 return 0;
}
