
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_instruction {unsigned int flags; TYPE_1__* ctx; } ;
struct TYPE_2__ {struct wined3d_string_buffer* buffer; } ;


 int FUNC_0 (char*,unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct wined3d_string_buffer*,char*) ;

__attribute__((used)) static void FUNC_2(const struct wined3d_shader_instruction *VAR_2)
{
    struct wined3d_string_buffer *VAR_3 = VAR_2->ctx->buffer;
    unsigned int VAR_4 = VAR_2->flags;

    if (VAR_4 & VAR_1)
    {
        FUNC_1(VAR_3, "barrier();\n");
        VAR_4 &= ~(VAR_1 | VAR_0);
    }

    if (VAR_4 & VAR_0)
    {
        FUNC_1(VAR_3, "memoryBarrierShared();\n");
        VAR_4 &= ~VAR_0;
    }

    if (VAR_4)
        FUNC_0("Unhandled sync flags %#x.\n", VAR_4);
}
