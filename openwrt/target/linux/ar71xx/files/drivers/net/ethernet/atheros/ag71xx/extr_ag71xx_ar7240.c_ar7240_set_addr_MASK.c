
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mii_bus {int dummy; } ;
struct ar7240sw {struct mii_bus* mii_bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mii_bus*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct ar7240sw *VAR_2, u8 *VAR_3)
{
 struct mii_bus *VAR_4 = VAR_2->mii_bus;
 u32 VAR_5;

 VAR_5 = (VAR_3[4] << 8) | VAR_3[5];
 FUNC_0(VAR_4, VAR_0, VAR_5);

 VAR_5 = (VAR_3[0] << 24) | (VAR_3[1] << 16) | (VAR_3[2] << 8) | VAR_3[3];
 FUNC_0(VAR_4, VAR_1, VAR_5);

 return 0;
}
