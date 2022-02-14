
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_dbri {scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,char*,int,int,int,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct snd_dbri *VAR_9)
{
 int VAR_10;
 u32 VAR_11;

 FUNC_0(VAR_2, "reset 0:%x 2:%x 8:%x 9:%x\n",
  FUNC_1(VAR_9->regs + VAR_5),
  FUNC_1(VAR_9->regs + VAR_6),
  FUNC_1(VAR_9->regs + VAR_7), FUNC_1(VAR_9->regs + VAR_8));

 FUNC_2(VAR_3, VAR_9->regs + VAR_5);
 for (VAR_10 = 0; (FUNC_1(VAR_9->regs + VAR_5) & VAR_3) && VAR_10 < 64; VAR_10++)
  FUNC_3(10);



 VAR_11 = FUNC_1(VAR_9->regs + VAR_5);
 VAR_11 |= VAR_1 | VAR_0;
 VAR_11 &= ~VAR_4;
 FUNC_2(VAR_11, VAR_9->regs + VAR_5);
}
