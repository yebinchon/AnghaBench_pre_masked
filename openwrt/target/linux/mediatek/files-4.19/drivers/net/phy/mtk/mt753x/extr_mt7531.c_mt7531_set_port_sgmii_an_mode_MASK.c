
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt753x_port_cfg {int speed; } ;
struct gsw_mt753x {int dev; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int VAR_9 ;
 int FUNC_3 (int ,char*,int,...) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (struct gsw_mt753x*,int ) ;
 int FUNC_8 (struct gsw_mt753x*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct gsw_mt753x *VAR_10, u32 VAR_11,
      struct mt753x_port_cfg *VAR_12)
{
 u32 VAR_13, VAR_14, VAR_15;
 ktime_t VAR_16;
 u32 VAR_17;

 if (VAR_11 < 5 || VAR_11 >= VAR_2) {
  FUNC_3(VAR_10->dev, "port %d is not a SGMII port\n", VAR_11);
  return -VAR_0;
 }

 VAR_14 = VAR_11 - 5;

 switch (VAR_12->speed) {
 case 129:
  VAR_13 = VAR_3;
  break;
 case 128:
  VAR_13 = VAR_4;
  break;
 default:
  FUNC_3(VAR_10->dev, "invalid SGMII speed idx %d for port %d\n",
    VAR_12->speed, VAR_11);

  VAR_13 = VAR_3;
 }


 VAR_15 = FUNC_7(VAR_10, FUNC_1(VAR_14));
 VAR_15 &= ~VAR_5;
 VAR_15 |= VAR_13 << VAR_6;
 FUNC_8(VAR_10, FUNC_1(VAR_14), VAR_15);


 VAR_15 = FUNC_7(VAR_10, FUNC_2(VAR_11));
 VAR_15 |= VAR_9;
 FUNC_8(VAR_10, FUNC_2(VAR_11), VAR_15);






 VAR_15 = FUNC_7(VAR_10, FUNC_0(VAR_11));
 VAR_15 |= VAR_7;
 FUNC_8(VAR_10, FUNC_0(VAR_11), VAR_15);




 VAR_17 = 2000000;
 VAR_16 = FUNC_4(FUNC_6(), VAR_17);
 while (1) {
  VAR_15 = FUNC_7(VAR_10, FUNC_0(VAR_14));
  VAR_15 &= VAR_8;

  if (VAR_15)
   break;

  if (FUNC_5(FUNC_6(), VAR_16) > 0)
   return -VAR_1;
 }

 return 0;
}
