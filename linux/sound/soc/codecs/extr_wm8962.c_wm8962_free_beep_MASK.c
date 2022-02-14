
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8962_priv {int * beep; int beep_work; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 struct wm8962_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct snd_soc_component *VAR_3)
{
 struct wm8962_priv *VAR_4 = FUNC_2(VAR_3);

 FUNC_1(VAR_3->dev, &VAR_2);
 FUNC_0(&VAR_4->beep_work);
 VAR_4->beep = ((void*)0);

 FUNC_3(VAR_3, VAR_1, VAR_0,0);
}
