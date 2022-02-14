
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ffmpeg_image {int stream_idx; int file; int decoder; TYPE_2__* decoder_ctx; TYPE_1__* stream; TYPE_3__* fmt_ctx; } ;
struct TYPE_6__ {TYPE_1__** streams; } ;
struct TYPE_5__ {int codec_id; } ;
struct TYPE_4__ {TYPE_2__* codec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int ,int,int,int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int ,int *) ;
 int FUNC_4 (int ,char*,int ,...) ;

__attribute__((used)) static bool FUNC_5(struct ffmpeg_image *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_2->fmt_ctx, VAR_0, -1, 1,
          ((void*)0), 0);
 if (VAR_3 < 0) {
  FUNC_4(VAR_1, "Couldn't find video stream in file '%s': %s",
       VAR_2->file, FUNC_0(VAR_3));
  return 0;
 }

 VAR_2->stream_idx = VAR_3;
 VAR_2->stream = VAR_2->fmt_ctx->streams[VAR_3];
 VAR_2->decoder_ctx = VAR_2->stream->codec;
 VAR_2->decoder = FUNC_2(VAR_2->decoder_ctx->codec_id);

 if (!VAR_2->decoder) {
  FUNC_4(VAR_1, "Failed to find decoder for file '%s'",
       VAR_2->file);
  return 0;
 }

 VAR_3 = FUNC_3(VAR_2->decoder_ctx, VAR_2->decoder, ((void*)0));
 if (VAR_3 < 0) {
  FUNC_4(VAR_1,
       "Failed to open video codec for file '%s': "
       "%s",
       VAR_2->file, FUNC_0(VAR_3));
  return 0;
 }

 return 1;
}
