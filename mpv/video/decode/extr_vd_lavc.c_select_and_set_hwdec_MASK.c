
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hwdec_info {char* method_name; char* name; TYPE_3__* codec; int copying; scalar_t__ lavc_device; } ;
struct TYPE_8__ {int hwdec_requested; int use_hwdec; char const* decoder; struct hwdec_info hwdec; scalar_t__ hwdec_devs; int hwdec_dev; TYPE_2__* opts; int opts_cache; TYPE_1__* codec; } ;
typedef TYPE_4__ vd_ffmpeg_ctx ;
struct mp_filter {TYPE_4__* priv; } ;
struct hwcontext_fns {scalar_t__ (* is_emulated ) (int ) ;} ;
typedef int bstr ;
struct TYPE_7__ {char const* name; int id; } ;
struct TYPE_6__ {int hwdec_api; } ;
struct TYPE_5__ {char* codec; } ;


 int FUNC_0 (struct mp_filter*,char*,...) ;
 int FUNC_1 (struct mp_filter*,char*) ;
 int FUNC_2 (struct hwdec_info**,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct mp_filter*,char const*) ;
 int FUNC_7 (struct mp_filter*,struct hwdec_info*,int) ;
 int FUNC_8 (scalar_t__) ;
 struct hwcontext_fns* FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ) ;
 char* FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (char const*,char const*) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (struct hwdec_info*) ;

__attribute__((used)) static void FUNC_15(struct mp_filter *VAR_0)
{
    vd_ffmpeg_ctx *VAR_1 = VAR_0->priv;
    const char *VAR_2 = VAR_1->codec->codec;

    FUNC_10(VAR_1->opts_cache);

    bstr VAR_3 = FUNC_4(VAR_1->opts->hwdec_api);

    bool VAR_4 = !FUNC_5(VAR_3, "no");
    bool VAR_5 = FUNC_5(VAR_3, "auto") ||
                          FUNC_5(VAR_3, "yes") ||
                          FUNC_5(VAR_3, "");
    bool VAR_6 = FUNC_5(VAR_3, "auto-copy");
    bool VAR_7 = VAR_5 || VAR_6;

    if (!VAR_4) {
        FUNC_0(VAR_0, "No hardware decoding requested.\n");
    } else if (!FUNC_6(VAR_0, VAR_2)) {
        FUNC_0(VAR_0, "Not trying to use hardware decoding: codec %s is not "
                   "on whitelist.\n", VAR_2);
    } else {
        struct hwdec_info *VAR_8 = ((void*)0);
        int VAR_9 = 0;
        FUNC_2(&VAR_8, &VAR_9);

        VAR_1->hwdec_requested = 1;

        for (int VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
            struct hwdec_info *VAR_11 = &VAR_8[VAR_10];

            const char *VAR_12 = FUNC_11(VAR_11->codec->id);
            if (!VAR_12 || FUNC_12(VAR_12, VAR_2) != 0)
                continue;

            if (!VAR_7 && !(FUNC_5(VAR_3, VAR_11->method_name) ||
                                 FUNC_5(VAR_3, VAR_11->name)))
                continue;

            FUNC_0(VAR_0, "Looking at hwdec %s...\n", VAR_11->name);

            if (VAR_6 && !VAR_11->copying) {
                FUNC_0(VAR_0, "Not using this for auto-copy.\n");
                continue;
            }

            if (VAR_11->lavc_device) {
                VAR_1->hwdec_dev = FUNC_7(VAR_0, VAR_11, VAR_7);
                if (!VAR_1->hwdec_dev) {
                    FUNC_0(VAR_0, "Could not create device.\n");
                    continue;
                }

                const struct hwcontext_fns *VAR_13 =
                            FUNC_9(VAR_11->lavc_device);
                if (VAR_13 && VAR_13->is_emulated && VAR_13->is_emulated(VAR_1->hwdec_dev)) {
                    if (VAR_7) {
                        FUNC_0(VAR_0, "Not using emulated API.\n");
                        FUNC_3(&VAR_1->hwdec_dev);
                        continue;
                    }
                    FUNC_1(VAR_0, "Using emulated hardware decoding API.\n");
                }
            } else if (!VAR_11->copying) {


                if (VAR_1->hwdec_devs)
                    FUNC_8(VAR_1->hwdec_devs);
            }

            VAR_1->use_hwdec = 1;
            VAR_1->hwdec = *VAR_11;
            break;
        }

        FUNC_14(VAR_8);

        if (!VAR_1->use_hwdec)
            FUNC_0(VAR_0, "No hardware decoding available for this codec.\n");
    }

    if (VAR_1->use_hwdec) {
        FUNC_0(VAR_0, "Trying hardware decoding via %s.\n", VAR_1->hwdec.name);
        if (FUNC_12(VAR_1->decoder, VAR_1->hwdec.codec->name) != 0)
            FUNC_0(VAR_0, "Using underlying hw-decoder '%s'\n",
                       VAR_1->hwdec.codec->name);
    } else {
        FUNC_0(VAR_0, "Using software decoding.\n");
    }
}
