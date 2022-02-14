
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i; } ;
struct switch_val {TYPE_1__ value; } ;
struct switch_dev {int dummy; } ;
struct switch_attr {int dummy; } ;
struct mii_bus {int dummy; } ;
struct ar7240sw {struct mii_bus* mii_bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mii_bus*,int ,int,int) ;
 struct ar7240sw* FUNC_1 (struct switch_dev*) ;

__attribute__((used)) static int
FUNC_2(struct switch_dev *VAR_4,
    const struct switch_attr *VAR_5,
    struct switch_val *VAR_6)
{
 struct ar7240sw *VAR_7 = FUNC_1(VAR_4);
 struct mii_bus *VAR_8 = VAR_7->mii_bus;

 int VAR_9 = VAR_6->value.i;

 if (VAR_9 > 15)
  return -VAR_3;

 FUNC_0(VAR_8, VAR_2,
  VAR_0 << VAR_1,
  VAR_9 << VAR_1);

 return 0;
}
