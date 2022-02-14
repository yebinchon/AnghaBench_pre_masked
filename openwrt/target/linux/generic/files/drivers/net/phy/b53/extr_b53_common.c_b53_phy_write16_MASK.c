
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct switch_dev {int dummy; } ;
struct b53_device {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* phy_write16 ) (struct b53_device*,int,int ,int ) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct b53_device*,int ,int ,int ) ;
 int FUNC_2 (struct b53_device*,int,int ,int ) ;
 struct b53_device* FUNC_3 (struct switch_dev*) ;

__attribute__((used)) static int FUNC_4(struct switch_dev *VAR_0, int VAR_1, u8 VAR_2, u16 VAR_3)
{
 struct b53_device *VAR_4 = FUNC_3(VAR_0);

 if (VAR_4->ops->phy_write16)
  return VAR_4->ops->phy_write16(VAR_4, VAR_1, VAR_2, VAR_3);

 return FUNC_1(VAR_4, FUNC_0(VAR_1), VAR_2, VAR_3);
}
