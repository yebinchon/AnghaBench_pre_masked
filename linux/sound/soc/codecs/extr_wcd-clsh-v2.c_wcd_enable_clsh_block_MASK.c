
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcd_clsh_ctrl {int clsh_users; struct snd_soc_component* comp; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_soc_component*,int ,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct wcd_clsh_ctrl *VAR_2,
      bool VAR_3)
{
 struct snd_soc_component *VAR_4 = VAR_2->comp;

 if ((VAR_3 && ++VAR_2->clsh_users == 1) ||
     (!VAR_3 && --VAR_2->clsh_users == 0))
  FUNC_0(VAR_4, VAR_0,
          VAR_1,
          VAR_3);
 if (VAR_2->clsh_users < 0)
  VAR_2->clsh_users = 0;
}
