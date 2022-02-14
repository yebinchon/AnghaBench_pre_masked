
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int buffer; } ;
struct wined3d_gl_info {int dummy; } ;
struct arbfp_blit_type {scalar_t__ use_color_key; int res_type; } ;
typedef int GLuint ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (struct wined3d_string_buffer*,char*,...) ;
 int FUNC_6 (struct wined3d_gl_info const*,int ,int ) ;
 int FUNC_7 (struct wined3d_string_buffer*) ;
 int FUNC_8 (struct wined3d_string_buffer*) ;

__attribute__((used)) static GLuint FUNC_9(const struct wined3d_gl_info *VAR_3, const struct arbfp_blit_type *VAR_4)
{
    GLuint VAR_5;
    struct wined3d_string_buffer VAR_6;
    const char *VAR_7 = FUNC_2(VAR_4->res_type);


    if (!FUNC_8(&VAR_6))
    {
        FUNC_0("Failed to initialize shader buffer.\n");
        return 0;
    }

    FUNC_1(FUNC_4(1, &VAR_5));
    if (!VAR_5)
    {
        FUNC_7(&VAR_6);
        return 0;
    }
    FUNC_1(FUNC_3(VAR_2, VAR_5));

    FUNC_5(&VAR_6, "!!ARBfp1.0\n");

    if (VAR_4->use_color_key)
    {
        FUNC_5(&VAR_6, "TEMP color;\n");
        FUNC_5(&VAR_6, "TEMP less, greater;\n");
        FUNC_5(&VAR_6, "PARAM color_key_low = program.local[%u];\n", VAR_1);
        FUNC_5(&VAR_6, "PARAM color_key_high = program.local[%u];\n", VAR_0);
        FUNC_5(&VAR_6, "TEX color, fragment.texcoord[0], texture[0], %s;\n", VAR_7);
        FUNC_5(&VAR_6, "SLT less, color, color_key_low;\n");
        FUNC_5(&VAR_6, "SGE greater, color, color_key_high;\n");
        FUNC_5(&VAR_6, "ADD less, less, greater;\n");
        FUNC_5(&VAR_6, "DP4 less.b, less, less;\n");
        FUNC_5(&VAR_6, "SGE less, -less.b, 0.0;\n");
        FUNC_5(&VAR_6, "KIL -less;\n");
        FUNC_5(&VAR_6, "MOV result.color, color;\n");
    }
    else
    {
        FUNC_5(&VAR_6, "TEX result.color, fragment.texcoord[0], texture[0], %s;\n", VAR_7);
    }

    FUNC_5(&VAR_6, "END\n");

    FUNC_6(VAR_3, VAR_2, VAR_6.buffer);

    FUNC_7(&VAR_6);

    return VAR_5;
}
