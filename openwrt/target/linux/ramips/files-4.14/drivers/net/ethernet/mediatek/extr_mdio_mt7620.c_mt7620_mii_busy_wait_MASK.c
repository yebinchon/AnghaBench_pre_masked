
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt7620_gsw {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 unsigned long VAR_3 ;
 int FUNC_1 (struct mt7620_gsw*,int ) ;
 scalar_t__ FUNC_2 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct mt7620_gsw *VAR_4)
{
 unsigned long VAR_5 = VAR_3;

 while (1) {
  if (!(FUNC_1(VAR_4, VAR_2) & VAR_0))
   return 0;
  if (FUNC_2(VAR_3, VAR_5 + VAR_1))
   break;
 }

 FUNC_0(VAR_4->dev, "mdio: MDIO timeout\n");
 return -1;
}
