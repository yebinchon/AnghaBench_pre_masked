
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ra_hwdec {int ra; struct priv_owner* priv; } ;
struct priv_owner {int interop_unmap; int interop_map_legacy; int interop_map; int interop_uninit; int interop_init; } ;
struct TYPE_3__ {char const* extensions; int mpgl_caps; } ;
typedef TYPE_1__ GL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ra_hwdec const*,char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 char* FUNC_3 (int ,int ) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char const*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

bool FUNC_7(const struct ra_hwdec *VAR_7)
{
    struct priv_owner *VAR_8 = VAR_7->priv;
    if (!FUNC_5(VAR_7->ra)) {

        return 0;
    }

    if (!FUNC_1())
        return 0;

    const char *VAR_9 = FUNC_3(FUNC_2(), VAR_0);
    if (!VAR_9)
        return 0;

    GL *VAR_10 = FUNC_4(VAR_7->ra);
    if (!FUNC_6(VAR_9, "EXT_image_dma_buf_import") ||
        !FUNC_6(VAR_9, "EGL_KHR_image_base") ||
        !FUNC_6(VAR_10->extensions, "GL_OES_EGL_image") ||
        !(VAR_10->mpgl_caps & VAR_1))
        return 0;

    FUNC_0(VAR_7, "using VAAPI EGL interop\n");

    VAR_8->interop_init = VAR_4;
    VAR_8->interop_uninit = VAR_5;
    VAR_8->interop_map = VAR_2;
    VAR_8->interop_map_legacy = VAR_3;
    VAR_8->interop_unmap = VAR_6;

    return 1;
}
