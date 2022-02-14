
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_context {scalar_t__ render_offscreen; TYPE_1__* gl_info; } ;
struct TYPE_2__ {scalar_t__* supported; } ;
typedef scalar_t__ BOOL ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct wined3d_context*,int ) ;

__attribute__((used)) static void FUNC_3(struct wined3d_context *VAR_9, BOOL VAR_10)
{
    if (VAR_9->render_offscreen == VAR_10)
        return;

    FUNC_2(VAR_9, VAR_5);
    FUNC_2(VAR_9, VAR_4);
    if (!VAR_9->gl_info->supported[VAR_0])
    {
        FUNC_2(VAR_9, VAR_2);
        FUNC_2(VAR_9, VAR_3);
        FUNC_2(VAR_9, FUNC_1(VAR_8));
    }
    FUNC_2(VAR_9, FUNC_0(VAR_6));
    if (VAR_9->gl_info->supported[VAR_1])
        FUNC_2(VAR_9, FUNC_0(VAR_7));
    VAR_9->render_offscreen = VAR_10;
}
