
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wcd9335_codec {int * comp_enabled; } ;
struct snd_soc_component {int dev; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct wcd9335_codec* FUNC_4 (int ) ;
 int FUNC_5 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_12,
        int VAR_13, int VAR_14)
{
 struct wcd9335_codec *VAR_15 = FUNC_4(VAR_12->dev);
 int VAR_16;
 u16 VAR_17, VAR_18;


 if (!VAR_13)
  return 0;

 VAR_16 = VAR_13 - 1;
 if (!VAR_15->comp_enabled[VAR_16])
  return 0;

 VAR_17 = FUNC_2(VAR_16);
 VAR_18 = FUNC_3(VAR_16);

 if (FUNC_1(VAR_14)) {

  FUNC_5(VAR_12, VAR_17,
     VAR_2,
     VAR_1);

  FUNC_5(VAR_12, VAR_17,
     VAR_8,
     VAR_7);
  FUNC_5(VAR_12, VAR_17,
    VAR_8,
    VAR_6);

  FUNC_5(VAR_12, VAR_18,
     VAR_11,
     VAR_10);
 }

 if (FUNC_0(VAR_14)) {
  FUNC_5(VAR_12, VAR_17,
     VAR_4,
     VAR_3);
  FUNC_5(VAR_12, VAR_18,
     VAR_11,
     VAR_9);

  FUNC_5(VAR_12, VAR_17,
     VAR_8,
     VAR_7);
  FUNC_5(VAR_12, VAR_17,
    VAR_8,
    VAR_6);
  FUNC_5(VAR_12, VAR_17,
     VAR_2,
     VAR_0);
  FUNC_5(VAR_12, VAR_17,
     VAR_4,
     VAR_5);
 }

 return 0;
}
