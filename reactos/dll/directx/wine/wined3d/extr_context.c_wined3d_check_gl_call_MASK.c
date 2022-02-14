
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ (* p_glGetError ) () ;} ;
struct TYPE_4__ {TYPE_1__ gl; } ;
struct wined3d_gl_info {TYPE_2__ gl_ops; scalar_t__* supported; } ;
typedef scalar_t__ GLint ;


 size_t VAR_0 ;
 int FUNC_0 (char*,int ,scalar_t__,char const*,char const*,unsigned int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,char const*,char const*,unsigned int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;

void FUNC_5(const struct wined3d_gl_info *VAR_2,
        const char *VAR_3, unsigned int VAR_4, const char *VAR_5)
{
    GLint VAR_6;

    if (VAR_2->supported[VAR_0] || (VAR_6 = VAR_2->gl_ops.gl.p_glGetError()) == VAR_1)
    {
        FUNC_1("%s call ok %s / %u.\n", VAR_5, VAR_3, VAR_4);
        return;
    }

    do
    {
        FUNC_0(">>>>>>> %s (%#x) from %s @ %s / %u.\n",
                FUNC_2(VAR_6), VAR_6, VAR_5, VAR_3,VAR_4);
        VAR_6 = VAR_2->gl_ops.gl.p_glGetError();
    } while (VAR_6 != VAR_1);
}
