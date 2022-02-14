
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_shader_instruction {int * src; TYPE_3__* dst; } ;
struct TYPE_5__ {TYPE_1__* idx; } ;
struct TYPE_6__ {TYPE_2__ reg; } ;
struct TYPE_4__ {int offset; } ;
typedef int DWORD ;


 int FUNC_0 (struct wined3d_shader_instruction const*,TYPE_3__*,char*) ;
 int FUNC_1 (struct wined3d_shader_instruction const*,int *,int ,char*) ;
 int FUNC_2 (struct wined3d_shader_instruction const*,int ,char*,char*,int ,int *,int *) ;

__attribute__((used)) static void FUNC_3(const struct wined3d_shader_instruction *VAR_0)
{
    DWORD VAR_1 = VAR_0->dst[0].reg.idx[0].offset;
    char VAR_2[50];
    char VAR_3[50];


    FUNC_0(VAR_0, &VAR_0->dst[0], VAR_2);
    FUNC_1(VAR_0, &VAR_0->src[0], 0, VAR_3);
    FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, 0, ((void*)0), ((void*)0));
}
