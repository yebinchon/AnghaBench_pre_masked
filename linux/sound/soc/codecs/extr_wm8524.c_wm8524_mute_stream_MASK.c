
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8524_priv {scalar_t__ mute; } ;
struct snd_soc_dai {int component; } ;


 int FUNC_0 (scalar_t__,int) ;
 struct wm8524_priv* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_0, int VAR_1, int VAR_2)
{
 struct wm8524_priv *VAR_3 = FUNC_1(VAR_0->component);

 if (VAR_3->mute)
  FUNC_0(VAR_3->mute, VAR_1);

 return 0;
}
