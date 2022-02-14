
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_shader_semantic {int usage; int usage_idx; int reg; int resource_data_type; int resource_type; } ;
typedef enum wined3d_sm1_resource_type { ____Placeholder_wined3d_sm1_resource_type } wined3d_sm1_resource_type ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int FUNC_2 (int,int *,int *) ;

__attribute__((used)) static void FUNC_3(const DWORD **VAR_9, struct wined3d_shader_semantic *VAR_10)
{
    enum wined3d_sm1_resource_type VAR_11;
    DWORD VAR_12 = *(*VAR_9)++;
    DWORD VAR_13 = *(*VAR_9)++;

    VAR_10->usage = (VAR_12 & VAR_4) >> VAR_5;
    VAR_10->usage_idx = (VAR_12 & VAR_2) >> VAR_3;
    VAR_11 = (VAR_12 & VAR_6) >> VAR_7;
    if (VAR_11 >= FUNC_0(VAR_8))
    {
        FUNC_1("Unhandled resource type %#x.\n", VAR_11);
        VAR_10->resource_type = VAR_1;
    }
    else
    {
        VAR_10->resource_type = VAR_8[VAR_11];
    }
    VAR_10->resource_data_type = VAR_0;
    FUNC_2(VAR_13, ((void*)0), &VAR_10->reg);
}
