
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8350_output {int active; int ramp; } ;
struct wm8350_data {int pga_work; struct wm8350_output out2; struct wm8350_output out1; } ;
struct snd_soc_dapm_widget {int shift; int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;




 int FUNC_0 (int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 struct wm8350_data* FUNC_3 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dapm_widget *VAR_2,
       struct snd_kcontrol *VAR_3, int VAR_4)
{
 struct snd_soc_component *VAR_5 = FUNC_4(VAR_2->dapm);
 struct wm8350_data *VAR_6 = FUNC_3(VAR_5);
 struct wm8350_output *VAR_7;

 switch (VAR_2->shift) {
 case 0:
 case 1:
  VAR_7 = &VAR_6->out1;
  break;
 case 2:
 case 3:
  VAR_7 = &VAR_6->out2;
  break;

 default:
  FUNC_0(1, "Invalid shift %d\n", VAR_2->shift);
  return -1;
 }

 switch (VAR_4) {
 case 129:
  VAR_7->ramp = VAR_1;
  VAR_7->active = 1;

  FUNC_2(&VAR_6->pga_work,
          FUNC_1(1));
  break;

 case 128:
  VAR_7->ramp = VAR_0;
  VAR_7->active = 0;

  FUNC_2(&VAR_6->pga_work,
          FUNC_1(1));
  break;
 }

 return 0;
}
