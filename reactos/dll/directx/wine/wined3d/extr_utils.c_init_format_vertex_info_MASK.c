
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_gl_info {int * supported; } ;
struct wined3d_format {int component_count; int gl_vtx_type; int attribute_size; int gl_normalized; int gl_vtx_format; int emit_idx; } ;
struct TYPE_3__ {size_t extension; int id; int gl_normalized; int component_count; int gl_vtx_type; int emit_idx; } ;
typedef int BOOL ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__* VAR_2 ;
 struct wined3d_format* FUNC_4 (struct wined3d_gl_info*,int ) ;

__attribute__((used)) static BOOL FUNC_5(struct wined3d_gl_info *VAR_3)
{
    struct wined3d_format *VAR_4;
    unsigned int VAR_5;

    for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); ++VAR_5)
    {
        if (!(VAR_4 = FUNC_4(VAR_3, VAR_2[VAR_5].id)))
            return VAR_0;

        if (!VAR_3->supported[VAR_2[VAR_5].extension])
            continue;

        VAR_4->emit_idx = VAR_2[VAR_5].emit_idx;
        VAR_4->component_count = VAR_2[VAR_5].component_count;
        VAR_4->gl_vtx_type = VAR_2[VAR_5].gl_vtx_type;
        VAR_4->gl_vtx_format = VAR_2[VAR_5].component_count;
        VAR_4->gl_normalized = VAR_2[VAR_5].gl_normalized;
        if (!(VAR_4->attribute_size = FUNC_2(VAR_4->gl_vtx_type,
                VAR_4->component_count)))
        {
            FUNC_1("Invalid attribute size for vertex format %s (%#x).\n",
                    FUNC_3(VAR_2[VAR_5].id), VAR_2[VAR_5].id);
            return VAR_0;
        }
    }

    return VAR_1;
}
