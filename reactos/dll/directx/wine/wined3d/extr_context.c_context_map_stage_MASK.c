
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_context {size_t* rev_tex_unit_map; size_t* tex_unit_map; } ;
typedef size_t DWORD ;


 int FUNC_0 (char*,size_t,size_t) ;
 size_t VAR_0 ;

__attribute__((used)) static void FUNC_1(struct wined3d_context *VAR_1, DWORD VAR_2, DWORD VAR_3)
{
    DWORD VAR_4 = VAR_1->rev_tex_unit_map[VAR_3];
    DWORD VAR_5 = VAR_1->tex_unit_map[VAR_2];

    FUNC_0("Mapping stage %u to unit %u.\n", VAR_2, VAR_3);
    VAR_1->tex_unit_map[VAR_2] = VAR_3;
    if (VAR_4 != VAR_0 && VAR_4 != VAR_2)
        VAR_1->tex_unit_map[VAR_4] = VAR_0;

    VAR_1->rev_tex_unit_map[VAR_3] = VAR_2;
    if (VAR_5 != VAR_0 && VAR_5 != VAR_3)
        VAR_1->rev_tex_unit_map[VAR_5] = VAR_0;
}
