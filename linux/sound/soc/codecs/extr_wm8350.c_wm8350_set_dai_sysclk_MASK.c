
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8350_data {struct wm8350* wm8350; } ;
struct wm8350 {int dummy; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;





 struct wm8350_data* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,int) ;
 int FUNC_3 (struct wm8350*,int ,int ) ;
 int FUNC_4 (struct wm8350*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dai *VAR_7,
     int VAR_8, unsigned int VAR_9, int VAR_10)
{
 struct snd_soc_component *VAR_11 = VAR_7->component;
 struct wm8350_data *VAR_12 = FUNC_0(VAR_11);
 struct wm8350 *VAR_13 = VAR_12->wm8350;
 u16 VAR_14;

 switch (VAR_8) {
 case 132:
  FUNC_3(VAR_13, VAR_1,
      VAR_6);
  break;
 case 128:
 case 129:
 case 130:
 case 131:
  FUNC_4(VAR_13, VAR_1,
    VAR_6);
  VAR_14 = FUNC_1(VAR_11, VAR_4) &
      ~VAR_3;
  FUNC_2(VAR_11, VAR_4, VAR_14 | VAR_8);
  break;
 }


 if (VAR_10 == VAR_0)
  FUNC_4(VAR_13, VAR_2,
    VAR_5);
 else
  FUNC_3(VAR_13, VAR_2,
      VAR_5);

 return 0;
}
