
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hda_tegra {scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct hda_tegra *VAR_15)
{
 u32 VAR_16;


 VAR_16 = FUNC_0(VAR_15->regs + VAR_10);
 VAR_16 |= VAR_11;
 FUNC_1(VAR_16, VAR_15->regs + VAR_10);


 VAR_16 = FUNC_0(VAR_15->regs + VAR_3);
 VAR_16 &= ~VAR_4;
 VAR_16 |= VAR_7 | VAR_6 |
  VAR_5 | VAR_8;
 FUNC_1(VAR_16, VAR_15->regs + VAR_3);

 FUNC_1(VAR_1, VAR_15->regs + VAR_2);
 FUNC_1(VAR_0, VAR_15->regs + VAR_2);
 FUNC_1(VAR_9, VAR_15->regs + VAR_13);

 VAR_16 = FUNC_0(VAR_15->regs + VAR_14);
 VAR_16 |= VAR_12;
 FUNC_1(VAR_16, VAR_15->regs + VAR_14);
}
