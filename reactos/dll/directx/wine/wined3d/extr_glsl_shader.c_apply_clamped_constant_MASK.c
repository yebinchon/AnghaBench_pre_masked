
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_vec4 {float x; float y; float z; float w; } ;
struct wined3d_gl_info {int dummy; } ;
typedef int GLint ;
typedef float GLfloat ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int,float*) ;

__attribute__((used)) static inline void FUNC_2(const struct wined3d_gl_info *VAR_0,
        GLint VAR_1, const struct wined3d_vec4 *VAR_2)
{
    GLfloat VAR_3[4];

    if (VAR_1 == -1) return;

    VAR_3[0] = VAR_2->x < -1.0f ? -1.0f : VAR_2->x > 1.0f ? 1.0f : VAR_2->x;
    VAR_3[1] = VAR_2->y < -1.0f ? -1.0f : VAR_2->y > 1.0f ? 1.0f : VAR_2->y;
    VAR_3[2] = VAR_2->z < -1.0f ? -1.0f : VAR_2->z > 1.0f ? 1.0f : VAR_2->z;
    VAR_3[3] = VAR_2->w < -1.0f ? -1.0f : VAR_2->w > 1.0f ? 1.0f : VAR_2->w;

    FUNC_0(FUNC_1(VAR_1, 1, VAR_3));
}
