
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_saved_states {int vertexDecl; int vertexShader; unsigned int* renderState; int* textureState; unsigned int* samplerState; int vertexShaderConstantsB; int vertexShaderConstantsI; int vs_consts_f; } ;
typedef unsigned int WORD ;
typedef int DWORD ;
typedef int BOOL ;


 unsigned int FUNC_0 (unsigned int*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int) ;
 unsigned int* VAR_3 ;
 unsigned int* VAR_4 ;
 unsigned int* VAR_5 ;

__attribute__((used)) static void FUNC_2(struct wined3d_saved_states *VAR_6, const DWORD VAR_7)
{
    DWORD VAR_8 = 0;
    WORD VAR_9 = 0;
    unsigned int VAR_10;

    VAR_6->vertexDecl = 1;
    VAR_6->vertexShader = 1;

    for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_3); ++VAR_10)
    {
        DWORD VAR_11 = VAR_3[VAR_10];
        VAR_6->renderState[VAR_11 >> 5] |= 1u << (VAR_11 & 0x1f);
    }

    for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_5); ++VAR_10)
        VAR_8 |= 1u << VAR_5[VAR_10];
    for (VAR_10 = 0; VAR_10 < VAR_1; ++VAR_10) VAR_6->textureState[VAR_10] = VAR_8;
    for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_4); ++VAR_10)
        VAR_9 |= 1u << VAR_4[VAR_10];
    for (VAR_10 = 0; VAR_10 < VAR_0; ++VAR_10) VAR_6->samplerState[VAR_10] = VAR_9;
    VAR_6->vertexShaderConstantsB = 0xffff;
    VAR_6->vertexShaderConstantsI = 0xffff;

    FUNC_1(VAR_6->vs_consts_f, VAR_2, sizeof(BOOL) * VAR_7);
}
