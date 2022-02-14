
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int buffer; } ;
struct wined3d_gl_info {int dummy; } ;
struct arbfp_blit_type {int fixup; scalar_t__ use_color_key; } ;
typedef int GLuint ;


 int VAR_0 ;




 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct wined3d_string_buffer*,struct arbfp_blit_type const*,char*) ;
 int FUNC_5 (struct wined3d_string_buffer*,struct arbfp_blit_type const*,char*) ;
 int FUNC_6 (struct wined3d_string_buffer*,struct arbfp_blit_type const*,char*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int,int *) ;
 int FUNC_9 (struct wined3d_string_buffer*,char*,...) ;
 int FUNC_10 (struct wined3d_gl_info const*,int ,int ) ;
 int FUNC_11 (struct wined3d_string_buffer*) ;
 int FUNC_12 (struct wined3d_string_buffer*) ;

__attribute__((used)) static GLuint FUNC_13(const struct wined3d_gl_info *VAR_2, const struct arbfp_blit_type *VAR_3)
{
    GLuint VAR_4;
    struct wined3d_string_buffer VAR_5;
    char VAR_6;

    if (VAR_3->use_color_key)
        FUNC_1("Implement YUV color keying.\n");


    if (!FUNC_12(&VAR_5))
    {
        FUNC_0("Failed to initialize shader buffer.\n");
        return 0;
    }

    FUNC_2(FUNC_8(1, &VAR_4));
    FUNC_3("GL_EXTCALL(glGenProgramsARB(1, &shader))");
    FUNC_2(FUNC_7(VAR_1, VAR_4));
    FUNC_3("glBindProgramARB(GL_FRAGMENT_PROGRAM_ARB, shader)");
    if (!VAR_4)
    {
        FUNC_11(&VAR_5);
        return 0;
    }
    FUNC_9(&VAR_5, "!!ARBfp1.0\n");
    FUNC_9(&VAR_5, "TEMP luminance;\n");
    FUNC_9(&VAR_5, "TEMP temp;\n");
    FUNC_9(&VAR_5, "TEMP chroma;\n");
    FUNC_9(&VAR_5, "TEMP texcrd;\n");
    FUNC_9(&VAR_5, "TEMP texcrd2;\n");
    FUNC_9(&VAR_5, "PARAM coef = {1.0, 0.5, 2.0, 0.25};\n");
    FUNC_9(&VAR_5, "PARAM yuv_coef = {1.403, 0.344, 0.714, 1.770};\n");
    FUNC_9(&VAR_5, "PARAM size = program.local[%u];\n", VAR_0);

    switch (VAR_3->fixup)
    {
        case 130:
        case 129:
            if (!FUNC_5(&VAR_5, VAR_3, &VAR_6))
            {
                FUNC_11(&VAR_5);
                return 0;
            }
            break;

        case 128:
            if (!FUNC_6(&VAR_5, VAR_3, &VAR_6))
            {
                FUNC_11(&VAR_5);
                return 0;
            }
            break;

        case 131:
            if (!FUNC_4(&VAR_5, VAR_3, &VAR_6))
            {
                FUNC_11(&VAR_5);
                return 0;
            }
            break;

        default:
            FUNC_1("Unsupported YUV fixup %#x\n", VAR_3->fixup);
            FUNC_11(&VAR_5);
            return 0;
    }





    FUNC_9(&VAR_5, "SUB chroma.xy, chroma, coef.y;\n");

    FUNC_9(&VAR_5, "MAD result.color.x, chroma.x, yuv_coef.x, luminance.%c;\n", VAR_6);
    FUNC_9(&VAR_5, "MAD temp.x, -chroma.y, yuv_coef.y, luminance.%c;\n", VAR_6);
    FUNC_9(&VAR_5, "MAD result.color.y, -chroma.x, yuv_coef.z, temp.x;\n");
    FUNC_9(&VAR_5, "MAD result.color.z, chroma.y, yuv_coef.w, luminance.%c;\n", VAR_6);
    FUNC_9(&VAR_5, "END\n");

    FUNC_10(VAR_2, VAR_1, VAR_5.buffer);

    FUNC_11(&VAR_5);

    return VAR_4;
}
