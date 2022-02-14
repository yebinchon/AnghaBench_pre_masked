
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol_new {int count; } ;
struct snd_ice1712 {scalar_t__ num_total_dacs; int card; scalar_t__ vt1720; int own_routing; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct snd_kcontrol_new*,struct snd_ice1712*) ;
 struct snd_kcontrol_new VAR_0 ;
 struct snd_kcontrol_new VAR_1 ;
 struct snd_kcontrol_new VAR_2 ;
 struct snd_kcontrol_new VAR_3 ;
 struct snd_kcontrol_new VAR_4 ;
 struct snd_kcontrol_new VAR_5 ;

__attribute__((used)) static int FUNC_2(struct snd_ice1712 *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_0(VAR_6->card, FUNC_1(&VAR_0, VAR_6));
 if (VAR_7 < 0)
  return VAR_7;
 VAR_7 = FUNC_0(VAR_6->card, FUNC_1(&VAR_3, VAR_6));
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_0(VAR_6->card, FUNC_1(&VAR_4, VAR_6));
 if (VAR_7 < 0)
  return VAR_7;
 VAR_7 = FUNC_0(VAR_6->card, FUNC_1(&VAR_5, VAR_6));
 if (VAR_7 < 0)
  return VAR_7;

 if (!VAR_6->own_routing && VAR_6->num_total_dacs > 0) {
  struct snd_kcontrol_new VAR_8 = VAR_1;
  VAR_8.count = VAR_6->num_total_dacs;
  if (VAR_6->vt1720 && VAR_8.count > 2)
   VAR_8.count = 2;
  VAR_7 = FUNC_0(VAR_6->card, FUNC_1(&VAR_8, VAR_6));
  if (VAR_7 < 0)
   return VAR_7;
 }

 return FUNC_0(VAR_6->card,
      FUNC_1(&VAR_2, VAR_6));
}
