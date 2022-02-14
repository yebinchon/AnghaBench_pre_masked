
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcd_clsh_ctrl {int flyback_users; struct snd_soc_component* comp; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_soc_component*,int ,int ,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct wcd_clsh_ctrl *VAR_4,
      int VAR_5,
      bool VAR_6)
{
 struct snd_soc_component *VAR_7 = VAR_4->comp;


 if ((VAR_6 && (++VAR_4->flyback_users == 1)) ||
    (!VAR_6 && (--VAR_4->flyback_users == 0))) {
  FUNC_0(VAR_7, VAR_0,
    VAR_1,
    VAR_6 << VAR_2);

  FUNC_1(100, 110);
 }




 FUNC_1(500, 500 + VAR_3);
}
