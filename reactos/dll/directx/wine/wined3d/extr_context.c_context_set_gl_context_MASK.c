
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_swapchain {int dummy; } ;
struct wined3d_context {int valid; scalar_t__ needs_set; int hdc; int glCtx; int pixel_format; void* hdc_has_format; void* hdc_is_private; scalar_t__ destroyed; struct wined3d_swapchain* swapchain; } ;
typedef void* BOOL ;


 int FUNC_0 (char*,int ,int ) ;
 void* VAR_0 ;
 int FUNC_1 (char*,struct wined3d_context*) ;
 int FUNC_2 () ;
 void* VAR_1 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct wined3d_context*) ;
 int FUNC_6 (struct wined3d_swapchain*) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static BOOL FUNC_8(struct wined3d_context *VAR_2)
{
    struct wined3d_swapchain *VAR_3 = VAR_2->swapchain;
    BOOL VAR_4 = VAR_0;

    if (!FUNC_5(VAR_2))
    {
        FUNC_3("Failed to set pixel format %d on device context %p.\n",
                VAR_2->pixel_format, VAR_2->hdc);
        VAR_4 = VAR_1;
    }

    if (VAR_4 || !FUNC_7(VAR_2->hdc, VAR_2->glCtx))
    {
        FUNC_3("Failed to make GL context %p current on device context %p, last error %#x.\n",
                VAR_2->glCtx, VAR_2->hdc, FUNC_2());
        VAR_2->valid = 0;
        FUNC_3("Trying fallback to the backup window.\n");





        if (VAR_2->destroyed || !VAR_3)
        {
            FUNC_1("Unable to get backup dc for destroyed context %p.\n", VAR_2);
            FUNC_4(((void*)0));
            return VAR_0;
        }

        if (!(VAR_2->hdc = FUNC_6(VAR_3)))
        {
            FUNC_4(((void*)0));
            return VAR_0;
        }

        VAR_2->hdc_is_private = VAR_1;
        VAR_2->hdc_has_format = VAR_0;

        if (!FUNC_5(VAR_2))
        {
            FUNC_0("Failed to set pixel format %d on device context %p.\n",
                    VAR_2->pixel_format, VAR_2->hdc);
            FUNC_4(((void*)0));
            return VAR_0;
        }

        if (!FUNC_7(VAR_2->hdc, VAR_2->glCtx))
        {
            FUNC_0("Fallback to backup window (dc %p) failed too, last error %#x.\n",
                    VAR_2->hdc, FUNC_2());
            FUNC_4(((void*)0));
            return VAR_0;
        }

        VAR_2->valid = 1;
    }
    VAR_2->needs_set = 0;
    return VAR_1;
}
