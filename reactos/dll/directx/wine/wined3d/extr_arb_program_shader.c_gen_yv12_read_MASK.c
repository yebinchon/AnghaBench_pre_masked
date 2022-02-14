
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;
struct arbfp_blit_type {scalar_t__ res_type; } ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct wined3d_string_buffer*,char*,...) ;
 int FUNC_2 (struct wined3d_string_buffer*,float const*) ;

__attribute__((used)) static BOOL FUNC_3(struct wined3d_string_buffer *VAR_2, const struct arbfp_blit_type *VAR_3,
        char *VAR_4)
{
    const char *VAR_5;
    static const float VAR_6[]
            = {2.0f / 3.0f, 1.0f / 6.0f, (2.0f / 3.0f) + (1.0f / 6.0f), 1.0f / 3.0f};

    VAR_5 = FUNC_0(VAR_3->res_type);
    FUNC_1(VAR_2, "PARAM yv12_coef = ");
    FUNC_2(VAR_2, VAR_6);
    FUNC_1(VAR_2, ";\n");

    FUNC_1(VAR_2, "MOV texcrd, fragment.texcoord[0];\n");

    FUNC_1(VAR_2, "MUL texcrd.x, texcrd.x, coef.y;\n");







    if (VAR_3->res_type == VAR_1)
    {

        FUNC_1(VAR_2, "RCP chroma.w, size.y;\n");

        FUNC_1(VAR_2, "MUL texcrd2.y, texcrd.y, size.y;\n");

        FUNC_1(VAR_2, "FLR texcrd2.y, texcrd2.y;\n");
        FUNC_1(VAR_2, "MAD texcrd.y, texcrd.y, yv12_coef.y, yv12_coef.x;\n");


        FUNC_1(VAR_2, "ADD texcrd2.x, texcrd2.y, yv12_coef.y;\n");
        FUNC_1(VAR_2, "FRC texcrd2.x, texcrd2.x;\n");
        FUNC_1(VAR_2, "SGE texcrd2.x, texcrd2.x, coef.y;\n");
        FUNC_1(VAR_2, "MAD texcrd.x, texcrd2.x, coef.y, texcrd.x;\n");


        FUNC_1(VAR_2, "MAD temp.y, coef.y, chroma.w, yv12_coef.x;\n");
        FUNC_1(VAR_2, "MAX texcrd.y, temp.y, texcrd.y;\n");
        FUNC_1(VAR_2, "MAD temp.y, -coef.y, chroma.w, yv12_coef.z;\n");
        FUNC_1(VAR_2, "MIN texcrd.y, temp.y, texcrd.y;\n");
    }
    else
    {

        FUNC_1(VAR_2, "FLR texcrd.y, texcrd.y;\n");
        FUNC_1(VAR_2, "MAD texcrd.y, texcrd.y, coef.w, size.y;\n");


        FUNC_1(VAR_2, "ADD texcrd2.x, texcrd.y, yv12_coef.y;\n");
        FUNC_1(VAR_2, "FRC texcrd2.x, texcrd2.x;\n");
        FUNC_1(VAR_2, "SGE texcrd2.x, texcrd2.x, coef.y;\n");
        FUNC_1(VAR_2, "MUL texcrd2.x, texcrd2.x, size.x;\n");
        FUNC_1(VAR_2, "MAD texcrd.x, texcrd2.x, coef.y, texcrd.x;\n");


        FUNC_1(VAR_2, "FLR texcrd.y, texcrd.y;\n");
        FUNC_1(VAR_2, "ADD texcrd.y, texcrd.y, coef.y;\n");


        FUNC_1(VAR_2, "MAD temp.y, size.y, coef.w, size.y;\n");
        FUNC_1(VAR_2, "ADD temp.y, temp.y, -coef.y;\n");
        FUNC_1(VAR_2, "MIN texcrd.y, temp.y, texcrd.y;\n");
        FUNC_1(VAR_2, "ADD temp.y, size.y, coef.y;\n");
        FUNC_1(VAR_2, "MAX texcrd.y, temp.y, texcrd.y;\n");
    }

    FUNC_1(VAR_2, "TEX temp, texcrd, texture[0], %s;\n", VAR_5);
    FUNC_1(VAR_2, "MOV chroma.x, temp.w;\n");




    if (VAR_3->res_type == VAR_1)
        FUNC_1(VAR_2, "ADD texcrd.y, texcrd.y, yv12_coef.y;\n");
    else
        FUNC_1(VAR_2, "MAD texcrd.y, size.y, coef.w, texcrd.y;\n");
    FUNC_1(VAR_2, "TEX temp, texcrd, texture[0], %s;\n", VAR_5);
    FUNC_1(VAR_2, "MOV chroma.y, temp.w;\n");





    FUNC_1(VAR_2, "MOV texcrd, fragment.texcoord[0];\n");
    if (VAR_3->res_type == VAR_1)
    {

        FUNC_1(VAR_2, "MUL texcrd.y, texcrd.y, yv12_coef.x;\n");
        FUNC_1(VAR_2, "MAD temp.y, -coef.y, chroma.w, yv12_coef.x;\n");
        FUNC_1(VAR_2, "MIN texcrd.y, temp.y, texcrd.y;\n");
        FUNC_1(VAR_2, "TEX luminance, texcrd, texture[0], %s;\n", VAR_5);
    }
    else
    {




        FUNC_1(VAR_2, "ADD temp.x, size.y, -coef.y;\n");
        FUNC_1(VAR_2, "MIN texcrd.y, texcrd.y, size.x;\n");
        FUNC_1(VAR_2, "TEX luminance, texcrd, texture[0], %s;\n", VAR_5);
    }
    *VAR_4 = 'a';

    return VAR_0;
}
