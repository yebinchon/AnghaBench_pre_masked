
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ff_packet {int base; int member_0; } ;
struct TYPE_8__ {scalar_t__ is_looping; } ;
struct ff_demuxer {int abort; TYPE_4__* video_decoder; TYPE_4__* audio_decoder; TYPE_1__ options; TYPE_3__* format_context; int input; } ;
struct TYPE_11__ {int eof; } ;
struct TYPE_10__ {TYPE_2__* pb; } ;
struct TYPE_9__ {scalar_t__ error; scalar_t__ eof_reached; } ;
typedef TYPE_2__ AVIOContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,char*,int ) ;
 int FUNC_4 (TYPE_3__*,int *) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (TYPE_4__*,struct ff_packet*) ;
 scalar_t__ FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (struct ff_demuxer*) ;
 int FUNC_9 (struct ff_demuxer*) ;
 int FUNC_10 (struct ff_demuxer*) ;
 int FUNC_11 (struct ff_demuxer*,TYPE_3__**) ;
 int FUNC_12 (struct ff_demuxer*) ;

__attribute__((used)) static void *FUNC_13(void *VAR_2)
{
 struct ff_demuxer *VAR_3 = (struct ff_demuxer *)VAR_2;
 int VAR_4;

 struct ff_packet VAR_5 = {0};

 if (!FUNC_11(VAR_3, &VAR_3->format_context))
  goto fail;

 FUNC_0(VAR_3->format_context, 0, VAR_3->input, 0);

 if (!FUNC_9(VAR_3))
  goto fail;

 FUNC_8(VAR_3);

 while (!VAR_3->abort) {

  if (!FUNC_10(VAR_3))
   break;

  if (FUNC_7(VAR_3->audio_decoder) ||
      FUNC_7(VAR_3->video_decoder)) {
   FUNC_5(10 * 1000);
   continue;
  }

  VAR_4 = FUNC_4(VAR_3->format_context, &VAR_5.base);
  if (VAR_4 < 0) {
   bool VAR_6 = 0;
   if (VAR_4 == VAR_0) {
    VAR_6 = 1;
   } else if (VAR_3->format_context->pb != ((void*)0)) {
    AVIOContext *VAR_7 =
            VAR_3->format_context->pb;
    if (VAR_7->error == 0) {
     FUNC_5(100 * 1000);
     continue;
    } else {
     if (VAR_7->eof_reached != 0)
      VAR_6 = 1;
    }
   }

   if (VAR_6) {
    if (VAR_3->options.is_looping) {
     FUNC_12(VAR_3);
    } else {
     break;
    }
    continue;
   } else {
    FUNC_3(((void*)0), VAR_1,
           "av_read_frame() failed: %s",
           FUNC_1(VAR_4));
    break;
   }
  }

  if (FUNC_6(VAR_3->video_decoder, &VAR_5))
   continue;
  else if (FUNC_6(VAR_3->audio_decoder, &VAR_5))
   continue;
  else
   FUNC_2(&VAR_5.base);
 }
 if (VAR_3->audio_decoder != ((void*)0))
  VAR_3->audio_decoder->eof = 1;
 if (VAR_3->video_decoder != ((void*)0))
  VAR_3->video_decoder->eof = 1;
fail:
 VAR_3->abort = 1;

 return ((void*)0);
}
