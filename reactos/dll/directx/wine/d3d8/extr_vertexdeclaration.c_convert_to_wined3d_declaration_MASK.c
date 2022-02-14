
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_vertex_element {size_t input_slot; int offset; size_t output_slot; int usage_idx; int usage; int method; scalar_t__ instance_data_step_rate; int input_slot_class; int format; } ;
typedef size_t WORD ;
typedef unsigned int UINT ;
struct TYPE_2__ {int usage_idx; int usage; } ;
typedef size_t DWORD ;
typedef int D3DVSD_TOKENTYPE ;


 size_t const VAR_0 ;
 size_t const VAR_1 ;
 size_t const VAR_2 ;
 size_t const FUNC_0 () ;
 int VAR_3 ;
 int VAR_4 ;
 size_t const VAR_5 ;
 size_t const VAR_6 ;
 size_t const VAR_7 ;
 size_t const VAR_8 ;
 size_t const VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t const VAR_12 ;
 size_t const VAR_13 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 int VAR_14 ;
 int VAR_15 ;
 struct wined3d_vertex_element* FUNC_3 (int) ;
 int FUNC_4 (size_t const*) ;
 int * VAR_16 ;
 scalar_t__* VAR_17 ;
 TYPE_1__* VAR_18 ;

__attribute__((used)) static UINT FUNC_5(const DWORD *VAR_19, DWORD *VAR_20,
        struct wined3d_vertex_element **VAR_21)
{
    struct wined3d_vertex_element *VAR_22;
    const DWORD *VAR_23 = VAR_19;
    D3DVSD_TOKENTYPE VAR_24;
    unsigned int VAR_25 = 0;
    WORD VAR_26 = 0;
    int VAR_27 = 0;

    FUNC_2("d3d8_elements %p, d3d8_elements_size %p, wined3d_elements %p\n", VAR_19, VAR_20, VAR_21);


    *VAR_21 = FUNC_3(128 * sizeof(**VAR_21));
    while (FUNC_0() != *VAR_23)
    {
        VAR_24 = ((*VAR_23 & VAR_8) >> VAR_9);

        if (VAR_24 == VAR_10 && !(*VAR_23 & VAR_7))
        {
            VAR_26 = ((*VAR_23 & VAR_5) >> VAR_6);
            VAR_27 = 0;
        } else if (VAR_24 == VAR_11 && !(*VAR_23 & VAR_0)) {
            DWORD VAR_28 = ((*VAR_23 & VAR_1) >> VAR_2);
            DWORD VAR_29 = ((*VAR_23 & VAR_12) >> VAR_13);

            FUNC_2("Adding element %d:\n", VAR_25);

            VAR_22 = *VAR_21 + VAR_25++;
            VAR_22->format = VAR_16[VAR_28];
            VAR_22->input_slot = VAR_26;
            VAR_22->offset = VAR_27;
            VAR_22->output_slot = VAR_29;
            VAR_22->input_slot_class = VAR_15;
            VAR_22->instance_data_step_rate = 0;
            VAR_22->method = VAR_14;
            VAR_22->usage = VAR_18[VAR_29].usage;
            VAR_22->usage_idx = VAR_18[VAR_29].usage_idx;

            VAR_27 += VAR_17[VAR_28];
        } else if (VAR_24 == VAR_11 && (*VAR_23 & VAR_0)) {
            FUNC_2(" 0x%08x SKIP(%u)\n", VAR_24, ((VAR_24 & VAR_3) >> VAR_4));
            VAR_27 += sizeof(DWORD) * ((VAR_24 & VAR_3) >> VAR_4);
        }

        if (VAR_25 >= 127) {
            FUNC_1("More than 127 elements?\n");
            break;
        }

        VAR_23 += FUNC_4(VAR_23);
    }

    *VAR_20 = (++VAR_23 - VAR_19) * sizeof(DWORD);

    return VAR_25;
}
