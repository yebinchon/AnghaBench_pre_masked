
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_vec3 {float member_0; float member_1; float member_2; int x; } ;
struct TYPE_3__ {int (* p_glDrawArrays ) (int ,int ,int) ;int (* p_glEnd ) () ;int (* p_glVertex3fv ) (int *) ;int (* p_glColor4f ) (int ,int ,int ,int ) ;int (* p_glBegin ) (int ) ;int (* p_glLoadIdentity ) () ;int (* p_glMatrixMode ) (int ) ;int (* p_glDisable ) (int ) ;} ;
struct TYPE_4__ {TYPE_1__ gl; } ;
struct wined3d_gl_info {scalar_t__ glsl_version; TYPE_2__ gl_ops; int * supported; } ;
struct wined3d_color {int a; int b; int g; int r; } ;
struct wined3d_caps_gl_ctx {void* test_program_id; int test_vbo; struct wined3d_gl_info* gl_info; } ;
typedef void* GLuint ;
typedef int BOOL ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (void*,void*) ;
 int FUNC_4 (void*,int,char*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (void*,int ,char*) ;
 int FUNC_7 (int ,int,struct wined3d_vec3 const*,int ) ;
 int FUNC_8 (void*) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int,int *) ;
 int FUNC_15 (void*) ;
 int FUNC_16 (void*,int,char const**,int *) ;
 int FUNC_17 (void*) ;
 int FUNC_18 (int,int ,int ,int ,int ) ;
 int FUNC_19 (int ,int,int ,int,int ,int *) ;
 int FUNC_20 (struct wined3d_gl_info const*,void*,int) ;
 int FUNC_21 (struct wined3d_gl_info const*,void*) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ,int ,int) ;
 int FUNC_24 (int ) ;
 int FUNC_25 () ;
 int FUNC_26 (int ) ;
 int FUNC_27 () ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int ,int ,int ,int ) ;
 int FUNC_30 (int *) ;
 int FUNC_31 () ;

__attribute__((used)) static void FUNC_32(struct wined3d_caps_gl_ctx *VAR_13, const struct wined3d_vec3 *VAR_14,
        const struct wined3d_color *VAR_15)
{
    const struct wined3d_gl_info *VAR_16 = VAR_13->gl_info;
    static const struct wined3d_vec3 VAR_17[] =
    {
        {-1.0f, -1.0f, 0.0f},
        { 1.0f, -1.0f, 0.0f},
        {-1.0f, 1.0f, 0.0f},
        { 1.0f, 1.0f, 0.0f},
    };
    static const char VAR_18[] =
        "#version 150\n"
        "in vec4 pos;\n"
        "in vec4 color;\n"
        "out vec4 out_color;\n"
        "\n";
    static const char VAR_19[] =
        "#version 120\n"
        "attribute vec4 pos;\n"
        "attribute vec4 color;\n"
        "varying vec4 out_color;\n"
        "\n";
    static const char VAR_20[] =
        "void main()\n"
        "{\n"
        "    gl_Position = pos;\n"
        "    out_color = color;\n"
        "}\n";
    static const char VAR_21[] =
        "#version 150\n"
        "in vec4 out_color;\n"
        "out vec4 fragment_color;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    fragment_color = out_color;\n"
        "}\n";
    static const char VAR_22[] =
        "#version 120\n"
        "varying vec4 out_color;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragData[0] = out_color;\n"
        "}\n";
    const char *VAR_23[2];
    GLuint VAR_24, VAR_25;
    unsigned int VAR_26;

    if (!VAR_14)
        VAR_14 = VAR_17;

    if (!VAR_16->supported[VAR_1] || !VAR_16->supported[VAR_2]
            || !VAR_16->supported[VAR_0])
    {
        VAR_16->gl_ops.gl.p_glDisable(VAR_7);
        VAR_16->gl_ops.gl.p_glMatrixMode(VAR_8);
        VAR_16->gl_ops.gl.p_glLoadIdentity();
        VAR_16->gl_ops.gl.p_glMatrixMode(VAR_9);
        VAR_16->gl_ops.gl.p_glLoadIdentity();

        VAR_16->gl_ops.gl.p_glBegin(VAR_11);
        VAR_16->gl_ops.gl.p_glColor4f(VAR_15->r, VAR_15->g, VAR_15->b, VAR_15->a);
        for (VAR_26 = 0; VAR_26 < 4; ++VAR_26)
            VAR_16->gl_ops.gl.p_glVertex3fv(&VAR_14[VAR_26].x);
        VAR_16->gl_ops.gl.p_glEnd();
        FUNC_2("draw quad");
        return;
    }

    if (!VAR_13->test_vbo)
        FUNC_0(FUNC_14(1, &VAR_13->test_vbo));
    FUNC_0(FUNC_5(VAR_4, VAR_13->test_vbo));
    FUNC_0(FUNC_7(VAR_4, sizeof(struct wined3d_vec3) * 4, VAR_14, VAR_10));
    FUNC_0(FUNC_19(0, 3, VAR_5, VAR_3, 0, ((void*)0)));
    FUNC_0(FUNC_18(1, VAR_15->r, VAR_15->g, VAR_15->b, VAR_15->a));
    FUNC_0(FUNC_13(0));
    FUNC_0(FUNC_12(1));

    if (!VAR_13->test_program_id)
    {






        BOOL VAR_27 = VAR_16->glsl_version >= FUNC_1(1, 50);


        VAR_13->test_program_id = FUNC_0(FUNC_9());

        VAR_24 = FUNC_0(FUNC_10(VAR_12));
        VAR_23[0] = VAR_27 ? VAR_18 : VAR_19;
        VAR_23[1] = VAR_20;
        FUNC_0(FUNC_16(VAR_24, 2, VAR_23, ((void*)0)));
        FUNC_0(FUNC_3(VAR_13->test_program_id, VAR_24));
        FUNC_0(FUNC_11(VAR_24));

        VAR_25 = FUNC_0(FUNC_10(VAR_6));
        VAR_23[0] = VAR_27 ? VAR_21 : VAR_22;
        FUNC_0(FUNC_16(VAR_25, 1, VAR_23, ((void*)0)));
        FUNC_0(FUNC_3(VAR_13->test_program_id, VAR_25));
        FUNC_0(FUNC_11(VAR_25));

        FUNC_0(FUNC_4(VAR_13->test_program_id, 0, "pos"));
        FUNC_0(FUNC_4(VAR_13->test_program_id, 1, "color"));

        if (VAR_27)
            FUNC_0(FUNC_6(VAR_13->test_program_id, 0, "fragment_color"));

        FUNC_0(FUNC_8(VAR_24));
        FUNC_20(VAR_16, VAR_24, VAR_3);
        FUNC_0(FUNC_8(VAR_25));
        FUNC_20(VAR_16, VAR_25, VAR_3);
        FUNC_0(FUNC_15(VAR_13->test_program_id));
        FUNC_21(VAR_16, VAR_13->test_program_id);
    }
    FUNC_0(FUNC_17(VAR_13->test_program_id));

    VAR_16->gl_ops.gl.p_glDrawArrays(VAR_11, 0, 4);

    FUNC_0(FUNC_17(0));
    FUNC_0(FUNC_12(0));
    FUNC_0(FUNC_5(VAR_4, 0));
    FUNC_2("draw quad");
}
