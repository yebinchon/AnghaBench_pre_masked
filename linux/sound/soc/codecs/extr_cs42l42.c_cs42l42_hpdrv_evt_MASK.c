
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {int dummy; } ;


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
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_soc_component*,int ,int,int) ;
 struct snd_soc_component* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_11,
    struct snd_kcontrol *VAR_12, int VAR_13)
{
 struct snd_soc_component *VAR_14 = FUNC_2(VAR_11->dapm);

 if (VAR_13 & VAR_9) {

  FUNC_1(VAR_14, VAR_5,
    VAR_3,
    (VAR_1 |
    VAR_2) <<
    VAR_4);


  FUNC_1(VAR_14, VAR_8,
   VAR_0 | VAR_7 |
    VAR_6, 0);
 } else if (VAR_13 & VAR_10) {

  FUNC_1(VAR_14, VAR_5,
    VAR_3, 0);


  FUNC_1(VAR_14, VAR_8,
   VAR_0 | VAR_7 |
    VAR_6,
   VAR_0 | VAR_7 |
    VAR_6);
 } else {
  FUNC_0(VAR_14->dev, "Invalid event 0x%x\n", VAR_13);
 }
 return 0;
}
