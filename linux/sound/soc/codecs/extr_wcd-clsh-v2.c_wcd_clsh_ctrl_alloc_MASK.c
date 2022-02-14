
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcd_clsh_ctrl {struct snd_soc_component* comp; int state; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 struct wcd_clsh_ctrl* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct wcd_clsh_ctrl* FUNC_1 (int,int ) ;

struct wcd_clsh_ctrl *FUNC_2(struct snd_soc_component *VAR_3,
       int VAR_4)
{
 struct wcd_clsh_ctrl *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_5->state = VAR_2;
 VAR_5->comp = VAR_3;

 return VAR_5;
}
