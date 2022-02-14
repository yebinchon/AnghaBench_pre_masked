
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* p_glGetInternalformativ ) (int ,scalar_t__,int ,int,scalar_t__*) ;} ;
struct TYPE_4__ {TYPE_1__ ext; } ;
struct wined3d_gl_info {TYPE_2__ gl_ops; } ;
struct wined3d_format {int * flags; int id; } ;
typedef enum wined3d_gl_resource_type { ____Placeholder_wined3d_gl_resource_type } wined3d_gl_resource_type ;
typedef scalar_t__ GLint ;
typedef int GLenum ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,int ,char const*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,int ,int,scalar_t__*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct wined3d_gl_info *VAR_1, struct wined3d_format *VAR_2,
        GLint VAR_3, GLenum VAR_4, DWORD VAR_5, const char *VAR_6)
{
    GLint VAR_7;
    enum wined3d_gl_resource_type VAR_8;

    for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_2->flags); ++VAR_8)
    {
        VAR_1->gl_ops.ext.p_glGetInternalformativ(FUNC_4(VAR_8), VAR_3, VAR_4, 1, &VAR_7);
        if (VAR_7 == VAR_0)
        {
            FUNC_1("Format %s supports %s, resource type %u.\n", FUNC_2(VAR_2->id), VAR_6, VAR_8);
            VAR_2->flags[VAR_8] |= VAR_5;
        }
        else
        {
            FUNC_1("Format %s doesn't support %s, resource type %u.\n", FUNC_2(VAR_2->id), VAR_6, VAR_8);
            VAR_2->flags[VAR_8] &= ~VAR_5;
        }
    }
}
