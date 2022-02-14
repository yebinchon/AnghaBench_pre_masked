
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int report; int short_report; struct snd_soc_jack* jack; } ;
struct wm8350_data {TYPE_1__ mic; struct wm8350* wm8350; } ;
struct wm8350 {int dummy; } ;
struct snd_soc_jack {int dummy; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct wm8350_data* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct wm8350*,int ,int ) ;
 int FUNC_2 (struct wm8350*,int ,int ) ;

int FUNC_3(struct snd_soc_component *VAR_4,
      struct snd_soc_jack *VAR_5,
      int VAR_6, int VAR_7)
{
 struct wm8350_data *VAR_8 = FUNC_0(VAR_4);
 struct wm8350 *VAR_9 = VAR_8->wm8350;

 VAR_8->mic.jack = VAR_5;
 VAR_8->mic.report = VAR_6;
 VAR_8->mic.short_report = VAR_7;

 if (VAR_6 || VAR_7) {
  FUNC_2(VAR_9, VAR_2, VAR_3);
  FUNC_2(VAR_9, VAR_1,
    VAR_0);
 } else {
  FUNC_1(VAR_9, VAR_1,
      VAR_0);
 }

 return 0;
}
