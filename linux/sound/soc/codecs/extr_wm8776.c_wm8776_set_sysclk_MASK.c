
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm8776_priv {unsigned int* sysclk; } ;
struct snd_soc_dai {TYPE_1__* driver; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_2__ {size_t id; } ;


 size_t FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 struct wm8776_priv* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_1,
        int VAR_2, unsigned int VAR_3, int VAR_4)
{
 struct snd_soc_component *VAR_5 = VAR_1->component;
 struct wm8776_priv *VAR_6 = FUNC_2(VAR_5);

 if (FUNC_1(VAR_1->driver->id >= FUNC_0(VAR_6->sysclk)))
  return -VAR_0;

 VAR_6->sysclk[VAR_1->driver->id] = VAR_3;

 return 0;
}
