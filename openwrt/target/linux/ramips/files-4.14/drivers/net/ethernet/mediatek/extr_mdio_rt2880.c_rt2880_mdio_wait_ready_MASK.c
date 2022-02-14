
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fe_priv {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct fe_priv *VAR_3)
{
 int VAR_4;

 VAR_4 = VAR_2;
 while (1) {
  u32 VAR_5;

  VAR_5 = FUNC_2(VAR_1);
  if ((VAR_5 & FUNC_0(31)) == 0)
   return 0;

  if (VAR_4-- == 0)
   break;

  FUNC_3(1);
 }

 FUNC_1(VAR_3->dev, "MDIO operation timed out\n");
 return -VAR_0;
}
