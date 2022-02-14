
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_pdacf {int suspend_reg_scr; scalar_t__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct snd_pdacf*,int ) ;
 int FUNC_3 (struct snd_pdacf*,int ,int) ;
 int FUNC_4 (struct snd_pdacf*,int) ;

void FUNC_5(struct snd_pdacf *VAR_8)
{
 u16 VAR_9;

 VAR_9 = FUNC_2(VAR_8, VAR_7);
 VAR_8->suspend_reg_scr = VAR_9;
 VAR_9 |= VAR_5 | VAR_0;
 FUNC_3(VAR_8, VAR_7, VAR_9);

 VAR_9 = FUNC_0(VAR_8->port + VAR_6);
 VAR_9 &= ~(VAR_4|VAR_1|VAR_2|VAR_3);
 FUNC_1(VAR_9, VAR_8->port + VAR_6);
 FUNC_4(VAR_8, 1);
}
