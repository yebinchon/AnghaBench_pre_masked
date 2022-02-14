
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int const pix_fmt; } ;
struct TYPE_4__ {int hwdec_request_reinit; int hwdec_failed; TYPE_1__ hwdec; int use_hwdec; } ;
typedef TYPE_2__ vd_ffmpeg_ctx ;
struct mp_filter {TYPE_2__* priv; } ;
struct AVCodecContext {int profile; int codec_id; struct mp_filter* opaque; } ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;


 int const VAR_0 ;
 int FUNC_0 (struct mp_filter*,char*,...) ;
 int FUNC_1 (int ) ;
 char const* FUNC_2 (int const) ;
 int FUNC_3 (struct AVCodecContext*,int const*) ;
 char* FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (struct mp_filter*,int const) ;

__attribute__((used)) static enum AVPixelFormat FUNC_6(struct AVCodecContext *VAR_1,
                                           const enum AVPixelFormat *VAR_2)
{
    struct mp_filter *VAR_3 = VAR_1->opaque;
    vd_ffmpeg_ctx *VAR_4 = VAR_3->priv;

    FUNC_0(VAR_3, "Pixel formats supported by decoder:");
    for (int VAR_5 = 0; VAR_2[VAR_5] != VAR_0; VAR_5++)
        FUNC_0(VAR_3, " %s", FUNC_2(VAR_2[VAR_5]));
    FUNC_0(VAR_3, "\n");

    const char *VAR_6 = FUNC_4(VAR_1->codec_id, VAR_1->profile);
    FUNC_0(VAR_3, "Codec profile: %s (0x%x)\n", VAR_6 ? VAR_6 : "unknown",
               VAR_1->profile);

    FUNC_1(VAR_4->use_hwdec);

    VAR_4->hwdec_request_reinit |= VAR_4->hwdec_failed;
    VAR_4->hwdec_failed = 0;

    enum AVPixelFormat VAR_7 = VAR_0;
    for (int VAR_8 = 0; VAR_2[VAR_8] != VAR_0; VAR_8++) {
        if (VAR_4->hwdec.pix_fmt == VAR_2[VAR_8]) {
            if (FUNC_5(VAR_3, VAR_2[VAR_8]) < 0)
                break;
            VAR_7 = VAR_2[VAR_8];
            break;
        }
    }

    if (VAR_7 == VAR_0) {
        VAR_4->hwdec_failed = 1;
        VAR_7 = FUNC_3(VAR_1, VAR_2);
    }

    const char *VAR_9 = FUNC_2(VAR_7);
    FUNC_0(VAR_3, "Requesting pixfmt '%s' from decoder.\n", VAR_9 ? VAR_9 : "-");
    return VAR_7;
}
