
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_4__* fmt; } ;
struct ffmpeg_source {TYPE_1__ media; } ;
typedef scalar_t__ int64_t ;
typedef int calldata_t ;
struct TYPE_8__ {scalar_t__ duration; TYPE_2__** streams; } ;
struct TYPE_7__ {scalar_t__ den; scalar_t__ num; } ;
struct TYPE_6__ {scalar_t__ nb_frames; TYPE_3__ avg_frame_rate; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVRational ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_4__*,int ,int,int,int *,int ) ;
 int FUNC_2 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (double) ;

__attribute__((used)) static void FUNC_4(void *VAR_4, calldata_t *VAR_5)
{
 struct ffmpeg_source *VAR_6 = VAR_4;
 int64_t VAR_7 = 0;

 if (!VAR_6->media.fmt) {
  FUNC_2(VAR_5, "num_frames", VAR_7);
  return;
 }

 int VAR_8 = FUNC_1(
  VAR_6->media.fmt, VAR_0, -1, -1, ((void*)0), 0);

 if (VAR_8 < 0) {
  FUNC_0(VAR_3, "Getting number of frames failed: No "
         "video stream in media file!");
  FUNC_2(VAR_5, "num_frames", VAR_7);
  return;
 }

 AVStream *VAR_9 = VAR_6->media.fmt->streams[VAR_8];

 if (VAR_9->nb_frames > 0) {
  VAR_7 = VAR_9->nb_frames;
 } else {
  FUNC_0(VAR_2, "nb_frames not set, estimating using frame "
       "rate and duration");
  AVRational VAR_10 = VAR_9->avg_frame_rate;
  VAR_7 = (int64_t)FUNC_3((double)VAR_6->media.fmt->duration /
           (double)VAR_1 *
           (double)VAR_10.num /
           (double)VAR_10.den);
 }

 FUNC_2(VAR_5, "num_frames", VAR_7);
}
