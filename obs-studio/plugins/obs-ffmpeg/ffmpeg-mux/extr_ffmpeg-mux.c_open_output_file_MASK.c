
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* file; char* muxer_settings; } ;
struct ffmpeg_mux {TYPE_1__ params; TYPE_4__* output; } ;
struct TYPE_10__ {scalar_t__* filename; int pb; TYPE_2__* oformat; } ;
struct TYPE_9__ {char* key; char* value; } ;
struct TYPE_8__ {int flags; } ;
typedef TYPE_2__ AVOutputFormat ;
typedef TYPE_3__ AVDictionaryEntry ;
typedef int AVDictionary ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int **) ;
 TYPE_3__* FUNC_2 (int *,char*,TYPE_3__*,int ) ;
 int FUNC_3 (int **,char*,char*,char*,int ) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (TYPE_4__*,int **) ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (int ,char*,char*,char*) ;
 int FUNC_8 (char*,...) ;
 int VAR_6 ;
 int FUNC_9 (scalar_t__*,char*,int) ;

__attribute__((used)) static inline int FUNC_10(struct ffmpeg_mux *VAR_7)
{
 AVOutputFormat *VAR_8 = VAR_7->output->oformat;
 int VAR_9;

 if ((VAR_8->flags & VAR_0) == 0) {
  VAR_9 = FUNC_6(&VAR_7->output->pb, VAR_7->params.file,
    VAR_1);
  if (VAR_9 < 0) {
   FUNC_7(VAR_6, "Couldn't open '%s', %s",
    VAR_7->params.file, FUNC_4(VAR_9));
   return VAR_3;
  }
 }

 FUNC_9(VAR_7->output->filename, VAR_7->params.file,
  sizeof(VAR_7->output->filename));
 VAR_7->output->filename[sizeof(VAR_7->output->filename) - 1] = 0;

 AVDictionary *VAR_10 = ((void*)0);
 if ((VAR_9 = FUNC_3(&VAR_10, VAR_7->params.muxer_settings, "=",
     " ", 0))) {
  FUNC_7(VAR_6, "Failed to parse muxer settings: %s\n%s",
   FUNC_4(VAR_9), VAR_7->params.muxer_settings);

  FUNC_1(&VAR_10);
 }

 if (FUNC_0(VAR_10) > 0) {
  FUNC_8("Using muxer settings:");

  AVDictionaryEntry *VAR_11 = ((void*)0);
  while ((VAR_11 = FUNC_2(VAR_10, "", VAR_11,
         VAR_2)))
   FUNC_8("\n\t%s=%s", VAR_11->key, VAR_11->value);

  FUNC_8("\n");
 }

 VAR_9 = FUNC_5(VAR_7->output, &VAR_10);
 if (VAR_9 < 0) {
  FUNC_7(VAR_6, "Error opening '%s': %s", VAR_7->params.file,
   FUNC_4(VAR_9));

  FUNC_1(&VAR_10);

  return VAR_9 == -22 ? VAR_5 : VAR_3;
 }

 FUNC_1(&VAR_10);

 return VAR_4;
}
