
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ phy_mode; scalar_t__ enabled; } ;
struct gsw_mt753x {TYPE_1__ port6_cfg; scalar_t__ direct_phy_access; } ;


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
 scalar_t__ VAR_17 ;
 int VAR_18 ;

 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct gsw_mt753x*,int ,int) ;
 int FUNC_1 (struct gsw_mt753x*) ;
 int FUNC_2 (struct gsw_mt753x*) ;
 int FUNC_3 (struct gsw_mt753x*,int ) ;
 int FUNC_4 (struct gsw_mt753x*,int ,int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(struct gsw_mt753x *VAR_21)
{
 u32 VAR_22;

 VAR_22 = FUNC_3(VAR_21, VAR_13);

 switch ((VAR_22 & VAR_19) >> VAR_20) {
 case 128:

  FUNC_0(VAR_21, VAR_18, 0);


  FUNC_0(VAR_21, VAR_1,
          (2 << VAR_11) |
          (32 << VAR_9));


  FUNC_0(VAR_21, VAR_2,
          (1 << VAR_12) |
          (25 << VAR_10));


  FUNC_0(VAR_21, VAR_1,
          (2 << VAR_11) |
          (32 << VAR_9) |
          VAR_8);

  FUNC_5(20, 40);


  FUNC_0(VAR_21, VAR_18, VAR_7);
  break;
 default:

  break;
 }

 VAR_22 = FUNC_3(VAR_21, VAR_13);
 VAR_22 |= VAR_0;
 if (VAR_21->direct_phy_access)
  VAR_22 &= ~VAR_6;
 else
  VAR_22 |= VAR_6;

 FUNC_4(VAR_21, VAR_14, VAR_22);

 if (VAR_21->port6_cfg.enabled &&
     VAR_21->port6_cfg.phy_mode == VAR_17) {
  FUNC_2(VAR_21);
 } else {

  FUNC_1(VAR_21);
 }


 FUNC_4(VAR_21, VAR_15,
    VAR_3 |
    (2 << VAR_4));
 FUNC_4(VAR_21, VAR_16, 0x14 << VAR_5);
}
