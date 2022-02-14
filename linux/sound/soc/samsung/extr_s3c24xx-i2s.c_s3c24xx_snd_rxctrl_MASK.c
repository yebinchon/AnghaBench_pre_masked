
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,int,int,int) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__ VAR_9 ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(int VAR_10)
{
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;

 VAR_11 = FUNC_1(VAR_9.regs + VAR_4);
 VAR_12 = FUNC_1(VAR_9.regs + VAR_0);
 VAR_13 = FUNC_1(VAR_9.regs + VAR_7);

 FUNC_0("r: IISCON: %x IISMOD: %x IISFCON: %x\n", VAR_12, VAR_13, VAR_11);

 if (VAR_10) {
  VAR_11 |= VAR_5 | VAR_6;
  VAR_12 |= VAR_2 | VAR_1;
  VAR_12 &= ~VAR_3;
  VAR_13 |= VAR_8;

  FUNC_2(VAR_13, VAR_9.regs + VAR_7);
  FUNC_2(VAR_11, VAR_9.regs + VAR_4);
  FUNC_2(VAR_12, VAR_9.regs + VAR_0);
 } else {







  VAR_11 &= ~VAR_6;
  VAR_11 &= ~VAR_5;
  VAR_12 |= VAR_3;
  VAR_12 &= ~VAR_2;
  VAR_13 &= ~VAR_8;

  FUNC_2(VAR_11, VAR_9.regs + VAR_4);
  FUNC_2(VAR_12, VAR_9.regs + VAR_0);
  FUNC_2(VAR_13, VAR_9.regs + VAR_7);
 }

 FUNC_0("w: IISCON: %x IISMOD: %x IISFCON: %x\n", VAR_12, VAR_13, VAR_11);
}
