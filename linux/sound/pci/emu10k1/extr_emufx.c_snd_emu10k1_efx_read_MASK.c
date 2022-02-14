
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu10k1 {scalar_t__ audigy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (struct snd_emu10k1*,unsigned int,int ) ;

unsigned int FUNC_1(struct snd_emu10k1 *VAR_2, unsigned int VAR_3)
{
 VAR_3 += VAR_2->audigy ? VAR_0 : VAR_1;
 return FUNC_0(VAR_2, VAR_3, 0);
}
