
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8994_priv {scalar_t__ active_refcount; int accdet_lock; scalar_t__ mic_detecting; scalar_t__ jack_mic; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct wm8994_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ) ;

__attribute__((used)) static void FUNC_5(struct snd_soc_component *VAR_2)
{
 struct wm8994_priv *VAR_3 = FUNC_3(VAR_2);
 u16 VAR_4;

 FUNC_1(&VAR_3->accdet_lock);

 VAR_3->active_refcount--;

 FUNC_0(VAR_2->dev, "Active refcount decremented, now %d\n",
  VAR_3->active_refcount);

 if (VAR_3->active_refcount == 0) {

  if (VAR_3->jack_mic || VAR_3->mic_detecting)
   VAR_4 = VAR_1;
  else
   VAR_4 = VAR_0;

  FUNC_4(VAR_2, VAR_4);
 }

 FUNC_2(&VAR_3->accdet_lock);
}
