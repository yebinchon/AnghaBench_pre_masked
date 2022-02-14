
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int set_pro_rate; } ;
struct snd_ice1712 {int num_total_dacs; int num_total_adcs; TYPE_2__* card; TYPE_1__ gpio; struct prodigy192_spec* spec; scalar_t__ vt1720; } ;
struct prodigy192_spec {int mute_mutex; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ,char*,...) ;
 struct prodigy192_spec* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_ice1712*) ;
 scalar_t__ FUNC_4 (struct snd_ice1712*) ;
 int FUNC_5 (struct snd_ice1712*,unsigned short const,unsigned short const) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct snd_ice1712 *VAR_3)
{
 static const unsigned short VAR_4[] = {
  128, 0,
  129, 0x11,







  (unsigned short)-1
 };
 const unsigned short *VAR_5;
 int VAR_6 = 0;
 struct prodigy192_spec *VAR_7;


 VAR_3->num_total_dacs = 6;
 VAR_3->num_total_adcs = 2;
 VAR_3->vt1720 = 0;

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;
 VAR_3->spec = VAR_7;
 FUNC_2(&VAR_7->mute_mutex);


 VAR_5 = VAR_4;
 for (; *VAR_5 != (unsigned short)-1; VAR_5 += 2)
  FUNC_5(VAR_3, VAR_5[0], VAR_5[1]);
 VAR_3->gpio.set_pro_rate = VAR_2;


 if (FUNC_4(VAR_3)) {
  VAR_6 = FUNC_3(VAR_3);



  FUNC_0(VAR_3->card->dev,
   "AK4114 initialized with status %d\n", VAR_6);
 } else
  FUNC_0(VAR_3->card->dev, "AK4114 not found\n");

 return VAR_6;
}
