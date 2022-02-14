
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpan_phy {int dummy; } ;
struct wpan_dev {scalar_t__ pan_id; int netdev; } ;
typedef scalar_t__ __le16 ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct wpan_phy *VAR_0, struct wpan_dev *VAR_1,
        __le16 VAR_2)
{
 int VAR_3;

 FUNC_0();

 if (VAR_1->pan_id == VAR_2)
  return 0;

 VAR_3 = FUNC_1(VAR_1->netdev);
 if (!VAR_3)
  VAR_1->pan_id = VAR_2;

 return VAR_3;
}
