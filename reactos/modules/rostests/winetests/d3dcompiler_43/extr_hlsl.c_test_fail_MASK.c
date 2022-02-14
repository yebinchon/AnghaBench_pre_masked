
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IDirect3DVertexShader9 ;
typedef int IDirect3DVertexBuffer9 ;
typedef int IDirect3DDevice9 ;
typedef int ID3D10Blob ;
typedef int HRESULT ;


 unsigned int FUNC_0 (char const**) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,char*,unsigned int,...) ;
 int FUNC_3 (char const*,int ,int *,int *,int *,char*,char*,int ,int ,int **,int **) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void FUNC_5(IDirect3DDevice9 *VAR_1, IDirect3DVertexBuffer9 *VAR_2,
        IDirect3DVertexShader9 *VAR_3)
{
    static const char *VAR_4[] =
    {
        "float4 test(float2 pos: TEXCOORD0) : COLOR\n"
        "{\n"
        "   return y;\n"
        "}",

        "float4 test(float2 pos: TEXCOORD0) : COLOR\n"
        "{\n"
        "  float4 x = float4(0, 0, 0, 0);\n"
        "  x.xzzx = float4(1, 2, 3, 4);\n"
        "  return x;\n"
        "}",

        "float4 test(float2 pos: TEXCOORD0) : COLOR\n"
        "{\n"
        "  float4 x = pos;\n"
        "  return x;\n"
        "}",

        "float4 test(float2 pos, TEXCOORD0) ; COLOR\n"
        "{\n"
        "  pos = float4 x;\n"
        "  mul(float4(5, 4, 3, 2), mvp) = x;\n"
        "  return float4;\n"
        "}",

        "float4 563r(float2 45s: TEXCOORD0) : COLOR\n"
        "{\n"
        "  float2 x = 45s;\n"
        "  return float4(x.x, x.y, 0, 0);\n"
        "}",

        "float4 test(float2 pos: TEXCOORD0) : COLOR\n"
        "{\n"
        "   struct { int b,c; } x = {0};\n"
        "   return y;\n"
        "}",

        "float4 test(float2 pos: TEXCOORD0) : COLOR\n"
        "{\n"
        "   struct {} x = {};\n"
        "   return y;\n"
        "}",
    };

    ID3D10Blob *VAR_5, *VAR_6;
    unsigned int VAR_7;
    HRESULT VAR_8;

    for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4); ++VAR_7)
    {
        VAR_5 = VAR_6 = ((void*)0);
        VAR_8 = FUNC_3(VAR_4[VAR_7], FUNC_4(VAR_4[VAR_7]), ((void*)0), ((void*)0), ((void*)0), "test", "ps_2_0", 0, 0, &VAR_5, &VAR_6);
        FUNC_2(VAR_8 == VAR_0, "Test %u, got unexpected hr %#x.\n", VAR_7, VAR_8);
        FUNC_2(!!VAR_6, "Test %u, expected non-NULL error blob.\n", VAR_7);
        FUNC_2(!VAR_5, "Test %u, expected no compiled shader blob.\n", VAR_7);
        FUNC_1(VAR_6);
    }
}
