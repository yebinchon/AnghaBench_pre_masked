
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* opts; } ;
typedef TYPE_2__ vd_ffmpeg_ctx ;
struct mp_filter {TYPE_2__* priv; } ;
struct TYPE_11__ {scalar_t__ len; } ;
typedef TYPE_3__ bstr ;
struct TYPE_9__ {int hwdec_codecs; } ;


 TYPE_3__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_3__,char const*) ;
 int FUNC_2 (TYPE_3__,char*,TYPE_3__*,TYPE_3__*) ;

__attribute__((used)) static bool FUNC_3(struct mp_filter *VAR_0, const char *VAR_1)
{
    vd_ffmpeg_ctx *VAR_2 = VAR_0->priv;
    bstr VAR_3 = FUNC_0(VAR_2->opts->hwdec_codecs);
    while (VAR_3.len) {
        bstr VAR_4;
        FUNC_2(VAR_3, ",", &VAR_4, &VAR_3);
        if (FUNC_1(VAR_4, "all") || FUNC_1(VAR_4, VAR_1))
            return 1;
    }
    return 0;
}
