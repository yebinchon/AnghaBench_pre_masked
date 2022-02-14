
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int report; struct snd_soc_jack* jack; } ;
struct TYPE_4__ {int report; struct snd_soc_jack* jack; } ;
struct wm8350_data {TYPE_1__ hpr; TYPE_2__ hpl; struct wm8350* wm8350; } ;
struct wm8350 {int dummy; } ;
struct snd_soc_jack {int dummy; } ;
struct snd_soc_component {int dummy; } ;
typedef enum wm8350_jack { ____Placeholder_wm8350_jack } wm8350_jack ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct wm8350_data* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct wm8350*,int ,int) ;
 int FUNC_2 (int ,struct wm8350_data*) ;
 int FUNC_3 (int ,struct wm8350_data*) ;
 int FUNC_4 (struct wm8350*,int ,int) ;

int FUNC_5(struct snd_soc_component *VAR_6, enum wm8350_jack VAR_7,
     struct snd_soc_jack *VAR_8, int VAR_9)
{
 struct wm8350_data *VAR_10 = FUNC_0(VAR_6);
 struct wm8350 *VAR_11 = VAR_10->wm8350;
 int VAR_12;

 switch (VAR_7) {
 case 129:
  VAR_10->hpl.jack = VAR_8;
  VAR_10->hpl.report = VAR_9;
  VAR_12 = VAR_2;
  break;

 case 128:
  VAR_10->hpr.jack = VAR_8;
  VAR_10->hpr.report = VAR_9;
  VAR_12 = VAR_3;
  break;

 default:
  return -VAR_0;
 }

 if (VAR_9) {
  FUNC_4(VAR_11, VAR_4, VAR_5);
  FUNC_4(VAR_11, VAR_1, VAR_12);
 } else {
  FUNC_1(VAR_11, VAR_1, VAR_12);
 }


 switch (VAR_7) {
 case 129:
  FUNC_2(0, VAR_10);
  break;
 case 128:
  FUNC_3(0, VAR_10);
  break;
 }

 return 0;
}
