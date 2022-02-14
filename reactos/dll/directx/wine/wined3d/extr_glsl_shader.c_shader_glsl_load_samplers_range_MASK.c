
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_string_buffer {int buffer; } ;
struct TYPE_2__ {unsigned int combined_samplers; } ;
struct wined3d_gl_info {TYPE_1__ limits; } ;
struct shader_glsl_priv {int string_buffers; } ;
typedef int GLuint ;
typedef int GLint ;
typedef unsigned int DWORD ;


 int FUNC_0 (char*,int ,unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,unsigned int) ;
 unsigned int VAR_0 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int,unsigned int) ;
 struct wined3d_string_buffer* FUNC_6 (int *) ;
 int FUNC_7 (int *,struct wined3d_string_buffer*) ;
 int FUNC_8 (struct wined3d_string_buffer*,char*,char const*,unsigned int) ;

__attribute__((used)) static void FUNC_9(const struct wined3d_gl_info *VAR_1,
        struct shader_glsl_priv *VAR_2, GLuint VAR_3, const char *VAR_4,
        unsigned int VAR_5, unsigned int VAR_6, const DWORD *VAR_7)
{
    struct wined3d_string_buffer *VAR_8 = FUNC_6(&VAR_2->string_buffers);
    unsigned int VAR_9, VAR_10;
    GLint VAR_11;

    for (VAR_9 = 0; VAR_9 < VAR_6; ++VAR_9)
    {
        FUNC_8(VAR_8, "%s_sampler%u", VAR_4, VAR_9);
        VAR_11 = FUNC_1(FUNC_4(VAR_3, VAR_8->buffer));
        if (VAR_11 == -1)
            continue;

        VAR_10 = VAR_7 ? VAR_7[VAR_5 + VAR_9] : VAR_5 + VAR_9;
        if (VAR_10 == VAR_0 || VAR_10 >= VAR_1->limits.combined_samplers)
        {
            FUNC_0("Trying to load sampler %s on unsupported unit %u.\n", VAR_8->buffer, VAR_10);
            continue;
        }

        FUNC_2("Loading sampler %s on unit %u.\n", VAR_8->buffer, VAR_10);
        FUNC_1(FUNC_5(VAR_11, VAR_10));
    }
    FUNC_3("Load sampler bindings");
    FUNC_7(&VAR_2->string_buffers, VAR_8);
}
