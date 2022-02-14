
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sonicvibes {struct snd_card* card; } ;
struct snd_rawmidi {struct snd_mpu401* private_data; } ;
struct snd_mpu401 {int close_input; int open_input; struct sonicvibes* private_data; } ;
struct snd_card {int dummy; } ;


 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_card*,int ) ;
 int FUNC_2 (int *,struct sonicvibes*) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct sonicvibes *VAR_3,
          struct snd_rawmidi *VAR_4)
{
 struct snd_mpu401 * VAR_5 = VAR_4->private_data;
 struct snd_card *VAR_6 = VAR_3->card;
 unsigned int VAR_7;
 int VAR_8;

 VAR_5->private_data = VAR_3;
 VAR_5->open_input = VAR_2;
 VAR_5->close_input = VAR_1;
 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_0); VAR_7++)
  if ((VAR_8 = FUNC_1(VAR_6, FUNC_2(&VAR_0[VAR_7], VAR_3))) < 0)
   return VAR_8;
 return 0;
}
