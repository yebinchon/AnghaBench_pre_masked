
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct snd_soc_dapm_context* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,int) ;
 int FUNC_3 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_4 (struct snd_soc_dapm_context*,char*) ;
 int FUNC_5 (struct snd_soc_dapm_context*) ;

__attribute__((used)) static void FUNC_6(struct snd_soc_component *VAR_13,
 bool VAR_14)
{
 struct snd_soc_dapm_context *VAR_15 = FUNC_0(VAR_13);

 if (VAR_14) {
  FUNC_2(VAR_13, VAR_0, 0x000b);


  FUNC_4(VAR_15, "MICBIAS1");
  FUNC_4(VAR_15,
   "Mic Det Power");
  FUNC_5(VAR_15);

  FUNC_1(VAR_13, VAR_9,
   VAR_10, VAR_10);
  FUNC_1(VAR_13, VAR_12,
   VAR_11, VAR_11);

  FUNC_1(VAR_13, VAR_8,
    VAR_7, VAR_6);
  FUNC_1(VAR_13, VAR_1,
    VAR_4, VAR_3);
 } else {
  FUNC_1(VAR_13, VAR_1,
    VAR_4, VAR_2);
  FUNC_1(VAR_13, VAR_8,
    VAR_7, VAR_5);

  FUNC_3(VAR_15, "MICBIAS1");
  FUNC_3(VAR_15, "Mic Det Power");
  FUNC_5(VAR_15);
 }
}
