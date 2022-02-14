
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;
struct arbfp_blit_type {scalar_t__ fixup; scalar_t__ res_type; } ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct wined3d_string_buffer*,char*,...) ;

__attribute__((used)) static BOOL FUNC_2(struct wined3d_string_buffer *VAR_3, const struct arbfp_blit_type *VAR_4,
        char *VAR_5)
{
    char VAR_6;
    const char *VAR_7, *VAR_8 = "TXP";

    if (VAR_4->fixup == VAR_0)
    {
        VAR_6 = 'x';
        *VAR_5 = 'w';
    }
    else
    {
        VAR_6 = 'w';
        *VAR_5 = 'x';
    }

    VAR_7 = FUNC_0(VAR_4->res_type);
    if (VAR_4->res_type == VAR_2)
        VAR_8 = "TEX";
    if (VAR_4->res_type != VAR_2)
    {
        FUNC_1(VAR_3, "MUL texcrd.xy, fragment.texcoord[0], size.x;\n");
        FUNC_1(VAR_3, "MOV texcrd.w, size.x;\n");
    }
    else
    {
        FUNC_1(VAR_3, "MOV texcrd, fragment.texcoord[0];\n");
    }




    FUNC_1(VAR_3, "FLR texcrd.x, texcrd.x;\n");
    FUNC_1(VAR_3, "ADD texcrd.x, texcrd.x, coef.y;\n");




    FUNC_1(VAR_3, "MUL texcrd2, texcrd, coef.y;\n");
    FUNC_1(VAR_3, "FRC texcrd2, texcrd2;\n");


    FUNC_1(VAR_3, "%s luminance, texcrd, texture[0], %s;\n", VAR_8, VAR_7);


    FUNC_1(VAR_3, "SGE temp.x, texcrd2.x, coef.y;\n");
    FUNC_1(VAR_3, "MUL chroma.x, luminance.%c, temp.x;\n", VAR_6);
    FUNC_1(VAR_3, "SLT temp.x, texcrd2.x, coef.y;\n");
    FUNC_1(VAR_3, "MUL chroma.y, luminance.%c, temp.x;\n", VAR_6);





    FUNC_1(VAR_3, "MAD temp.x, temp.x, coef.z, -coef.x;\n");
    FUNC_1(VAR_3, "ADD texcrd.x, texcrd, temp.x;\n");
    FUNC_1(VAR_3, "%s luminance, texcrd, texture[0], %s;\n", VAR_8, VAR_7);


    FUNC_1(VAR_3, "SGE temp.x, texcrd2.x, coef.y;\n");
    FUNC_1(VAR_3, "MAD chroma.y, luminance.%c, temp.x, chroma.y;\n", VAR_6);
    FUNC_1(VAR_3, "SLT temp.x, texcrd2.x, coef.y;\n");
    FUNC_1(VAR_3, "MAD chroma.x, luminance.%c, temp.x, chroma.x;\n", VAR_6);






    FUNC_1(VAR_3, "TEX luminance, fragment.texcoord[0], texture[0], %s;\n", VAR_7);

    return VAR_1;
}
