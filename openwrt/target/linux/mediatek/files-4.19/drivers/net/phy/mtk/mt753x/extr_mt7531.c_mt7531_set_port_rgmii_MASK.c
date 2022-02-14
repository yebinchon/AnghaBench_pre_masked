
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
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct gsw_mt753x*,int ) ;
 int FUNC_2 (struct gsw_mt753x*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct gsw_mt753x *VAR_14, u32 VAR_15)
{
 u32 VAR_16;

 if (VAR_15 != 5) {
  FUNC_0(VAR_14->dev, "RGMII mode is not available for port %d\n",
    VAR_15);
  return -VAR_7;
 }

 VAR_16 = FUNC_1(VAR_14, VAR_0);
 VAR_16 |= VAR_8;
 VAR_16 &= ~VAR_9;
 VAR_16 |= VAR_10 << VAR_11;
 VAR_16 |= VAR_13;
 VAR_16 |= VAR_12;
 VAR_16 &= ~VAR_1;
 VAR_16 |= VAR_2 << VAR_3;
 VAR_16 &= ~VAR_4;
 VAR_16 |= VAR_5 << VAR_6;
 FUNC_2(VAR_14, VAR_0, VAR_16);

 return 0;
}
