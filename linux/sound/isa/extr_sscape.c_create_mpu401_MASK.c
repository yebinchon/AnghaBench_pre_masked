
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soundscape {int dummy; } ;
struct snd_rawmidi {struct snd_mpu401* private_data; } ;
struct snd_mpu401 {struct soundscape* private_data; void* open_output; void* open_input; } ;
struct snd_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct soundscape* FUNC_0 (struct snd_card*) ;
 int FUNC_1 (struct snd_mpu401*) ;
 void* VAR_2 ;
 int FUNC_2 (struct snd_card*,int,int ,unsigned long,int ,int,struct snd_rawmidi**) ;

__attribute__((used)) static int FUNC_3(struct snd_card *VAR_3, int VAR_4,
    unsigned long VAR_5, int VAR_6)
{
 struct soundscape *VAR_7 = FUNC_0(VAR_3);
 struct snd_rawmidi *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_0, VAR_5,
      VAR_1, VAR_6, &VAR_8);
 if (VAR_9 == 0) {
  struct snd_mpu401 *VAR_10 = VAR_8->private_data;
  VAR_10->open_input = VAR_2;
  VAR_10->open_output = VAR_2;
  VAR_10->private_data = VAR_7;

  FUNC_1(VAR_10);
 }

 return VAR_9;
}
