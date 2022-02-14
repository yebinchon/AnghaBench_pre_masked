
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai_driver {int symmetric_rates; int symmetric_channels; int symmetric_samplebits; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct snd_soc_dai_driver *VAR_3,
     unsigned int VAR_4, unsigned int VAR_5)
{
 if (VAR_4 & VAR_1)
  VAR_3->symmetric_rates =
   VAR_5 & VAR_1 ? 1 : 0;

 if (VAR_4 & VAR_0)
  VAR_3->symmetric_channels =
   VAR_5 & VAR_0 ?
   1 : 0;

 if (VAR_4 & VAR_2)
  VAR_3->symmetric_samplebits =
   VAR_5 & VAR_2 ?
   1 : 0;
}
