
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int diff_mode; } ;
struct wm8741_priv {TYPE_1__ pdata; } ;
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
 struct wm8741_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_12)
{
 struct wm8741_priv *VAR_13 = FUNC_0(VAR_12);


 switch (VAR_13->pdata.diff_mode) {
 case 129:
 case 128:
 case 131:
 case 130:
  FUNC_1(VAR_12, VAR_7,
    VAR_5,
    VAR_13->pdata.diff_mode << VAR_6);
  break;
 default:
  return -VAR_0;
 }


 FUNC_1(VAR_12, VAR_1,
   VAR_8, VAR_8);
 FUNC_1(VAR_12, VAR_2,
   VAR_9, VAR_9);
 FUNC_1(VAR_12, VAR_3,
   VAR_10, VAR_10);
 FUNC_1(VAR_12, VAR_4,
   VAR_11, VAR_11);

 return 0;
}
