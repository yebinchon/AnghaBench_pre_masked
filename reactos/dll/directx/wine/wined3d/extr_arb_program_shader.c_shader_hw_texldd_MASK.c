
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_shader_instruction {int flags; TYPE_3__* src; int * dst; } ;
typedef int WORD ;
struct TYPE_5__ {TYPE_1__* idx; } ;
struct TYPE_6__ {TYPE_2__ reg; } ;
struct TYPE_4__ {int offset; } ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct wined3d_shader_instruction const*,int *,char*) ;
 int FUNC_1 (struct wined3d_shader_instruction const*,TYPE_3__*,int,char*) ;
 int FUNC_2 (struct wined3d_shader_instruction const*,int ,char*,char*,int ,char*,char*) ;

__attribute__((used)) static void FUNC_3(const struct wined3d_shader_instruction *VAR_5)
{
    DWORD VAR_6 = VAR_5->src[1].reg.idx[0].offset;
    char VAR_7[40];
    char VAR_8[3][40];
    WORD VAR_9 = VAR_1;

    FUNC_0(VAR_5, &VAR_5->dst[0], VAR_7);
    FUNC_1(VAR_5, &VAR_5->src[0], 0, VAR_8[0]);
    FUNC_1(VAR_5, &VAR_5->src[2], 1, VAR_8[1]);
    FUNC_1(VAR_5, &VAR_5->src[3], 2, VAR_8[2]);

    if (VAR_5->flags & VAR_4) VAR_9 |= VAR_2;
    if (VAR_5->flags & VAR_3) VAR_9 |= VAR_0;

    FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8[0], VAR_9, VAR_8[1], VAR_8[2]);
}
