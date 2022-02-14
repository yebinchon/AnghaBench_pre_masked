
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol_new {scalar_t__ count; } ;
struct snd_ice1712 {scalar_t__ num_total_dacs; int card; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct snd_kcontrol_new*,struct snd_ice1712*) ;
 struct snd_kcontrol_new VAR_0 ;
 struct snd_kcontrol_new VAR_1 ;
 struct snd_kcontrol_new VAR_2 ;
 struct snd_kcontrol_new VAR_3 ;
 struct snd_kcontrol_new VAR_4 ;
 struct snd_kcontrol_new VAR_5 ;
 struct snd_kcontrol_new VAR_6 ;
 struct snd_kcontrol_new VAR_7 ;
 struct snd_kcontrol_new VAR_8 ;

__attribute__((used)) static int FUNC_2(struct snd_ice1712 *VAR_9)
{
 int VAR_10;

 VAR_10 = FUNC_0(VAR_9->card, FUNC_1(&VAR_0, VAR_9));
 if (VAR_10 < 0)
  return VAR_10;
 VAR_10 = FUNC_0(VAR_9->card, FUNC_1(&VAR_5, VAR_9));
 if (VAR_10 < 0)
  return VAR_10;
 VAR_10 = FUNC_0(VAR_9->card, FUNC_1(&VAR_6, VAR_9));
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_0(VAR_9->card, FUNC_1(&VAR_7, VAR_9));
 if (VAR_10 < 0)
  return VAR_10;
 VAR_10 = FUNC_0(VAR_9->card, FUNC_1(&VAR_8, VAR_9));
 if (VAR_10 < 0)
  return VAR_10;

 if (VAR_9->num_total_dacs > 0) {
  struct snd_kcontrol_new VAR_11 = VAR_1;
  VAR_11.count = VAR_9->num_total_dacs;
  VAR_10 = FUNC_0(VAR_9->card, FUNC_1(&VAR_11, VAR_9));
  if (VAR_10 < 0)
   return VAR_10;
 }

 VAR_10 = FUNC_0(VAR_9->card, FUNC_1(&VAR_3, VAR_9));
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_0(VAR_9->card, FUNC_1(&VAR_4, VAR_9));
 if (VAR_10 < 0)
  return VAR_10;
 return FUNC_0(VAR_9->card,
      FUNC_1(&VAR_2, VAR_9));
}
