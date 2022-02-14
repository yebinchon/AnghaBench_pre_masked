
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ is_hw_decoding; } ;
struct ff_demuxer {TYPE_1__ options; } ;
struct TYPE_14__ {int refcounted_frames; scalar_t__ codec_id; int thread_count; TYPE_3__* opaque; int get_format; } ;
struct TYPE_13__ {char* name; } ;
struct TYPE_12__ {TYPE_4__* codec; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVHWAccel ;
typedef int AVGetFormatCb ;
typedef int AVDictionary ;
typedef TYPE_4__ AVCodecContext ;
typedef int AVCodec ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ,char*,scalar_t__) ;
 int * FUNC_1 (scalar_t__) ;
 int * FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int *,int **) ;
 TYPE_3__* FUNC_4 (TYPE_4__*) ;
 int VAR_7 ;
 int FUNC_5 (struct ff_demuxer*,TYPE_4__*,TYPE_2__*,int) ;

__attribute__((used)) static bool FUNC_6(struct ff_demuxer *VAR_8, AVStream *VAR_9)
{
 AVCodecContext *VAR_10 = ((void*)0);
 AVCodec *VAR_11 = ((void*)0);
 AVDictionary *VAR_12 = ((void*)0);
 int VAR_13;

 bool VAR_14 = 0;
 VAR_10 = VAR_9->codec;



 VAR_10->refcounted_frames = 1;


 if (VAR_10->codec_id == VAR_1 ||
     VAR_10->codec_id == VAR_2 ||
     VAR_10->codec_id == VAR_0 ||
     VAR_10->codec_id == VAR_5)
  VAR_10->thread_count = 1;

 if (VAR_8->options.is_hw_decoding) {
  AVHWAccel *VAR_15 = FUNC_4(VAR_10);

  if (VAR_15) {
   AVCodec *VAR_16 =
           FUNC_2(VAR_15->name);

   if (VAR_16 != ((void*)0)) {
    AVGetFormatCb VAR_17 =
            VAR_10->get_format;

    VAR_10->get_format = VAR_7;
    VAR_10->opaque = VAR_15;

    VAR_13 = FUNC_3(VAR_10, VAR_16,
                        &VAR_12);
    if (VAR_13 < 0) {
     FUNC_0(((void*)0), VAR_6,
            "no hardware decoder found for"
            " codec with id %d",
            VAR_10->codec_id);
     VAR_10->get_format =
             VAR_17;
     VAR_10->opaque = ((void*)0);
    } else {
     VAR_11 = VAR_16;
     VAR_14 = 1;
    }
   }
  }
 }

 if (VAR_11 == ((void*)0)) {
  if (VAR_10->codec_id == VAR_3)
   VAR_11 = FUNC_2("libvpx");
  else if (VAR_10->codec_id == VAR_4)
   VAR_11 = FUNC_2("libvpx-vp9");

  if (!VAR_11)
   VAR_11 = FUNC_1(VAR_10->codec_id);
  if (VAR_11 == ((void*)0)) {
   FUNC_0(((void*)0), VAR_6,
          "no decoder found for"
          " codec with id %d",
          VAR_10->codec_id);
   return 0;
  }
  if (FUNC_3(VAR_10, VAR_11, &VAR_12) < 0) {
   FUNC_0(((void*)0), VAR_6,
          "unable to open decoder"
          " with codec id %d",
          VAR_10->codec_id);
   return 0;
  }
 }

 return FUNC_5(VAR_8, VAR_10, VAR_9,
                           VAR_14);
}
