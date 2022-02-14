
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_virmidi_dev {int seq_mode; int client; } ;
struct snd_rawmidi {struct snd_virmidi_dev* private_data; } ;


 int VAR_0 ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct snd_virmidi_dev*) ;

__attribute__((used)) static int FUNC_2(struct snd_rawmidi *VAR_1)
{
 struct snd_virmidi_dev *VAR_2 = VAR_1->private_data;
 int VAR_3;

 switch (VAR_2->seq_mode) {
 case 128:
  VAR_3 = FUNC_1(VAR_2);
  if (VAR_3 < 0)
   return VAR_3;
  break;
 case 129:
  if (VAR_2->client == 0)
   return -VAR_0;

  break;
 default:
  FUNC_0("ALSA: seq_virmidi: seq_mode is not set: %d\n", VAR_2->seq_mode);
  return -VAR_0;
 }
 return 0;
}
