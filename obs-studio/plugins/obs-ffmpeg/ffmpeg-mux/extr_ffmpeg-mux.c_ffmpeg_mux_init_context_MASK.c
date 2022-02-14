
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* file; } ;
struct ffmpeg_mux {TYPE_3__* output; TYPE_1__ params; } ;
struct TYPE_6__ {TYPE_2__* oformat; } ;
struct TYPE_5__ {void* audio_codec; void* video_codec; } ;
typedef int AVOutputFormat ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int) ;
 int * FUNC_1 (int *,char*,int *) ;
 int FUNC_2 (TYPE_3__**,int *,int *,int *) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (struct ffmpeg_mux*) ;
 int FUNC_5 (struct ffmpeg_mux*) ;
 int FUNC_6 (struct ffmpeg_mux*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_7(struct ffmpeg_mux *VAR_4)
{
 AVOutputFormat *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(((void*)0), VAR_4->params.file, ((void*)0));
 if (VAR_5 == ((void*)0)) {
  FUNC_3(VAR_3, "Couldn't find an appropriate muxer for '%s'\n",
   VAR_4->params.file);
  return VAR_1;
 }

 VAR_6 = FUNC_2(&VAR_4->output, VAR_5, ((void*)0),
          ((void*)0));
 if (VAR_6 < 0) {
  FUNC_3(VAR_3, "Couldn't initialize output context: %s\n",
   FUNC_0(VAR_6));
  return VAR_1;
 }

 VAR_4->output->oformat->video_codec = VAR_0;
 VAR_4->output->oformat->audio_codec = VAR_0;

 if (!FUNC_5(VAR_4)) {
  FUNC_4(VAR_4);
  return VAR_1;
 }

 VAR_6 = FUNC_6(VAR_4);
 if (VAR_6 != VAR_2) {
  FUNC_4(VAR_4);
  return VAR_6;
 }

 return VAR_2;
}
