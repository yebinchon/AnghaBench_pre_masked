
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ra_hwdec_mapper {TYPE_1__* src; int ra; struct priv* priv; } ;
struct priv {int egl_surface; int egl_display; int gl_texture; int query9; int surface9; int device9ex; } ;
typedef int int64_t ;
struct TYPE_9__ {int (* BindTexture ) (int ,int ) ;} ;
struct TYPE_8__ {int member_3; int member_2; int member_1; int member_0; } ;
struct TYPE_7__ {scalar_t__* planes; int h; int w; } ;
typedef TYPE_2__ RECT ;
typedef int IDirect3DSurface9 ;
typedef scalar_t__ HRESULT ;
typedef TYPE_3__ GL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int *,TYPE_2__*,int ,TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (int ,int *,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct ra_hwdec_mapper*,char*,...) ;
 int FUNC_5 (struct ra_hwdec_mapper*,char*,long long) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int const) ;
 TYPE_3__* FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static int FUNC_12(struct ra_hwdec_mapper *VAR_6)
{
    struct priv *VAR_7 = VAR_6->priv;
    GL *VAR_8 = FUNC_9(VAR_6->ra);

    HRESULT VAR_9;
    RECT VAR_10 = {0, 0, VAR_6->src->w, VAR_6->src->h};
    IDirect3DSurface9* VAR_11 = (IDirect3DSurface9 *)VAR_6->src->planes[3];
    VAR_9 = FUNC_1(VAR_7->device9ex,
                                        VAR_11, &VAR_10,
                                        VAR_7->surface9, &VAR_10,
                                        VAR_2);
    if (FUNC_0(VAR_9)) {
        FUNC_4(VAR_6, "Direct3D RGB conversion failed: %s\n",
               FUNC_7(VAR_9));
        return -1;
    }

    VAR_9 = FUNC_3(VAR_7->query9, VAR_1);
    if (FUNC_0(VAR_9)) {
        FUNC_4(VAR_6, "Failed to issue Direct3D END query\n");
        return -1;
    }




    const int VAR_12 = 8;
    const int64_t VAR_13 = 1000;
    int VAR_14 = 0;
    while (1) {
        VAR_9 = FUNC_2(VAR_7->query9, ((void*)0), 0, VAR_0);
        if (FUNC_0(VAR_9)) {
            FUNC_4(VAR_6, "Failed to query Direct3D flush state\n");
            return -1;
        } else if (VAR_9 == VAR_5) {
            if (++VAR_14 > VAR_12) {
                FUNC_5(VAR_6, "Failed to flush frame after %lld ms\n",
                           (long long)(VAR_13 * VAR_12) / 1000);
                break;
            }
            FUNC_8(VAR_13);
        } else {
            break;
        }
    }

    VAR_8->BindTexture(VAR_4, VAR_7->gl_texture);
    FUNC_6(VAR_7->egl_display, VAR_7->egl_surface, VAR_3);
    VAR_8->BindTexture(VAR_4, 0);

    return 0;
}
