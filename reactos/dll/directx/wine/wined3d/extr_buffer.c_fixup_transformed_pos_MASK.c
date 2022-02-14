
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_vec4 {float w; float x; float y; float z; } ;



__attribute__((used)) static inline unsigned int FUNC_0(struct wined3d_vec4 *VAR_0)
{

    if (VAR_0->w != 1.0f && VAR_0->w != 0.0f)
    {
        float VAR_1 = 1.0f / VAR_0->w;
        VAR_0->x *= VAR_1;
        VAR_0->y *= VAR_1;
        VAR_0->z *= VAR_1;
        VAR_0->w = VAR_1;
    }

    return sizeof(*VAR_0);
}
