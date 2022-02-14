
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcd9335_codec {int sido_voltage; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
typedef enum wcd9335_sido_voltage { ____Placeholder_wcd9335_sido_voltage } wcd9335_sido_voltage ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct wcd9335_codec *VAR_6,
          enum wcd9335_sido_voltage VAR_7)
{
 struct snd_soc_component *VAR_8 = VAR_6->component;
 int VAR_9;

 if (VAR_7 == VAR_6->sido_voltage)
  return;


 VAR_9 = FUNC_0(VAR_7) &
   VAR_5;
 FUNC_2(VAR_8, VAR_4, VAR_9);
 FUNC_1(VAR_8, VAR_0,
    VAR_3,
    VAR_2);


 FUNC_3(1000, 1100);
 VAR_6->sido_voltage = VAR_7;
 FUNC_1(VAR_8, VAR_0,
    VAR_3,
    VAR_1);
}
