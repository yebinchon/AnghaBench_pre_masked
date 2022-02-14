
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_shader_instruction {scalar_t__ handler_idx; scalar_t__ flags; } ;


 int FUNC_0 (char*,scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct wined3d_shader_instruction *VAR_2)
{
    if (VAR_2->handler_idx == VAR_0 || VAR_2->handler_idx == VAR_1)
    {
        if (VAR_2->flags)
        {
            FUNC_0("Ignoring unexpected instruction flags %#x for %s.\n",
                    VAR_2->flags, FUNC_1(VAR_2->handler_idx));
            VAR_2->flags = 0;
        }
    }
}
