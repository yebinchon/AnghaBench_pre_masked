
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int master; int inc; int mod; } ;
struct snd_hal2 {TYPE_1__ dac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_hal2*,int ,int) ;
 int FUNC_1 (struct snd_hal2*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct snd_hal2 *VAR_2)
{
 unsigned int VAR_3 = VAR_2->dac.master;
 int VAR_4 = VAR_2->dac.inc;
 int VAR_5 = VAR_2->dac.mod;

 FUNC_0(VAR_2, VAR_0, (VAR_3 == 44100) ? 1 : 0);
 FUNC_1(VAR_2, VAR_1,
         ((0xffff & (VAR_4 - VAR_5 - 1)) << 16) | VAR_4);
}
