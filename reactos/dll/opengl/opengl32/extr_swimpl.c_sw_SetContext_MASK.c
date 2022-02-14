
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int hdc; int hwnd; } ;
struct wgl_dc_data {int flags; TYPE_1__ owner; struct sw_framebuffer* sw_data; } ;
struct sw_framebuffer {int gl_buffer; TYPE_2__* gl_visual; } ;
struct sw_context {TYPE_7__* gl_ctx; int hook; } ;
typedef int bm ;
typedef int UINT ;
struct TYPE_15__ {scalar_t__ X; scalar_t__ Y; scalar_t__ Width; scalar_t__ Height; } ;
struct TYPE_19__ {TYPE_3__ Viewport; } ;
struct TYPE_18__ {int glDispatchTable; } ;
struct TYPE_17__ {int bmWidth; int bmHeight; } ;
struct TYPE_16__ {int right; int left; int bottom; int top; } ;
struct TYPE_14__ {scalar_t__ DBflag; } ;
typedef TYPE_4__ RECT ;
typedef int HWND ;
typedef int HDC ;
typedef int HBITMAP ;
typedef scalar_t__ DHGLRC ;
typedef int BOOL ;
typedef TYPE_5__ BITMAP ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_4__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int,TYPE_5__*) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int FUNC_6 (int ,int ,int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (TYPE_7__*) ;
 int FUNC_8 (TYPE_7__*,int ,int ,int,int) ;
 int FUNC_9 (TYPE_7__*,int ) ;
 int FUNC_10 (TYPE_7__*) ;
 TYPE_6__ VAR_5 ;
 int VAR_6 ;

BOOL FUNC_11(struct wgl_dc_data* VAR_7, DHGLRC VAR_8)
{
    struct sw_context* VAR_9 = (struct sw_context*)VAR_8;
    struct sw_framebuffer* VAR_10 = VAR_7->sw_data;
    UINT VAR_11, VAR_12;


    if(VAR_7->flags & VAR_3)
    {
        HWND VAR_13 = VAR_7->owner.hwnd;
        RECT VAR_14;
        if(!VAR_13)
        {
            FUNC_0("Physical DC without a window!\n");
            return VAR_0;
        }
        if(!FUNC_1(VAR_13, &VAR_14))
        {
            FUNC_0("GetClientRect failed!\n");
            return VAR_0;
        }


        VAR_9->hook = FUNC_6(VAR_4,
                            VAR_6,
                            ((void*)0),
                            FUNC_3());


        VAR_11 = VAR_14.right - VAR_14.left;
        VAR_12 = VAR_14.bottom - VAR_14.top;
    }
    else
    {
        BITMAP VAR_15;
        HBITMAP VAR_16;
        HDC VAR_17 = VAR_7->owner.hdc;

        if(VAR_10->gl_visual->DBflag)
        {
            FUNC_0("Memory DC called with a double buffered format.\n");
            return VAR_0;
        }

        VAR_16 = FUNC_2( VAR_17, VAR_1 );
        if(!VAR_16)
        {
            FUNC_0("No Bitmap!\n");
            return VAR_0;
        }
        if(FUNC_4(VAR_16, sizeof(VAR_15), &VAR_15) == 0)
        {
            FUNC_0("GetObject failed!\n");
            return VAR_0;
        }
        VAR_11 = VAR_15.bmWidth;
        VAR_12 = VAR_15.bmHeight;
    }

    if(!VAR_11) VAR_11 = 1;
    if(!VAR_12) VAR_12 = 1;


    FUNC_9(VAR_9->gl_ctx, VAR_10->gl_buffer);


    FUNC_10(VAR_9->gl_ctx);


    if(VAR_9->gl_ctx->Viewport.X == 0 &&
       VAR_9->gl_ctx->Viewport.Y == 0 &&
       VAR_9->gl_ctx->Viewport.Width == 0 &&
       VAR_9->gl_ctx->Viewport.Height == 0)
    {
        FUNC_8(VAR_9->gl_ctx, 0, 0, VAR_11, VAR_12);
    }


    FUNC_7(VAR_9->gl_ctx);


    FUNC_5(&VAR_5.glDispatchTable);


   return VAR_2;
}
