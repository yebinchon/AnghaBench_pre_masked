
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gsw_mt753x {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct gsw_mt753x*,int ) ;
 int FUNC_2 (struct gsw_mt753x*,int ,int) ;
 int FUNC_3 (int,int) ;

void FUNC_4(struct gsw_mt753x *VAR_5, u32 VAR_6, u32 VAR_7)
{
 int VAR_8;

 FUNC_2(VAR_5, VAR_0,
    VAR_1 | ((VAR_6 << VAR_3) & VAR_2) |
    (VAR_7 & VAR_4));

 for (VAR_8 = 0; VAR_8 < 300; VAR_8++) {
  u32 VAR_9 = FUNC_1(VAR_5, VAR_0);

  if ((VAR_9 & VAR_1) == 0)
   break;

  FUNC_3(1000, 1100);
 }

 if (VAR_8 == 300)
  FUNC_0(VAR_5->dev, "vtcr timeout\n");
}
