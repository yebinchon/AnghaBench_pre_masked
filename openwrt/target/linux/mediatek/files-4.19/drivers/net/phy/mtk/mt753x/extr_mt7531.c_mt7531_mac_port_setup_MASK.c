
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt753x_port_cfg {int speed; int phy_mode; scalar_t__ enabled; scalar_t__ force_link; scalar_t__ duplex; } ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (struct gsw_mt753x*,int) ;
 int FUNC_3 (struct gsw_mt753x*,int,struct mt753x_port_cfg*) ;
 int FUNC_4 (struct gsw_mt753x*,int,struct mt753x_port_cfg*) ;
 int FUNC_5 (struct gsw_mt753x*,int ,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct gsw_mt753x *VAR_21, u32 VAR_22,
     struct mt753x_port_cfg *VAR_23)
{
 u32 VAR_24;
 u32 VAR_25;

 if (VAR_22 < 5 || VAR_22 >= VAR_20) {
  FUNC_1(VAR_21->dev, "port %d is not a MAC port\n", VAR_22);
  return -VAR_2;
 }

 if (VAR_23->enabled) {
  VAR_24 = (VAR_13 << VAR_14) |
         VAR_15 | VAR_19 | VAR_16 |
         VAR_1 | VAR_0;

  if (VAR_23->force_link) {



   VAR_25 = VAR_23->speed;
   if (VAR_23->speed == VAR_18)
    VAR_25 = VAR_17;

   VAR_24 |= VAR_6 | VAR_4 |
    VAR_8 | VAR_5 |
    VAR_7 | VAR_9 |
    VAR_10 | VAR_12 |
    (VAR_25 << VAR_11);

   if (VAR_23->duplex)
    VAR_24 |= VAR_3;
  }
 } else {
  VAR_24 = VAR_6;
 }

 switch (VAR_23->phy_mode) {
 case 129:
  FUNC_2(VAR_21, VAR_22);
  break;
 case 128:
  if (VAR_23->force_link)
   FUNC_4(VAR_21, VAR_22, VAR_23);
  else
   FUNC_3(VAR_21, VAR_22, VAR_23);
  break;
 default:
  if (VAR_23->enabled)
   FUNC_1(VAR_21->dev, "%s is not supported by port %d\n",
     FUNC_6(VAR_23->phy_mode), VAR_22);

  VAR_24 = VAR_6;
 }

 FUNC_5(VAR_21, FUNC_0(VAR_22), VAR_24);

 return 0;
}
