
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8978_priv {int sysclk; } ;
struct snd_soc_component {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 struct wm8978_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,int) ;
 int * VAR_1 ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_2)
{
 struct wm8978_priv *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;





 VAR_3->sysclk = VAR_0;






 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++)
  FUNC_2(VAR_2, VAR_1[VAR_4], 0x100, 0x100);

 return 0;
}
