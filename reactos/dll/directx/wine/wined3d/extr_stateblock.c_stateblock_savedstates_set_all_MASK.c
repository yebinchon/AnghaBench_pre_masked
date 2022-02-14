
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_saved_states {int indices; int material; int viewport; int vertexDecl; int pixelShader; int vertexShader; int scissorRect; int streamSource; int streamFreq; int textures; int* textureState; int* samplerState; unsigned int clipplane; int pixelShaderConstantsB; int pixelShaderConstantsI; int vertexShaderConstantsB; int vertexShaderConstantsI; int vs_consts_f; int ps_consts_f; int renderState; int transform; } ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct wined3d_saved_states *VAR_6, DWORD VAR_7, DWORD VAR_8)
{
    unsigned int VAR_9;


    VAR_6->indices = 1;
    VAR_6->material = 1;
    VAR_6->viewport = 1;
    VAR_6->vertexDecl = 1;
    VAR_6->pixelShader = 1;
    VAR_6->vertexShader = 1;
    VAR_6->scissorRect = 1;


    VAR_6->streamSource = 0xffff;
    VAR_6->streamFreq = 0xffff;
    VAR_6->textures = 0xfffff;
    FUNC_1(VAR_6->transform, VAR_0 + 1);
    FUNC_1(VAR_6->renderState, VAR_5 + 1);
    for (VAR_9 = 0; VAR_9 < VAR_3; ++VAR_9) VAR_6->textureState[VAR_9] = 0x3ffff;
    for (VAR_9 = 0; VAR_9 < VAR_2; ++VAR_9) VAR_6->samplerState[VAR_9] = 0x3ffe;
    VAR_6->clipplane = (1u << VAR_1) - 1;
    VAR_6->pixelShaderConstantsB = 0xffff;
    VAR_6->pixelShaderConstantsI = 0xffff;
    VAR_6->vertexShaderConstantsB = 0xffff;
    VAR_6->vertexShaderConstantsI = 0xffff;


    FUNC_0(VAR_6->ps_consts_f, VAR_4, sizeof(BOOL) * VAR_8);
    FUNC_0(VAR_6->vs_consts_f, VAR_4, sizeof(BOOL) * VAR_7);
}
