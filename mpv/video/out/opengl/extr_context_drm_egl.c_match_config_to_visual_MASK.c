
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_ctx {struct priv* priv; } ;
struct TYPE_2__ {int display; } ;
struct priv {scalar_t__ const gbm_format; TYPE_1__ egl; } ;
typedef scalar_t__ const EGLint ;
typedef int EGLConfig ;


 int VAR_0 ;
 int FUNC_0 (struct ra_ctx*,char*,int ) ;
 int FUNC_1 (struct ra_ctx*,char*,int ) ;
 int FUNC_2 (int ,int ,int ,scalar_t__ const*) ;
 int FUNC_3 (scalar_t__ const) ;
 int FUNC_4 (scalar_t__ const) ;

__attribute__((used)) static int FUNC_5(void *VAR_1, EGLConfig *VAR_2, int VAR_3)
{
    struct ra_ctx *VAR_4 = (struct ra_ctx*)VAR_1;
    struct priv *VAR_5 = VAR_4->priv;
    const EGLint VAR_6[] = {
        (EGLint)VAR_5->gbm_format,
        (EGLint)FUNC_3(VAR_5->gbm_format),
        0
    };

    for (unsigned int VAR_7 = 0; VAR_6[VAR_7] != 0; ++VAR_7) {
        FUNC_1(VAR_4, "Attempting to find EGLConfig matching %s\n",
                   FUNC_4(VAR_6[VAR_7]));
        for (unsigned int VAR_8 = 0; VAR_8 < VAR_3; ++VAR_8) {
            EGLint VAR_9;

            if (!FUNC_2(VAR_5->egl.display, VAR_2[VAR_8], VAR_0, &VAR_9))
                continue;

            if (VAR_6[VAR_7] == VAR_9) {
                FUNC_1(VAR_4, "Found matching EGLConfig for %s\n",
                           FUNC_4(VAR_6[VAR_7]));
                return VAR_8;
            }
        }
        FUNC_1(VAR_4, "No matching EGLConfig for %s\n", FUNC_4(VAR_6[VAR_7]));
    }

    FUNC_0(VAR_4, "Could not find EGLConfig matching the GBM visual (%s).\n",
           FUNC_4(VAR_5->gbm_format));
    return -1;
}
