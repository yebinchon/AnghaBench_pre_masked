
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai_link {int symmetric_rates; int symmetric_channels; int symmetric_samplebits; int ignore_suspend; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct snd_soc_dai_link *VAR_4,
  unsigned int VAR_5, unsigned int VAR_6)
{
 if (VAR_5 & VAR_1)
  VAR_4->symmetric_rates =
   VAR_6 & VAR_1 ? 1 : 0;

 if (VAR_5 & VAR_0)
  VAR_4->symmetric_channels =
   VAR_6 & VAR_0 ?
   1 : 0;

 if (VAR_5 & VAR_2)
  VAR_4->symmetric_samplebits =
   VAR_6 & VAR_2 ?
   1 : 0;

 if (VAR_5 & VAR_3)
  VAR_4->ignore_suspend =
  VAR_6 & VAR_3 ?
  1 : 0;
}
