
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mii_bus {int dummy; } ;
struct ar7240sw {struct mii_bus* mii_bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct mii_bus*,int ,int,int ,int) ;
 int FUNC_1 (struct mii_bus*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct ar7240sw *VAR_7, u32 VAR_8, u32 VAR_9)
{
 struct mii_bus *VAR_10 = VAR_7->mii_bus;

 if (FUNC_0(VAR_10, VAR_0, VAR_4, 0, 5))
  return;

 if ((VAR_8 & VAR_5) == VAR_6) {
  VAR_9 &= VAR_2;
  VAR_9 |= VAR_3;
  FUNC_1(VAR_10, VAR_1, VAR_9);
 }
 VAR_8 |= VAR_4;
 FUNC_1(VAR_10, VAR_0, VAR_8);
}
