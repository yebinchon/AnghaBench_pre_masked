
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ff_demuxer {int seek_request; scalar_t__ seek_flush; scalar_t__ seek_pos; int seek_flags; TYPE_4__* format_context; TYPE_2__* audio_decoder; TYPE_1__* video_decoder; } ;
typedef scalar_t__ int64_t ;
struct TYPE_8__ {scalar_t__ duration; } ;
struct TYPE_7__ {int time_base; } ;
struct TYPE_6__ {TYPE_3__* stream; } ;
struct TYPE_5__ {TYPE_3__* stream; } ;
typedef TYPE_3__ AVStream ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,char*,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (TYPE_4__*,int ,scalar_t__,int ) ;
 int FUNC_4 (struct ff_demuxer*) ;
 int FUNC_5 (struct ff_demuxer*) ;

__attribute__((used)) static bool FUNC_6(struct ff_demuxer *VAR_3)
{
 int VAR_4;

 if (VAR_3->seek_request) {
  AVStream *VAR_5 = ((void*)0);
  int64_t VAR_6 = VAR_3->seek_pos;

  if (VAR_3->video_decoder != ((void*)0)) {
   VAR_5 = VAR_3->video_decoder->stream;

  } else if (VAR_3->audio_decoder != ((void*)0)) {
   VAR_5 = VAR_3->audio_decoder->stream;
  }

  if (VAR_5 != ((void*)0) &&
      VAR_3->format_context->duration != VAR_1) {
   VAR_6 = FUNC_2(VAR_6, VAR_2,
                              VAR_5->time_base);
  }

  VAR_4 = FUNC_3(VAR_3->format_context, 0, VAR_6,
                      VAR_3->seek_flags);
  if (VAR_4 < 0) {
   FUNC_1(((void*)0), VAR_0, "unable to seek stream: %s",
          FUNC_0(VAR_4));
   VAR_3->seek_pos = 0;
   VAR_3->seek_request = 0;
   return 0;

  } else {
   if (VAR_3->seek_flush)
    FUNC_4(VAR_3);
   FUNC_5(VAR_3);
  }

  VAR_3->seek_request = 0;
 }
 return 1;
}
