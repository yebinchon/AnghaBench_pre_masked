
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol_new {int count; } ;
struct snd_ice1712 {int num_total_adcs; int* pro_volumes; struct snd_card* card; } ;
struct snd_card {int dummy; } ;


 unsigned int FUNC_0 (struct snd_kcontrol_new*) ;
 int FUNC_1 (struct snd_card*,int ) ;
 int FUNC_2 (struct snd_kcontrol_new*,struct snd_ice1712*) ;
 struct snd_kcontrol_new VAR_0 ;
 struct snd_kcontrol_new VAR_1 ;
 struct snd_kcontrol_new VAR_2 ;
 struct snd_kcontrol_new VAR_3 ;
 struct snd_kcontrol_new* VAR_4 ;
 int FUNC_3 (struct snd_ice1712*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct snd_ice1712 *VAR_5)
{
 struct snd_card *VAR_6 = VAR_5->card;
 unsigned int VAR_7;
 int VAR_8;


 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4); VAR_7++) {
  VAR_8 = FUNC_1(VAR_6, FUNC_2(&VAR_4[VAR_7], VAR_5));
  if (VAR_8 < 0)
   return VAR_8;
 }

 if (VAR_5->num_total_adcs > 0) {
  struct snd_kcontrol_new VAR_9 = VAR_0;
  VAR_9.count = VAR_5->num_total_adcs;
  VAR_8 = FUNC_1(VAR_6, FUNC_2(&VAR_9, VAR_5));
  if (VAR_8 < 0)
   return VAR_8;
 }

 VAR_8 = FUNC_1(VAR_6, FUNC_2(&VAR_2, VAR_5));
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_5->num_total_adcs > 0) {
  struct snd_kcontrol_new VAR_10 = VAR_1;
  VAR_10.count = VAR_5->num_total_adcs;
  VAR_8 = FUNC_1(VAR_6, FUNC_2(&VAR_10, VAR_5));
  if (VAR_8 < 0)
   return VAR_8;
 }

 VAR_8 = FUNC_1(VAR_6, FUNC_2(&VAR_3, VAR_5));
 if (VAR_8 < 0)
  return VAR_8;


 for (VAR_7 = 0; VAR_7 < 10; VAR_7++) {
  VAR_5->pro_volumes[VAR_7] = 0x80008000;
  FUNC_3(VAR_5, VAR_7);
 }
 for (VAR_7 = 10; VAR_7 < 10 + VAR_5->num_total_adcs; VAR_7++) {
  VAR_5->pro_volumes[VAR_7] = 0x80008000;
  FUNC_3(VAR_5, VAR_7);
 }
 for (VAR_7 = 18; VAR_7 < 20; VAR_7++) {
  VAR_5->pro_volumes[VAR_7] = 0x80008000;
  FUNC_3(VAR_5, VAR_7);
 }
 return 0;
}
