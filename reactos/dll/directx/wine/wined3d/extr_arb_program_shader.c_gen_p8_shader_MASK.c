
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int buffer; } ;
struct wined3d_gl_info {int dummy; } ;
struct arbfp_blit_type {scalar_t__ use_color_key; int res_type; } ;
typedef int GLuint ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (struct wined3d_string_buffer*,char*,...) ;
 int FUNC_7 (struct wined3d_gl_info const*,int ,int ) ;
 int FUNC_8 (struct wined3d_string_buffer*) ;
 int FUNC_9 (struct wined3d_string_buffer*) ;

__attribute__((used)) static GLuint FUNC_10(const struct wined3d_gl_info *VAR_1, const struct arbfp_blit_type *VAR_2)
{
    GLuint VAR_3;
    struct wined3d_string_buffer VAR_4;
    const char *VAR_5 = FUNC_3(VAR_2->res_type);



    if (VAR_2->use_color_key)
        FUNC_1("Implement P8 color keying.\n");


    if (!FUNC_9(&VAR_4))
    {
        FUNC_0("Failed to initialize shader buffer.\n");
        return 0;
    }

    FUNC_2(FUNC_5(1, &VAR_3));
    FUNC_2(FUNC_4(VAR_0, VAR_3));
    if (!VAR_3)
    {
        FUNC_8(&VAR_4);
        return 0;
    }

    FUNC_6(&VAR_4, "!!ARBfp1.0\n");
    FUNC_6(&VAR_4, "TEMP index;\n");


    FUNC_6(&VAR_4, "PARAM constants = { 0.996, 0.00195, 0, 0 };\n");


    FUNC_6(&VAR_4, "TEX index, fragment.texcoord[0], texture[0], %s;\n", VAR_5);


    FUNC_6(&VAR_4, "MAD index.a, index.a, constants.x, constants.y;\n");


    FUNC_6(&VAR_4, "TEX result.color, index.a, texture[1], 1D;\n");
    FUNC_6(&VAR_4, "END\n");

    FUNC_7(VAR_1, VAR_0, VAR_4.buffer);

    FUNC_8(&VAR_4);

    return VAR_3;
}
