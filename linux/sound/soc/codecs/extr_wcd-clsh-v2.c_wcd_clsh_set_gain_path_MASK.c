
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcd_clsh_ctrl {struct snd_soc_component* comp; } ;
struct snd_soc_component {int dummy; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct snd_soc_component*,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct wcd_clsh_ctrl *VAR_6, int VAR_7)
{
 struct snd_soc_component *VAR_8 = VAR_6->comp;
 int VAR_9 = 0;

 switch (VAR_7) {
 case 128:
 case 131:
  VAR_9 = VAR_0;
  break;
 case 130:
  VAR_9 = VAR_1;
  break;
 case 129:
  VAR_9 = VAR_2;
  break;
 }

 FUNC_0(VAR_8, VAR_4,
     VAR_3,
     VAR_9);

 FUNC_0(VAR_8, VAR_5,
     VAR_3,
     VAR_9);
}
