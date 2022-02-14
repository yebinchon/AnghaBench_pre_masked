
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_sb_csp {struct firmware const** csp_programs; TYPE_2__* chip; } ;
typedef struct firmware {int size; int data; } const firmware ;
struct TYPE_4__ {TYPE_1__* card; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ FUNC_0 (char const* const*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct firmware const**,char const* const,int ) ;
 int FUNC_3 (struct snd_sb_csp*,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct snd_sb_csp *VAR_1, int VAR_2, int VAR_3)
{
 static const char *const VAR_4[] = {
  "sb16/mulaw_main.csp",
  "sb16/alaw_main.csp",
  "sb16/ima_adpcm_init.csp",
  "sb16/ima_adpcm_playback.csp",
  "sb16/ima_adpcm_capture.csp",
 };
 const struct firmware *VAR_5;

 FUNC_1(FUNC_0(VAR_4) != VAR_0);
 VAR_5 = VAR_1->csp_programs[VAR_2];
 if (!VAR_5) {
  int VAR_6 = FUNC_2(&VAR_5, VAR_4[VAR_2],
           VAR_1->chip->card->dev);
  if (VAR_6 < 0)
   return VAR_6;
  VAR_1->csp_programs[VAR_2] = VAR_5;
 }
 return FUNC_3(VAR_1, VAR_5->data, VAR_5->size, VAR_3);
}
