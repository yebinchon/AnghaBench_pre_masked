
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ac97 {int id; TYPE_1__* bus; } ;
struct TYPE_2__ {int card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_ac97*,char*) ;
 int VAR_2 ;
 int FUNC_1 (int *,struct snd_ac97*) ;
 int FUNC_2 (struct snd_ac97*,int,int,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_ac97 *VAR_3)
{
 if ((VAR_3->id & 0xffffff00) != 0x414c4700) {
  FUNC_0(VAR_3,
    "ac97_quirk ALC_JACK is only for Realtek codecs\n");
  return -VAR_1;
 }
 FUNC_2(VAR_3, 0x7a, 0x20, 0x20);
 FUNC_2(VAR_3, 0x7a, 0x01, 0x01);
 if (VAR_3->id == VAR_0)
  FUNC_2(VAR_3, 0x74, 0x0800, 0x0800);
 return FUNC_3(VAR_3->bus->card, FUNC_1(&VAR_2, VAR_3));
}
