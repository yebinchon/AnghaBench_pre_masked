
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8994_priv {int fw_lock; struct firmware const* mbc; } ;
struct snd_soc_component {int dummy; } ;
struct firmware {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct wm8994_priv* FUNC_2 (struct snd_soc_component*) ;
 scalar_t__ FUNC_3 (struct snd_soc_component*,char*,struct firmware const*,int) ;

__attribute__((used)) static void FUNC_4(const struct firmware *VAR_0, void *VAR_1)
{
 struct snd_soc_component *VAR_2 = VAR_1;
 struct wm8994_priv *VAR_3 = FUNC_2(VAR_2);

 if (VAR_0 && (FUNC_3(VAR_2, "MBC", VAR_0, 1) == 0)) {
  FUNC_0(&VAR_3->fw_lock);
  VAR_3->mbc = VAR_0;
  FUNC_1(&VAR_3->fw_lock);
 }
}
