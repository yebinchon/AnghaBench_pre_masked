
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rt1305_priv {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (int,unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,unsigned int,unsigned int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,scalar_t__,unsigned int*) ;
 int FUNC_7 (int ,scalar_t__,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static void FUNC_10(struct rt1305_priv *VAR_18)
{
 unsigned int VAR_19, VAR_20, VAR_21, VAR_22;
 unsigned int VAR_23, VAR_24, VAR_25, VAR_26;
 u64 VAR_27, VAR_28;

 FUNC_5(VAR_18->regmap, 1);

 FUNC_8(VAR_18->regmap);
 FUNC_7(VAR_18->regmap, VAR_2, 0x0219);
 FUNC_7(VAR_18->regmap, VAR_15 + 0xcf, 0x5548);
 FUNC_7(VAR_18->regmap, VAR_15 + 0xc1, 0x0320);
 FUNC_7(VAR_18->regmap, VAR_5, 0x1000);
 FUNC_7(VAR_18->regmap, VAR_4, 0x0600);
 FUNC_7(VAR_18->regmap, VAR_13, 0xffd0);
 FUNC_7(VAR_18->regmap, VAR_10, 0x0080);
 FUNC_7(VAR_18->regmap, VAR_10, 0x0880);
 FUNC_7(VAR_18->regmap, VAR_11, 0x0dfe);


 FUNC_7(VAR_18->regmap, VAR_15 + 0x5d, 0x0442);

 FUNC_7(VAR_18->regmap, VAR_3, 0xb000);
 FUNC_7(VAR_18->regmap, VAR_15 + 0xc3, 0xd4a0);
 FUNC_7(VAR_18->regmap, VAR_15 + 0xcc, 0x00cc);
 FUNC_7(VAR_18->regmap, VAR_15 + 0xc1, 0x0320);
 FUNC_7(VAR_18->regmap, VAR_14, 0x0000);
 FUNC_7(VAR_18->regmap, VAR_12, 0xffff);
 FUNC_7(VAR_18->regmap, VAR_13, 0xfc20);
 FUNC_7(VAR_18->regmap, VAR_15 + 0x06, 0x00c0);
 FUNC_7(VAR_18->regmap, VAR_13, 0xfca0);
 FUNC_7(VAR_18->regmap, VAR_13, 0xfce0);
 FUNC_7(VAR_18->regmap, VAR_13, 0xfcf0);


 FUNC_7(VAR_18->regmap, VAR_10, 0x0080);
 FUNC_7(VAR_18->regmap, VAR_10, 0x0880);
 FUNC_7(VAR_18->regmap, VAR_10, 0x0880);
 FUNC_7(VAR_18->regmap, VAR_13, 0xfce0);
 FUNC_7(VAR_18->regmap, VAR_13, 0xfca0);
 FUNC_7(VAR_18->regmap, VAR_13, 0xfc20);
 FUNC_7(VAR_18->regmap, VAR_15 + 0x06, 0x0000);
 FUNC_7(VAR_18->regmap, VAR_10, 0x0000);

 FUNC_6(VAR_18->regmap, VAR_6, &VAR_19);
 FUNC_6(VAR_18->regmap, VAR_7, &VAR_20);
 VAR_21 = VAR_19 << 16 | VAR_20;
 FUNC_6(VAR_18->regmap, VAR_8, &VAR_19);
 FUNC_6(VAR_18->regmap, VAR_9, &VAR_20);
 VAR_22 = VAR_19 << 16 | VAR_20;
 FUNC_4("DC offsetl=0x%x, offsetr=0x%x\n", VAR_21, VAR_22);


 FUNC_7(VAR_18->regmap, VAR_15 + 0x5d, 0x9542);
 FUNC_7(VAR_18->regmap, VAR_13, 0xfcf0);
 FUNC_7(VAR_18->regmap, VAR_12, 0xffff);
 FUNC_7(VAR_18->regmap, VAR_11, 0x1dfe);
 FUNC_7(VAR_18->regmap, VAR_16, 0x0e13);
 FUNC_7(VAR_18->regmap, VAR_4, 0x0650);

 FUNC_7(VAR_18->regmap, VAR_15 + 0x50, 0x0064);
 FUNC_7(VAR_18->regmap, VAR_15 + 0x51, 0x0770);
 FUNC_7(VAR_18->regmap, VAR_15 + 0x52, 0xc30c);
 FUNC_7(VAR_18->regmap, VAR_17, 0x8200);
 FUNC_7(VAR_18->regmap, VAR_15 + 0xd4, 0xfb00);
 FUNC_7(VAR_18->regmap, VAR_15 + 0xd4, 0xff80);
 FUNC_1(2000);
 FUNC_6(VAR_18->regmap, VAR_15 + 0x55, &VAR_23);
 FUNC_6(VAR_18->regmap, VAR_15 + 0x56, &VAR_24);
 VAR_25 = (VAR_23 << 16) | VAR_24;
 VAR_26 = (VAR_25*10) / 33554432;

 FUNC_2("Left_rhl = 0x%x rh=0x%x rl=0x%x\n", VAR_25, VAR_23, VAR_24);
 FUNC_4("Left channel %d.%dohm\n", (VAR_26/10), (VAR_26%10));

 VAR_27 = 562949953421312ULL;
 if (VAR_25 != 0)
  FUNC_0(VAR_27, VAR_25);
 FUNC_2("Left_r0 = 0x%llx\n", VAR_27);

 FUNC_7(VAR_18->regmap, VAR_17, 0x9200);
 FUNC_7(VAR_18->regmap, VAR_15 + 0xd4, 0xfb00);
 FUNC_7(VAR_18->regmap, VAR_15 + 0xd4, 0xff80);
 FUNC_1(2000);
 FUNC_6(VAR_18->regmap, VAR_15 + 0x55, &VAR_23);
 FUNC_6(VAR_18->regmap, VAR_15 + 0x56, &VAR_24);
 VAR_25 = (VAR_23 << 16) | VAR_24;
 VAR_26 = (VAR_25*10) / 33554432;

 FUNC_2("Right_rhl = 0x%x rh=0x%x rl=0x%x\n", VAR_25, VAR_23, VAR_24);
 FUNC_4("Right channel %d.%dohm\n", (VAR_26/10), (VAR_26%10));

 VAR_28 = 562949953421312ULL;
 if (VAR_25 != 0)
  FUNC_0(VAR_28, VAR_25);
 FUNC_2("Right_r0 = 0x%llx\n", VAR_28);

 FUNC_7(VAR_18->regmap, VAR_17, 0xc2ec);

 if ((VAR_27 > VAR_1) && (VAR_27 < VAR_0) &&
  (VAR_28 > VAR_1) && (VAR_28 < VAR_0)) {
  FUNC_7(VAR_18->regmap, VAR_15 + 0x4e,
   (VAR_27 >> 16) & 0xffff);
  FUNC_7(VAR_18->regmap, VAR_15 + 0x4f,
   VAR_27 & 0xffff);
  FUNC_7(VAR_18->regmap, VAR_15 + 0xfe,
   ((VAR_28 >> 16) & 0xffff) | 0xf800);
  FUNC_7(VAR_18->regmap, VAR_15 + 0xfd,
   VAR_28 & 0xffff);
 } else {
  FUNC_3("R0 calibration failed\n");
 }


 FUNC_7(VAR_18->regmap, VAR_11, 0x0dfe);
 FUNC_9(200000, 400000);
 FUNC_7(VAR_18->regmap, VAR_15 + 0x5d, 0x0442);
 FUNC_7(VAR_18->regmap, VAR_5, 0x3000);
 FUNC_7(VAR_18->regmap, VAR_4, 0x0400);
 FUNC_7(VAR_18->regmap, VAR_11, 0x0000);
 FUNC_7(VAR_18->regmap, VAR_3, 0x8000);
 FUNC_7(VAR_18->regmap, VAR_12, 0x1020);
 FUNC_7(VAR_18->regmap, VAR_13, 0x0000);

 FUNC_5(VAR_18->regmap, 0);
}
