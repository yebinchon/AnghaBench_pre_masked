
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ID3DBlob ;
typedef int HRESULT ;
typedef int DWORD ;


 unsigned int FUNC_0 (char const**) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,char*,unsigned int,int,int) ;
 int FUNC_5 (char const*,int ,int *,int *,int *,int ,int **,int **) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char*,char*) ;

__attribute__((used)) static void FUNC_8(void) {
    const char * VAR_2[] = {

        "ps_3_0\n"
        "dcl_2d s2\n"
        "texldd_x2 r0, v1, s2, v3, v4\n",

        "vs.1.1\r\n"
        "add r0.rgb, r0, r1\n"
        "+add r0.a, r0, r2\n",

        "ps_2_0\n"
        "texld r0, t0, s0\n"
        "add r0.rgb, r0, r1\n"
        "+add r0.a, r0, v1\n",

        "vs_1_1\n"
        "(p0) add r0, r0, v0\n",

        "ps_3_0\n"
        "mov r0, v[ a0 + 12 ]\n",

        "vs_1_1\n"
        "mov r0, s0\n",

        "ps_3_0\n"
        "mov r0, v[ aL.x + 12 ]\n",

        "ps_3_0\n"
        "dcl_2d s2\n"
        "texldd r0, t1, s2, v3, v4\n",

        "ps_1_3\n"
        "mov_x2_x2 r0, r1\n",

        "vs_1_1\n"
        "mov r0, r1, r2\n",

        "ps_1_4\n"
        "texld r5, -r2_dz\n",

        "ps_2_0\n"
        "mov r2, 1 - r0\n",

        "vs_3_0\n"
        "mov r2, 2 - r0\n",

        "vs_3_0\n"
        "mov r2, c[ aL + 3.4 ]\n",

        "vs_3_0\n"
        "mov r2, 1 - r1\n",

        "vs_1_1\n"
        "mov r2, r1_x2\n",

        "vs_1_1\n"
        "mov r2, r1_abs\n",

        "ps_2_0\n"
        "mov r0, r1_x2\n",

        "vs_2_0\n"
        "mov r0, r1.abcd\n",

        "vs_2_0\n"
        "mov r0, r1.xyzwx\n",

        "vs_2_0\n"
        "mov r0, r1.\n",

        "vs_2_0\n"
        "mov r0.xxyz, r1\n",

        "ps_1_3\n"
        "mov r5, r0\n",

        "ps_3_0\n"
        "dcl_positiont o0\n",

        "vs_3_0\n"
        "add_pp r0, r0, r1\n",

        "ps_3_0\n"
        "add_x4 r0, r0, r1\n",

        "ps_1_3\n"
        "add oC0, r0, r1\n",

        "ps_3_0\n"
        "add oC4, r0, r1\n",

        "vs_3_0\n"
        "add r0, r0, v17\n",

        "vs_3_0\n"
        "add o13, r0, r1\n",

        "vs_3_0\n"
        "call l2048\n",

        "ps_3_0\n"
        "texld r0, r1, s20\n",

        "ps_1_3\n"
        "tex t5\n",

        "vs_3_0\n"
        "add r0, r0[ a0.x ], r1\n",

        "vs_2_0\n"
        "add r0, v[ a0.x ], r1\n",

        "ps_2_0\n"
        "add r0, v[ aL ], r1\n",

        "ps_2_0\n"
        "add r0, v[ r0 ], r1\n",

        "ps_3_0\n"
        "add r0, v[ a0.x ], r1\n",

        "vs_1_1\n"
        "mov r0, c0[ a0 ]\n",

        "ps_3_0\n"
        "dcl_texcoord0_sat v0\n",

        "ps_3_0\n"
        "dcl_texcoord0_x2 v0\n",

        "vs_3_0\n"
        "dcl_texcoord0_centroid v0\n",

        "vs_3_0\n"
        "dcl_2d_pp s0\n",

        "ps_2_0\n"
        "texm3x3vspec t3, t0\n",
    };
    HRESULT VAR_3;
    unsigned int VAR_4;
    ID3DBlob *VAR_5, *VAR_6;

    for(VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++)
    {
        VAR_5 = ((void*)0);
        VAR_6 = ((void*)0);
        VAR_3 = FUNC_5(VAR_2[VAR_4], FUNC_6(VAR_2[VAR_4]), ((void*)0),
                          ((void*)0), ((void*)0), VAR_0,
                          &VAR_5, &VAR_6);
        FUNC_4(VAR_3 == VAR_1, "Failure test, shader %d: "
           "expected D3DAssemble failure with D3DXERR_INVALIDDATA, "
           "got 0x%x - %d\n", VAR_4, VAR_3, VAR_3 & 0x0000FFFF);
        if(VAR_6) {
            FUNC_7("D3DAssemble messages:\n%s", (char *)FUNC_1(VAR_6));
            FUNC_2(VAR_6);
        }
        if(VAR_5) {
            DWORD *VAR_7 = FUNC_1(VAR_5);
            FUNC_3(VAR_7);
            FUNC_2(VAR_5);
        }
    }
}
