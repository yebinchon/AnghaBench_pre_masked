
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int i; } ;
struct switch_val {TYPE_1__ value; } ;
struct switch_dev {int dummy; } ;
struct switch_attr {int dummy; } ;
struct mii_bus {int dummy; } ;
struct ar7240sw {struct mii_bus* mii_bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mii_bus*,int ) ;
 struct ar7240sw* FUNC_1 (struct switch_dev*) ;

__attribute__((used)) static int
FUNC_2(struct switch_dev *VAR_3,
    const struct switch_attr *VAR_4,
    struct switch_val *VAR_5)
{
 struct ar7240sw *VAR_6 = FUNC_1(VAR_3);
 struct mii_bus *VAR_7 = VAR_6->mii_bus;

 u32 VAR_8;

 VAR_8 = FUNC_0(VAR_7, VAR_2);
 VAR_5->value.i = (VAR_8 >> VAR_1) & VAR_0;

 return 0;
}
