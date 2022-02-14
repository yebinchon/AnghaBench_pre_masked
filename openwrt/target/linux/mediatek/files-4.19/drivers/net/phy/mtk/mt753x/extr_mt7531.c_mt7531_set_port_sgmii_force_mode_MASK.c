
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt753x_port_cfg {int speed; scalar_t__ duplex; } ;
struct gsw_mt753x {int dev; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
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
 int VAR_14 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int,...) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (struct gsw_mt753x*,int ) ;
 int FUNC_9 (struct gsw_mt753x*,int ,int) ;

__attribute__((used)) static int FUNC_10(struct gsw_mt753x *VAR_15, u32 VAR_16,
         struct mt753x_port_cfg *VAR_17)
{
 u32 VAR_18, VAR_19, VAR_20;
 ktime_t VAR_21;
 u32 VAR_22;

 if (VAR_16 < 5 || VAR_16 >= VAR_2) {
  FUNC_4(VAR_15->dev, "port %d is not a SGMII port\n", VAR_16);
  return -VAR_0;
 }

 VAR_19 = VAR_16 - 5;

 switch (VAR_17->speed) {
 case 129:
  VAR_18 = VAR_4;
  break;
 case 128:
  VAR_18 = VAR_5;
  break;
 default:
  FUNC_4(VAR_15->dev, "invalid SGMII speed idx %d for port %d\n",
    VAR_17->speed, VAR_16);

  VAR_18 = VAR_4;
 }


 VAR_20 = FUNC_8(VAR_15, FUNC_1(VAR_19));
 VAR_20 &= ~VAR_6;
 VAR_20 |= VAR_18 << VAR_7;
 FUNC_9(VAR_15, FUNC_1(VAR_19), VAR_20);


 VAR_20 = FUNC_8(VAR_15, FUNC_0(VAR_19));
 VAR_20 &= ~VAR_8;
 FUNC_9(VAR_15, FUNC_0(VAR_19), VAR_20);


 VAR_20 = FUNC_8(VAR_15, FUNC_3(VAR_19));
 VAR_20 &= ~VAR_9;
 VAR_20 &= ~VAR_12;
 VAR_20 |= VAR_11 << VAR_13;
 VAR_20 |= VAR_10;

 if (VAR_17->duplex)
  VAR_20 &= ~VAR_10;

 FUNC_9(VAR_15, FUNC_3(VAR_19), VAR_20);






 VAR_20 = FUNC_8(VAR_15, FUNC_2(VAR_19));
 VAR_20 &= ~VAR_3;
 FUNC_9(VAR_15, FUNC_2(VAR_19), VAR_20);


 VAR_22 = 2000000;
 VAR_21 = FUNC_5(FUNC_7(), VAR_22);
 while (1) {
  VAR_20 = FUNC_8(VAR_15, FUNC_0(VAR_19));
  VAR_20 &= VAR_14;

  if (VAR_20)
   break;

  if (FUNC_6(FUNC_7(), VAR_21) > 0)
   return -VAR_1;
 }

 return 0;
}
