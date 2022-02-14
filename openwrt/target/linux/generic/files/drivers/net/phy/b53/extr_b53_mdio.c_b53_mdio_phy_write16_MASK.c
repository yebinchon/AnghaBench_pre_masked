
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mii_bus {int dummy; } ;
struct b53_device {struct mii_bus* priv; } ;


 int FUNC_0 (struct mii_bus*,int,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct b53_device *VAR_0, int VAR_1, u8 VAR_2,
    u16 VAR_3)
{
 struct mii_bus *VAR_4 = VAR_0->priv;

 return FUNC_0(VAR_4, VAR_1, VAR_2, VAR_3);
}
