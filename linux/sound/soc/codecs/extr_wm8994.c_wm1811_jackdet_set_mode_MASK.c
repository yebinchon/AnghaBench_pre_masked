
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct wm8994_priv {scalar_t__ jackdet_mode; scalar_t__ active_refcount; TYPE_1__* micdet; int jackdet; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_2__ {int jack; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct wm8994_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct snd_soc_component *VAR_4, u16 VAR_5)
{
 struct wm8994_priv *VAR_6 = FUNC_0(VAR_4);

 if (!VAR_6->jackdet || !VAR_6->micdet[0].jack)
  return;

 if (VAR_6->active_refcount)
  VAR_5 = VAR_0;

 if (VAR_5 == VAR_6->jackdet_mode)
  return;

 VAR_6->jackdet_mode = VAR_5;


 if (VAR_5 != VAR_2)
  VAR_5 = VAR_0;

 FUNC_1(VAR_4, VAR_3,
       VAR_1, VAR_5);
}
