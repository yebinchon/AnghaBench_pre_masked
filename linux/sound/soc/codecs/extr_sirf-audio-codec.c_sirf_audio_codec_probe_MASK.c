
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {TYPE_1__* dev; } ;
struct TYPE_2__ {int of_node; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_3 (struct snd_soc_component*,int *,int) ;
 struct snd_soc_dapm_context* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_dapm_context*,int *,int) ;
 int * VAR_5 ;
 int * VAR_6 ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_7)
{
 struct snd_soc_dapm_context *VAR_8 = FUNC_4(VAR_7);

 FUNC_2(VAR_7->dev);

 if (FUNC_1(VAR_7->dev->of_node, "sirf,prima2-audio-codec")) {
  FUNC_5(VAR_8,
   VAR_4,
   FUNC_0(VAR_4));
  FUNC_5(VAR_8,
   &VAR_3, 1);
  return FUNC_3(VAR_7,
   VAR_6,
   FUNC_0(VAR_6));
 }
 if (FUNC_1(VAR_7->dev->of_node, "sirf,atlas6-audio-codec")) {
  FUNC_5(VAR_8,
   VAR_2,
   FUNC_0(VAR_2));
  FUNC_5(VAR_8,
   &VAR_1, 1);
  return FUNC_3(VAR_7,
   VAR_5,
   FUNC_0(VAR_5));
 }

 return -VAR_0;
}
