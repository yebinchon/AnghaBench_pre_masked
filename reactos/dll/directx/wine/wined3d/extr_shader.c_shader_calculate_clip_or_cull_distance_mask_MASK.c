
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_shader_signature_element {int semantic_idx; int mask; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static HRESULT FUNC_1(
        const struct wined3d_shader_signature_element *VAR_4, unsigned int *VAR_5)
{



    if (VAR_4->semantic_idx >= VAR_0 / 4)
    {
        *VAR_5 = 0;
        FUNC_0("Invalid clip/cull distance index %u.\n", VAR_4->semantic_idx);
        return VAR_1;
    }

    *VAR_5 = (VAR_4->mask & VAR_2) << (4 * VAR_4->semantic_idx);
    return VAR_3;
}
