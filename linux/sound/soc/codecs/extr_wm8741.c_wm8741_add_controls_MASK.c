
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int diff_mode; } ;
struct wm8741_priv {TYPE_1__ pdata; } ;
struct snd_soc_component {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;




 int FUNC_1 (struct snd_soc_component*,int ,int ) ;
 struct wm8741_priv* FUNC_2 (struct snd_soc_component*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_4)
{
 struct wm8741_priv *VAR_5 = FUNC_2(VAR_4);

 switch (VAR_5->pdata.diff_mode) {
 case 129:
 case 128:
  FUNC_1(VAR_4,
    VAR_3,
    FUNC_0(VAR_3));
  break;
 case 131:
  FUNC_1(VAR_4,
    VAR_1,
    FUNC_0(VAR_1));
  break;
 case 130:
  FUNC_1(VAR_4,
    VAR_2,
    FUNC_0(VAR_2));
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
