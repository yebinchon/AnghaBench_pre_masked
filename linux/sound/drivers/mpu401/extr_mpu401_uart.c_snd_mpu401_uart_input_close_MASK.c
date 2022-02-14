
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct snd_mpu401 {int (* close_input ) (struct snd_mpu401*) ;int mode; int * substream_input; } ;
struct TYPE_2__ {struct snd_mpu401* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct snd_mpu401*,int ,int ) ;
 int FUNC_2 (struct snd_mpu401*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct snd_rawmidi_substream *VAR_4)
{
 struct snd_mpu401 *VAR_5;
 int VAR_6 = 0;

 VAR_5 = VAR_4->rmidi->private_data;
 FUNC_0(VAR_1, &VAR_5->mode);
 VAR_5->substream_input = ((void*)0);
 if (! FUNC_3(VAR_2, &VAR_5->mode))
  VAR_6 = FUNC_1(VAR_5, VAR_3, 0);
 if (VAR_5->close_input)
  VAR_5->close_input(VAR_5);
 if (VAR_6)
  return -VAR_0;
 return 0;
}
