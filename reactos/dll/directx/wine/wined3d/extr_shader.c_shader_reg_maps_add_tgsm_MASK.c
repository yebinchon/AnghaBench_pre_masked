
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_shader_tgsm {unsigned int size; unsigned int stride; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct wined3d_shader_reg_maps {struct wined3d_shader_tgsm* tgsm; int tgsm_count; int tgsm_capacity; TYPE_1__ shader_version; } ;
typedef int HRESULT ;


 int FUNC_0 (char*,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (void**,int *,unsigned int,int) ;

__attribute__((used)) static HRESULT FUNC_4(struct wined3d_shader_reg_maps *VAR_4,
        unsigned int VAR_5, unsigned int VAR_6, unsigned int VAR_7)
{
    struct wined3d_shader_tgsm *VAR_8;

    if (VAR_5 >= VAR_1)
    {
        FUNC_0("Invalid TGSM register index %u.\n", VAR_5);
        return VAR_2;
    }
    if (VAR_4->shader_version.type != VAR_3)
    {
        FUNC_1("TGSM declarations are allowed only in compute shaders.\n");
        return VAR_2;
    }

    if (!FUNC_3((void **)&VAR_4->tgsm, &VAR_4->tgsm_capacity,
            VAR_5 + 1, sizeof(*VAR_4->tgsm)))
        return VAR_0;

    VAR_4->tgsm_count = FUNC_2(VAR_5 + 1, VAR_4->tgsm_count);
    VAR_8 = &VAR_4->tgsm[VAR_5];
    VAR_8->size = VAR_6;
    VAR_8->stride = VAR_7;
    return VAR_2;
}
