
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_azf3328_codec_data {int running; int name; } ;
struct snd_azf3328 {struct snd_azf3328_codec_data* codecs; TYPE_1__* card; } ;
typedef enum snd_azf3328_codec_type { ____Placeholder_snd_azf3328_codec_type } snd_azf3328_codec_type ;
struct TYPE_2__ {int dev; } ;





 int FUNC_0 (int ,char*,int ,int,int) ;
 int FUNC_1 (struct snd_azf3328_codec_data*) ;
 int FUNC_2 (struct snd_azf3328*,int) ;

__attribute__((used)) static void
FUNC_3(struct snd_azf3328 *VAR_0,
    enum snd_azf3328_codec_type VAR_1,
    bool VAR_2
)
{
 struct snd_azf3328_codec_data *VAR_3 = &VAR_0->codecs[VAR_1];
 bool VAR_4 = (VAR_3->running != VAR_2);

 FUNC_0(VAR_0->card->dev,
  "codec_activity: %s codec, enable %d, need_change %d\n",
    VAR_3->name, VAR_2, VAR_4
 );
 if (VAR_4) {
  static const struct {
   enum snd_azf3328_codec_type other1;
   enum snd_azf3328_codec_type other2;
  } VAR_5[3] =
   { { 130, 129 },
     { 128, 129 },
     { 128, 130 } };
  bool VAR_6;

  if (VAR_2)


   VAR_6 = 1;
  else {




   VAR_6 =
    ((!VAR_0->codecs[VAR_5[VAR_1].other1]
     .running)
        && (!VAR_0->codecs[VAR_5[VAR_1].other2]
     .running));
  }
  if (VAR_6)
   FUNC_2(VAR_0, VAR_2);



  if (!VAR_2)
   FUNC_1(VAR_3);
  VAR_3->running = VAR_2;
 }
}
