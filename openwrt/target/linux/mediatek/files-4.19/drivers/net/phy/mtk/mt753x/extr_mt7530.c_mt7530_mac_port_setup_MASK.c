
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int speed; int phy_mode; scalar_t__ duplex; scalar_t__ force_link; int enabled; } ;
struct TYPE_3__ {int speed; int phy_mode; int np; scalar_t__ duplex; scalar_t__ force_link; int enabled; } ;
struct gsw_mt753x {TYPE_2__ port6_cfg; int dev; TYPE_1__ port5_cfg; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
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
 int VAR_18 ;
 int VAR_19 ;




 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct gsw_mt753x*,int ) ;
 int FUNC_4 (struct gsw_mt753x*,int ,int) ;
 scalar_t__ FUNC_5 (int ,char*,int*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct gsw_mt753x *VAR_20)
{
 u32 VAR_21, VAR_22 = 0, VAR_23, VAR_24, VAR_25;

 VAR_21 = FUNC_3(VAR_20, VAR_13);
 VAR_21 &= ~(VAR_19 | VAR_15 | VAR_14);
 VAR_21 |= VAR_16;
 if (!VAR_20->port5_cfg.enabled) {
  VAR_23 = VAR_4;
  VAR_21 |= VAR_14;
 } else {
  VAR_23 = (VAR_8 << VAR_9) |
   VAR_10 | VAR_12 | VAR_11 |
   VAR_1 | VAR_0;

  if (VAR_20->port5_cfg.force_link) {
   VAR_23 |= VAR_4 | VAR_3 | VAR_5 |
     VAR_7;
   VAR_23 |= VAR_20->port5_cfg.speed << VAR_6;

   if (VAR_20->port5_cfg.duplex)
    VAR_23 |= VAR_2;
  }

  switch (VAR_20->port5_cfg.phy_mode) {
  case 130:
  case 131:
   break;
  case 129:
   VAR_21 |= VAR_15;
   break;
  default:
   FUNC_2(VAR_20->dev, "%s is not supported by port5\n",
     FUNC_6(VAR_20->port5_cfg.phy_mode));
   VAR_23 = VAR_4;
   VAR_21 |= VAR_14;
  }


  if (FUNC_5(VAR_20->port5_cfg.np, "phy-address",
      &VAR_25))
   goto parse_p6;

  if (VAR_25 != 0 && VAR_25 != 4) {
   FUNC_2(VAR_20->dev,
     "Only PHY 0/4 can be connected to Port 5\n");
   goto parse_p6;
  }

  VAR_21 &= ~VAR_16;
  if (VAR_25 == 0)
   VAR_21 |= VAR_17;
  else
   VAR_21 &= ~VAR_17;
 }

parse_p6:
 if (!VAR_20->port6_cfg.enabled) {
  VAR_24 = VAR_4;
  VAR_21 |= VAR_19;
 } else {
  VAR_24 = (VAR_8 << VAR_9) |
   VAR_10 | VAR_12 | VAR_11 |
   VAR_1 | VAR_0;

  if (VAR_20->port6_cfg.force_link) {
   VAR_24 |= VAR_4 | VAR_3 | VAR_5 |
     VAR_7;
   VAR_24 |= VAR_20->port6_cfg.speed << VAR_6;

   if (VAR_20->port6_cfg.duplex)
    VAR_24 |= VAR_2;
  }

  switch (VAR_20->port6_cfg.phy_mode) {
  case 129:
   VAR_22 = FUNC_0(1);
   break;
  case 128:

   VAR_22 = FUNC_0(0);
   break;
  default:
   FUNC_2(VAR_20->dev, "%s is not supported by port6\n",
     FUNC_6(VAR_20->port6_cfg.phy_mode));
   VAR_24 = VAR_4;
   VAR_21 |= VAR_19;
  }
 }

 FUNC_4(VAR_20, VAR_13, VAR_21);
 FUNC_4(VAR_20, VAR_18, VAR_22);

 FUNC_4(VAR_20, FUNC_1(5), VAR_23);
 FUNC_4(VAR_20, FUNC_1(6), VAR_24);

 return 0;
}
