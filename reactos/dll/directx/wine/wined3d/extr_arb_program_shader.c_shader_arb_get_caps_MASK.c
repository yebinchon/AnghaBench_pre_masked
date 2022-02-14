
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int arb_vs_native_constants; int arb_vs_float_constants; int arb_ps_native_constants; int arb_ps_float_constants; } ;
struct wined3d_gl_info {scalar_t__* supported; TYPE_1__ limits; } ;
struct shader_caps {float ps_1x_max_value; int wined3d_caps; scalar_t__ varying_count; void* ps_uniform_count; void* ps_version; scalar_t__ cs_version; scalar_t__ gs_version; scalar_t__ ds_version; scalar_t__ hs_version; void* vs_uniform_count; void* vs_version; } ;
typedef int UINT ;
struct TYPE_4__ {int max_sm_vs; int max_sm_ps; } ;
typedef int DWORD ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (struct wined3d_gl_info const*) ;
 TYPE_2__ VAR_8 ;

__attribute__((used)) static void FUNC_3(const struct wined3d_gl_info *VAR_9, struct shader_caps *VAR_10)
{
    if (VAR_9->supported[VAR_1])
    {
        DWORD VAR_11;
        UINT VAR_12;





        if (VAR_9->limits.arb_vs_native_constants < 96)
            VAR_11 = VAR_9->limits.arb_vs_float_constants;
        else
            VAR_11 = FUNC_1(VAR_9->limits.arb_vs_float_constants, VAR_9->limits.arb_vs_native_constants);

        if (VAR_9->supported[VAR_3])
        {
            VAR_12 = 3;
            FUNC_0("Hardware vertex shader version 3.0 enabled (NV_VERTEX_PROGRAM3)\n");
        }
        else if (VAR_11 >= 256)
        {

            VAR_12 = 2;
            FUNC_0("Hardware vertex shader version 2.0 enabled (ARB_PROGRAM)\n");
        }
        else
        {
            VAR_12 = 1;
            FUNC_0("Hardware vertex shader version 1.1 enabled (ARB_PROGRAM)\n");
        }
        VAR_10->vs_version = FUNC_1(VAR_8.max_sm_vs, VAR_12);
        VAR_10->vs_uniform_count = FUNC_1(VAR_5, VAR_11);
    }
    else
    {
        VAR_10->vs_version = 0;
        VAR_10->vs_uniform_count = 0;
    }

    VAR_10->hs_version = 0;
    VAR_10->ds_version = 0;
    VAR_10->gs_version = 0;
    VAR_10->cs_version = 0;

    if (VAR_9->supported[VAR_0])
    {
        DWORD VAR_13;
        UINT VAR_14;



        if (VAR_9->limits.arb_ps_native_constants < 24)
            VAR_13 = VAR_9->limits.arb_ps_float_constants;
        else
            VAR_13 = FUNC_1(VAR_9->limits.arb_ps_float_constants, VAR_9->limits.arb_ps_native_constants);

        if (VAR_9->supported[VAR_2])
        {
            VAR_14 = 3;
            FUNC_0("Hardware pixel shader version 3.0 enabled (NV_FRAGMENT_PROGRAM2)\n");
        }
        else if (VAR_13 >= 32)
        {

            VAR_14 = 2;
            FUNC_0("Hardware pixel shader version 2.0 enabled (ARB_PROGRAM)\n");
        }
        else
        {
            VAR_14 = 1;
            FUNC_0("Hardware pixel shader version 1.4 enabled (ARB_PROGRAM)\n");
        }
        VAR_10->ps_version = FUNC_1(VAR_8.max_sm_ps, VAR_14);
        VAR_10->ps_uniform_count = FUNC_1(VAR_4, VAR_13);
        VAR_10->ps_1x_max_value = 8.0f;
    }
    else
    {
        VAR_10->ps_version = 0;
        VAR_10->ps_uniform_count = 0;
        VAR_10->ps_1x_max_value = 0.0f;
    }

    VAR_10->varying_count = 0;
    VAR_10->wined3d_caps = VAR_6;
    if (FUNC_2(VAR_9))
        VAR_10->wined3d_caps |= VAR_7;
}
