
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8996_priv {int bg_ena; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct wm8996_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct snd_soc_component *VAR_2)
{
 struct wm8996_priv *VAR_3 = FUNC_1(VAR_2);

 VAR_3->bg_ena++;
 if (VAR_3->bg_ena == 1) {
  FUNC_2(VAR_2, VAR_1,
        VAR_0, VAR_0);
  FUNC_0(2);
 }
}
