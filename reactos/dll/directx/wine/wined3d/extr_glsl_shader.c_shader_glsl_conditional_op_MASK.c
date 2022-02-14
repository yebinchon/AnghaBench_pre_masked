
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_shader_instruction {int handler_idx; } ;


 int FUNC_0 (char*,int) ;



 int FUNC_1 (struct wined3d_shader_instruction const*,char const*) ;

__attribute__((used)) static void FUNC_2(const struct wined3d_shader_instruction *VAR_0)
{
    const char *VAR_1;

    switch (VAR_0->handler_idx)
    {
        case 130: VAR_1 = "break;"; break;
        case 129: VAR_1 = "continue;"; break;
        case 128: VAR_1 = "return;"; break;
        default:
            FUNC_0("Unhandled opcode %#x.\n", VAR_0->handler_idx);
            return;
    }

    FUNC_1(VAR_0, VAR_1);
}
