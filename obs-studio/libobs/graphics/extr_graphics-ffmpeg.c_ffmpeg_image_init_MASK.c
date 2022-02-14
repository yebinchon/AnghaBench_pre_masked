
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ffmpeg_image {char const* file; int stream_idx; TYPE_1__* decoder_ctx; int format; int cy; int cx; int fmt_ctx; } ;
struct TYPE_2__ {int pix_fmt; int height; int width; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,char const*,int *,int *) ;
 int FUNC_3 (int ,char*,char const*,int ) ;
 int FUNC_4 (struct ffmpeg_image*) ;
 int FUNC_5 (struct ffmpeg_image*) ;
 int FUNC_6 (struct ffmpeg_image*,int ,int) ;

__attribute__((used)) static bool FUNC_7(struct ffmpeg_image *VAR_1, const char *VAR_2)
{
 int VAR_3;

 if (!VAR_2 || !*VAR_2)
  return 0;

 FUNC_6(VAR_1, 0, sizeof(struct ffmpeg_image));
 VAR_1->file = VAR_2;
 VAR_1->stream_idx = -1;

 VAR_3 = FUNC_2(&VAR_1->fmt_ctx, VAR_2, ((void*)0), ((void*)0));
 if (VAR_3 < 0) {
  FUNC_3(VAR_0, "Failed to open file '%s': %s", VAR_1->file,
       FUNC_0(VAR_3));
  return 0;
 }

 VAR_3 = FUNC_1(VAR_1->fmt_ctx, ((void*)0));
 if (VAR_3 < 0) {
  FUNC_3(VAR_0,
       "Could not find stream info for file '%s':"
       " %s",
       VAR_1->file, FUNC_0(VAR_3));
  goto fail;
 }

 if (!FUNC_5(VAR_1))
  goto fail;

 VAR_1->cx = VAR_1->decoder_ctx->width;
 VAR_1->cy = VAR_1->decoder_ctx->height;
 VAR_1->format = VAR_1->decoder_ctx->pix_fmt;
 return 1;

fail:
 FUNC_4(VAR_1);
 return 0;
}
