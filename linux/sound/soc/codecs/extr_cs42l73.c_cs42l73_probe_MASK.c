
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct TYPE_2__ {int chgfreq; } ;
struct cs42l73_private {scalar_t__ mclk; int mclksel; TYPE_1__ pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cs42l73_private* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_3)
{
 struct cs42l73_private *VAR_4 = FUNC_0(VAR_3);


 if (VAR_4->pdata.chgfreq)
  FUNC_1(VAR_3, VAR_2,
        VAR_0,
     VAR_4->pdata.chgfreq << 4);


 VAR_4->mclksel = VAR_1;
 VAR_4->mclk = 0;

 return 0;
}
