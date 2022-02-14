
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct wined3d_caps_gl_ctx {int * restore_gl_ctx; int * restore_dc; int * wnd; int * dc; int * gl_ctx; int * gl_info; } ;
struct wined3d_adapter {int gl_info; } ;
typedef int pfd ;
struct TYPE_6__ {int nSize; int nVersion; int dwFlags; int cColorBits; int iLayerType; int iPixelType; } ;
typedef TYPE_1__ PIXELFORMATDESCRIPTOR ;
typedef int BOOL ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int * FUNC_1 (int ,char*,int ,int,int,int,int,int *,int *,int *,int *) ;
 int FUNC_2 (int *,int,int,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int VAR_0 ;
 int * FUNC_5 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int,TYPE_1__*) ;
 int FUNC_8 (char*) ;
 int VAR_6 ;
 int FUNC_9 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (TYPE_1__*,int) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 () ;
 int * FUNC_14 () ;
 int FUNC_15 (int *,int *) ;

__attribute__((used)) static BOOL FUNC_16(struct wined3d_adapter *VAR_9, struct wined3d_caps_gl_ctx *VAR_10)
{
    PIXELFORMATDESCRIPTOR VAR_11;
    int VAR_12;

    FUNC_8("getting context...\n");

    VAR_10->restore_dc = FUNC_14();
    VAR_10->restore_gl_ctx = FUNC_13();


    VAR_10->wnd = FUNC_1(VAR_7, "WineD3D fake window",
            VAR_8, 10, 10, 10, 10, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    if (!VAR_10->wnd)
    {
        FUNC_4("Failed to create a window.\n");
        goto fail;
    }

    VAR_10->dc = FUNC_5(VAR_10->wnd);
    if (!VAR_10->dc)
    {
        FUNC_4("Failed to get a DC.\n");
        goto fail;
    }


    FUNC_10(&VAR_11, sizeof(VAR_11));
    VAR_11.nSize = sizeof(VAR_11);
    VAR_11.nVersion = 1;
    VAR_11.dwFlags = VAR_4 | VAR_1 | VAR_2;
    VAR_11.iPixelType = VAR_5;
    VAR_11.cColorBits = 32;
    VAR_11.iLayerType = VAR_3;

    if (!(VAR_12 = FUNC_0(VAR_10->dc, &VAR_11)))
    {

        FUNC_4("Failed to find a suitable pixel format.\n");
        goto fail;
    }
    FUNC_2(VAR_10->dc, VAR_12, sizeof(VAR_11), &VAR_11);
    FUNC_7(VAR_10->dc, VAR_12, &VAR_11);


    if (!(VAR_10->gl_ctx = FUNC_11(VAR_10->dc)))
    {
        FUNC_9("Failed to create default context for capabilities initialization.\n");
        goto fail;
    }


    if (!FUNC_15(VAR_10->dc, VAR_10->gl_ctx))
    {
        FUNC_4("Failed to make caps GL context current.\n");
        goto fail;
    }

    VAR_10->gl_info = &VAR_9->gl_info;
    return VAR_6;

fail:
    if (VAR_10->gl_ctx) FUNC_12(VAR_10->gl_ctx);
    VAR_10->gl_ctx = ((void*)0);
    if (VAR_10->dc) FUNC_6(VAR_10->wnd, VAR_10->dc);
    VAR_10->dc = ((void*)0);
    if (VAR_10->wnd) FUNC_3(VAR_10->wnd);
    VAR_10->wnd = ((void*)0);
    if (VAR_10->restore_gl_ctx && !FUNC_15(VAR_10->restore_dc, VAR_10->restore_gl_ctx))
        FUNC_4("Failed to restore previous GL context.\n");

    return VAR_0;
}
