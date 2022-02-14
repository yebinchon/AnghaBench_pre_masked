
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcd_clsh_ctrl {int state; int mode; struct snd_soc_component* comp; } ;
struct snd_soc_component {int dev; } ;
typedef enum wcd_clsh_mode { ____Placeholder_wcd_clsh_mode } wcd_clsh_mode ;
typedef enum wcd_clsh_event { ____Placeholder_wcd_clsh_event } wcd_clsh_event ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct wcd_clsh_ctrl*,int,int ,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;

int FUNC_3(struct wcd_clsh_ctrl *VAR_3,
       enum wcd_clsh_event VAR_4,
       int VAR_5,
       enum wcd_clsh_mode VAR_6)
{
 struct snd_soc_component *VAR_7 = VAR_3->comp;

 if (VAR_5 == VAR_3->state)
  return 0;

 if (!FUNC_2(VAR_5)) {
  FUNC_1(VAR_7->dev, "Class-H not a valid new state:\n");
  return -VAR_2;
 }

 switch (VAR_4) {
 case 128:
  FUNC_0(VAR_3, VAR_5, VAR_1, VAR_6);
  break;
 case 129:
  FUNC_0(VAR_3, VAR_5, VAR_0, VAR_6);
  break;
 }

 VAR_3->state = VAR_5;
 VAR_3->mode = VAR_6;

 return 0;
}
