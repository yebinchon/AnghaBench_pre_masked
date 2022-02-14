
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3d9_vertex_declaration {int dummy; } ;
struct d3d9_device {int dummy; } ;
typedef int HRESULT ;
typedef int D3DVERTEXELEMENT9 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,struct d3d9_vertex_declaration*) ;
 int FUNC_2 (char*,int ) ;
 struct d3d9_vertex_declaration* FUNC_3 (int) ;
 int FUNC_4 (struct d3d9_vertex_declaration*) ;
 int FUNC_5 (struct d3d9_vertex_declaration*,struct d3d9_device*,int const*) ;

HRESULT FUNC_6(struct d3d9_device *VAR_2,
        const D3DVERTEXELEMENT9 *VAR_3, struct d3d9_vertex_declaration **VAR_4)
{
    struct d3d9_vertex_declaration *VAR_5;
    HRESULT VAR_6;

    if (!(VAR_5 = FUNC_3(sizeof(*VAR_5))))
        return VAR_1;

    VAR_6 = FUNC_5(VAR_5, VAR_2, VAR_3);
    if (FUNC_0(VAR_6))
    {
        FUNC_2("Failed to initialize vertex declaration, hr %#x.\n", VAR_6);
        FUNC_4(VAR_5);
        return VAR_6;
    }

    FUNC_1("Created vertex declaration %p.\n", VAR_5);
    *VAR_4 = VAR_5;

    return VAR_0;
}
