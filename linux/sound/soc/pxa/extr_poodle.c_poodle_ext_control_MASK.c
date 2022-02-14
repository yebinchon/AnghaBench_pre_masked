
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_context {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ,int) ;
 scalar_t__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_2 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_3 (struct snd_soc_dapm_context*) ;

__attribute__((used)) static void FUNC_4(struct snd_soc_dapm_context *VAR_7)
{

 if (VAR_4 == VAR_0) {

  FUNC_0(&VAR_5.dev,
   VAR_1, 1);
  FUNC_0(&VAR_5.dev,
   VAR_2, 1);
  FUNC_2(VAR_7, "Headphone Jack");
 } else {
  FUNC_0(&VAR_5.dev,
   VAR_1, 0);
  FUNC_0(&VAR_5.dev,
   VAR_2, 0);
  FUNC_1(VAR_7, "Headphone Jack");
 }


 if (VAR_6 == VAR_3)
  FUNC_2(VAR_7, "Ext Spk");
 else
  FUNC_1(VAR_7, "Ext Spk");


 FUNC_3(VAR_7);
}
