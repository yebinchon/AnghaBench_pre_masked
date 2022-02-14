
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_top_level_parameter {int annotation_count; struct d3dx_parameter* annotations; } ;
struct d3dx_technique {int annotation_count; struct d3dx_parameter* annotations; } ;
struct d3dx_pass {int annotation_count; struct d3dx_parameter* annotations; } ;
struct d3dx_parameter {int dummy; } ;
struct d3dx9_base_effect {int dummy; } ;
typedef int UINT ;
typedef int D3DXHANDLE ;


 int FUNC_0 (char*) ;
 struct d3dx_parameter* FUNC_1 (struct d3dx9_base_effect*,int ) ;
 struct d3dx_pass* FUNC_2 (struct d3dx9_base_effect*,int ) ;
 struct d3dx_technique* FUNC_3 (struct d3dx9_base_effect*,int ) ;
 scalar_t__ FUNC_4 (struct d3dx_parameter*) ;
 struct d3dx_top_level_parameter* FUNC_5 (struct d3dx_parameter*) ;

__attribute__((used)) static UINT FUNC_6(struct d3dx9_base_effect *VAR_0,
        D3DXHANDLE VAR_1, struct d3dx_parameter **VAR_2)
{
    struct d3dx_parameter *VAR_3 = FUNC_1(VAR_0, VAR_1);
    struct d3dx_pass *VAR_4 = FUNC_2(VAR_0, VAR_1);
    struct d3dx_technique *VAR_5 = FUNC_3(VAR_0, VAR_1);

    if (VAR_4)
    {
        *VAR_2 = VAR_4->annotations;
        return VAR_4->annotation_count;
    }
    else if (VAR_5)
    {
        *VAR_2 = VAR_5->annotations;
        return VAR_5->annotation_count;
    }
    else if (VAR_3)
    {
        if (FUNC_4(VAR_3))
        {
            struct d3dx_top_level_parameter *VAR_6
                    = FUNC_5(VAR_3);

            *VAR_2 = VAR_6->annotations;
            return VAR_6->annotation_count;
        }
        else
        {
            *VAR_2 = ((void*)0);
            return 0;
        }
    }
    else
    {
        FUNC_0("Functions are not handled, yet!\n");
        return 0;
    }
}
