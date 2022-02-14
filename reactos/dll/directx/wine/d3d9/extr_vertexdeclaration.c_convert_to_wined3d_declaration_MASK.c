
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct wined3d_vertex_element {int usage_idx; int usage; int method; scalar_t__ instance_data_step_rate; int input_slot_class; int output_slot; int offset; int input_slot; int format; } ;
typedef int UINT ;
struct TYPE_9__ {int format; } ;
struct TYPE_8__ {size_t Type; int UsageIndex; int Usage; int Method; int Offset; int Stream; } ;
struct TYPE_7__ {int Stream; } ;
typedef int HRESULT ;
typedef TYPE_2__ D3DVERTEXELEMENT9 ;


 size_t FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,TYPE_2__ const*,struct wined3d_vertex_element**,int*) ;
 int FUNC_3 (char*,size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 struct wined3d_vertex_element* FUNC_4 (int) ;
 int FUNC_5 (struct wined3d_vertex_element*) ;

__attribute__((used)) static HRESULT FUNC_6(const D3DVERTEXELEMENT9 *VAR_6,
        struct wined3d_vertex_element **VAR_7, UINT *VAR_8)
{
    const D3DVERTEXELEMENT9* VAR_9;
    UINT VAR_10 = 1;
    UINT VAR_11;

    FUNC_2("d3d9_elements %p, wined3d_elements %p, element_count %p\n", VAR_6, VAR_7, VAR_8);

    VAR_9 = VAR_6;
    while (VAR_9++->Stream != 0xff && VAR_10++ < 128);

    if (VAR_10 == 128) return VAR_2;


    --VAR_10;

    if (!(*VAR_7 = FUNC_4(VAR_10 * sizeof(**VAR_7))))
    {
        FUNC_1("Memory allocation failed\n");
        return VAR_0;
    }

    for (VAR_11 = 0; VAR_11 < VAR_10; ++VAR_11)
    {
        if (VAR_6[VAR_11].Type >= FUNC_0(VAR_5))
        {
            FUNC_3("Invalid element type %#x.\n", VAR_6[VAR_11].Type);
            FUNC_5(*VAR_7);
            return VAR_2;
        }
        (*VAR_7)[VAR_11].format = VAR_5[VAR_6[VAR_11].Type].format;
        (*VAR_7)[VAR_11].input_slot = VAR_6[VAR_11].Stream;
        (*VAR_7)[VAR_11].offset = VAR_6[VAR_11].Offset;
        (*VAR_7)[VAR_11].output_slot = VAR_4;
        (*VAR_7)[VAR_11].input_slot_class = VAR_3;
        (*VAR_7)[VAR_11].instance_data_step_rate = 0;
        (*VAR_7)[VAR_11].method = VAR_6[VAR_11].Method;
        (*VAR_7)[VAR_11].usage = VAR_6[VAR_11].Usage;
        (*VAR_7)[VAR_11].usage_idx = VAR_6[VAR_11].UsageIndex;
    }

    *VAR_8 = VAR_10;

    return VAR_1;
}
