
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcd9335_codec {int sido_ccl_cnt; int dev; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct wcd9335_codec *VAR_3,
     bool VAR_4)
{
 struct snd_soc_component *VAR_5 = VAR_3->component;

 if (VAR_4) {
  if (++VAR_3->sido_ccl_cnt == 1)
   FUNC_1(VAR_5, VAR_0,
     VAR_2);
 } else {
  if (VAR_3->sido_ccl_cnt == 0) {
   FUNC_0(VAR_3->dev, "sido_ccl already disabled\n");
   return;
  }
  if (--VAR_3->sido_ccl_cnt == 0)
   FUNC_1(VAR_5, VAR_0,
    VAR_1);
 }
}
