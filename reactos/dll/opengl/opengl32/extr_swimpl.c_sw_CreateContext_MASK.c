
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wgl_dc_data {struct sw_framebuffer* sw_data; } ;
struct sw_framebuffer {TYPE_1__* gl_visual; } ;
struct sw_context {int Mode; struct sw_framebuffer* fb; int gl_ctx; } ;
struct TYPE_2__ {scalar_t__ DBflag; } ;
typedef int * DHGLRC ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 struct sw_context* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,struct sw_context*) ;
 int FUNC_4 (TYPE_1__*,int *,struct sw_context*) ;

DHGLRC FUNC_5(struct wgl_dc_data* VAR_3)
{
    struct sw_context* VAR_4;
    struct sw_framebuffer* VAR_5 = VAR_3->sw_data;

    VAR_4 = FUNC_2(FUNC_1(), VAR_2, sizeof(*VAR_4));
    if(!VAR_4)
        return ((void*)0);


    VAR_4->gl_ctx = FUNC_4(VAR_5->gl_visual, ((void*)0), VAR_4);
    if(!VAR_4->gl_ctx)
    {
        FUNC_0("Failed to initialize the mesa context.\n");
        FUNC_3(FUNC_1(), 0, VAR_4);
        return ((void*)0);
    }

    VAR_4->fb = VAR_5;


    VAR_4->Mode = VAR_5->gl_visual->DBflag ? VAR_0 : VAR_1;

    return (DHGLRC)VAR_4;
}
