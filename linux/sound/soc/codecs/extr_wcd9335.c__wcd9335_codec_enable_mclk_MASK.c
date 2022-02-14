
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcd9335_codec {int sido_voltage; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 struct wcd9335_codec* FUNC_0 (int ) ;
 int FUNC_1 (struct wcd9335_codec*,int) ;
 int FUNC_2 (struct wcd9335_codec*,int ) ;
 int FUNC_3 (struct wcd9335_codec*,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_1,
          int VAR_2)
{
 struct wcd9335_codec *VAR_3 = FUNC_0(VAR_1->dev);
 int VAR_4;

 if (VAR_2) {
  VAR_4 = FUNC_1(VAR_3, 1);
  if (VAR_4)
   return VAR_4;

  FUNC_2(VAR_3,
    VAR_0);
 } else {
  FUNC_3(VAR_3,
     VAR_3->sido_voltage);
  FUNC_1(VAR_3, 0);
 }

 return 0;
}
