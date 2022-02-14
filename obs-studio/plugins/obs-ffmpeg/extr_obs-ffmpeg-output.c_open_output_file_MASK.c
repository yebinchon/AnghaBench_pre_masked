
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int url; int muxer_settings; } ;
struct ffmpeg_data {TYPE_1__ config; TYPE_4__* output; } ;
struct dstr {int array; int member_0; } ;
struct TYPE_10__ {scalar_t__* filename; int pb; TYPE_2__* oformat; } ;
struct TYPE_9__ {int value; int key; } ;
struct TYPE_8__ {int flags; } ;
typedef TYPE_2__ AVOutputFormat ;
typedef TYPE_3__ AVDictionaryEntry ;
typedef int AVDictionary ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int **) ;
 TYPE_3__* FUNC_2 (int *,char*,TYPE_3__*,int ) ;
 int FUNC_3 (int **,int ,char*,char*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_4__*,int **) ;
 int FUNC_6 (int *,int ,int ,int *,int **) ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (struct dstr*,char*,int ,int ) ;
 int FUNC_9 (struct dstr*) ;
 int FUNC_10 (int ,struct ffmpeg_data*,char*,int ,int ) ;
 int FUNC_11 (scalar_t__*,int ,int) ;

__attribute__((used)) static inline bool FUNC_12(struct ffmpeg_data *VAR_5)
{
 AVOutputFormat *VAR_6 = VAR_5->output->oformat;
 int VAR_7;

 AVDictionary *VAR_8 = ((void*)0);
 if ((VAR_7 = FUNC_3(&VAR_8, VAR_5->config.muxer_settings, "=",
     " ", 0))) {
  FUNC_10(VAR_4, VAR_5,
     "Failed to parse muxer settings: %s\n%s",
     FUNC_4(VAR_7), VAR_5->config.muxer_settings);

  FUNC_1(&VAR_8);
  return 0;
 }

 if (FUNC_0(VAR_8) > 0) {
  struct dstr VAR_9 = {0};

  AVDictionaryEntry *VAR_10 = ((void*)0);
  while ((VAR_10 = FUNC_2(VAR_8, "", VAR_10,
         VAR_2)))
   FUNC_8(&VAR_9, "\n\t%s=%s", VAR_10->key, VAR_10->value);

  FUNC_7(VAR_3, "Using muxer settings: %s", VAR_9.array);
  FUNC_9(&VAR_9);
 }

 if ((VAR_6->flags & VAR_0) == 0) {
  VAR_7 = FUNC_6(&VAR_5->output->pb, VAR_5->config.url,
     VAR_1, ((void*)0), &VAR_8);
  if (VAR_7 < 0) {
   FUNC_10(VAR_4, VAR_5,
      "Couldn't open '%s', %s",
      VAR_5->config.url, FUNC_4(VAR_7));
   FUNC_1(&VAR_8);
   return 0;
  }
 }

 FUNC_11(VAR_5->output->filename, VAR_5->config.url,
  sizeof(VAR_5->output->filename));
 VAR_5->output->filename[sizeof(VAR_5->output->filename) - 1] = 0;

 VAR_7 = FUNC_5(VAR_5->output, &VAR_8);
 if (VAR_7 < 0) {
  FUNC_10(VAR_4, VAR_5, "Error opening '%s': %s",
     VAR_5->config.url, FUNC_4(VAR_7));
  return 0;
 }

 if (FUNC_0(VAR_8) > 0) {
  struct dstr VAR_11 = {0};

  AVDictionaryEntry *VAR_12 = ((void*)0);
  while ((VAR_12 = FUNC_2(VAR_8, "", VAR_12,
         VAR_2)))
   FUNC_8(&VAR_11, "\n\t%s=%s", VAR_12->key, VAR_12->value);

  FUNC_7(VAR_3, "Invalid muxer settings: %s", VAR_11.array);
  FUNC_9(&VAR_11);
 }

 FUNC_1(&VAR_8);

 return 1;
}
