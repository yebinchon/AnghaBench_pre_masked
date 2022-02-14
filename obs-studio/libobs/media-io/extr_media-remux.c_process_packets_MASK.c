
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int (* media_remux_progress_callback ) (void*,float) ;
typedef TYPE_1__* media_remux_job_t ;
struct TYPE_13__ {int * streams; } ;
struct TYPE_12__ {int * streams; } ;
struct TYPE_11__ {float pos; size_t stream_index; } ;
struct TYPE_10__ {TYPE_8__* ofmt_ctx; TYPE_5__* ifmt_ctx; scalar_t__ in_size; } ;
typedef TYPE_2__ AVPacket ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_8__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_5__*,TYPE_2__*) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static inline int FUNC_6(media_remux_job_t VAR_2,
      media_remux_progress_callback VAR_3,
      void *VAR_4)
{
 AVPacket VAR_5;

 int VAR_6, VAR_7 = 0;
 for (;;) {
  VAR_6 = FUNC_3(VAR_2->ifmt_ctx, &VAR_5);
  if (VAR_6 < 0) {
   if (VAR_6 != VAR_0)
    FUNC_4(VAR_1,
         "media_remux: Error reading"
         " packet: %s",
         FUNC_0(VAR_6));
   break;
  }

  if (VAR_3 != ((void*)0) && VAR_7++ > 10) {
   float VAR_8 = VAR_5.pos / (float)VAR_2->in_size * 100.f;
   if (!VAR_3(VAR_4, VAR_8))
    break;
   VAR_7 = 0;
  }

  FUNC_5(&VAR_5, VAR_2->ifmt_ctx->streams[VAR_5.stream_index],
          VAR_2->ofmt_ctx->streams[VAR_5.stream_index]);

  VAR_6 = FUNC_1(VAR_2->ofmt_ctx, &VAR_5);
  FUNC_2(&VAR_5);

  if (VAR_6 < 0) {
   FUNC_4(VAR_1, "media_remux: Error muxing packet: %s",
        FUNC_0(VAR_6));
   break;
  }
 }

 return VAR_6;
}
