
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int sync_type; } ;
struct ff_demuxer {int * video_decoder; int video_callbacks; int * audio_decoder; int audio_callbacks; TYPE_1__ clock; TYPE_3__* format_context; } ;
typedef scalar_t__ int64_t ;
struct TYPE_10__ {scalar_t__ codec_type; } ;
struct TYPE_9__ {unsigned int nb_streams; scalar_t__ start_time; TYPE_2__** streams; } ;
struct TYPE_8__ {scalar_t__ discard; scalar_t__ start_time; int time_base; TYPE_4__* codec; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ff_demuxer*,TYPE_2__*) ;
 int FUNC_7 (struct ff_demuxer*) ;
 int FUNC_8 (int *,scalar_t__) ;

__attribute__((used)) static bool FUNC_9(struct ff_demuxer *VAR_8)
{
 AVFormatContext *VAR_9 = VAR_8->format_context;
 unsigned int VAR_10;
 AVStream *VAR_11 = ((void*)0);
 AVStream *VAR_12 = ((void*)0);
 int64_t VAR_13 = VAR_7;

 for (VAR_10 = 0; VAR_10 < VAR_9->nb_streams; VAR_10++) {
  AVCodecContext *VAR_14 = VAR_9->streams[VAR_10]->codec;

  if (VAR_14->codec_type == VAR_2 && !VAR_12)
   VAR_12 = VAR_9->streams[VAR_10];

  if (VAR_14->codec_type == VAR_1 && !VAR_11)
   VAR_11 = VAR_9->streams[VAR_10];
 }

 int VAR_15 =
         FUNC_1(VAR_8->format_context);

 if (VAR_15 >= 0) {
  AVStream *VAR_16 =
          VAR_9->streams[VAR_15];

  if (VAR_16->codec->codec_type == VAR_1)
   VAR_8->clock.sync_type = VAR_4;
  else if (VAR_16->codec->codec_type == VAR_2)
   VAR_8->clock.sync_type = VAR_5;
 }

 if (VAR_12 != ((void*)0))
  FUNC_6(VAR_8, VAR_12);

 if (VAR_11 != ((void*)0))
  FUNC_6(VAR_8, VAR_11);

 if (VAR_8->video_decoder == ((void*)0) && VAR_8->audio_decoder == ((void*)0)) {
  return 0;
 }

 if (!FUNC_7(VAR_8)) {
  return 0;
 }

 for (VAR_10 = 0; VAR_10 < VAR_9->nb_streams; VAR_10++) {
  AVStream *VAR_17 = VAR_9->streams[VAR_10];
  int64_t VAR_18;

  if (VAR_17->discard == VAR_0 ||
      VAR_17->start_time == VAR_3) {
   continue;
  }

  VAR_18 = FUNC_2(VAR_17->start_time, VAR_17->time_base,
                               VAR_6);
  VAR_13 = FUNC_0(VAR_13, VAR_18);
 }

 if (VAR_9->start_time != VAR_3) {
  if (VAR_13 > VAR_9->start_time ||
      VAR_13 == VAR_7) {
   VAR_13 = VAR_9->start_time;
  }
 }

 if (VAR_13 != VAR_7) {
  FUNC_8(VAR_8->video_decoder, VAR_13);
  FUNC_8(VAR_8->audio_decoder, VAR_13);
 }

 if (VAR_8->audio_decoder != ((void*)0)) {
  if (FUNC_3(&VAR_8->audio_callbacks)) {
   FUNC_5(VAR_8->audio_decoder);
  } else {
   FUNC_4(VAR_8->audio_decoder);
   VAR_8->audio_decoder = ((void*)0);
   if (!FUNC_7(VAR_8))
    return 0;
  }
 }

 if (VAR_8->video_decoder != ((void*)0)) {
  if (FUNC_3(&VAR_8->video_callbacks)) {
   FUNC_5(VAR_8->video_decoder);
  } else {
   FUNC_4(VAR_8->video_decoder);
   VAR_8->video_decoder = ((void*)0);
   if (!FUNC_7(VAR_8))
    return 0;
  }
 }

 return FUNC_7(VAR_8);
}
