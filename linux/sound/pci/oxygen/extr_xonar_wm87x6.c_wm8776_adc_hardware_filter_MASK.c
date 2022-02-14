
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hardware {int rates; int rate_max; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_0(unsigned int VAR_7,
           struct snd_pcm_hardware *VAR_8)
{
 if (VAR_7 == VAR_0) {
  VAR_8->rates = VAR_1 |
      VAR_2 |
      VAR_3 |
      VAR_4 |
      VAR_5 |
      VAR_6;
  VAR_8->rate_max = 96000;
 }
}
