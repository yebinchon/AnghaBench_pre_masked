
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3d8_vertex_declaration {int dummy; } ;
struct d3d8_device {int dummy; } ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,struct d3d8_vertex_declaration*,...) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct d3d8_vertex_declaration*,struct d3d8_device*,int const*,int ) ;
 struct d3d8_vertex_declaration* FUNC_4 (int) ;
 int FUNC_5 (struct d3d8_vertex_declaration*) ;

__attribute__((used)) static HRESULT FUNC_6(struct d3d8_device *VAR_2,
        const DWORD *VAR_3, DWORD VAR_4, struct d3d8_vertex_declaration **VAR_5)
{
    struct d3d8_vertex_declaration *VAR_6;
    HRESULT VAR_7;

    FUNC_1("device %p, declaration %p, shader_handle %#x, decl_ptr %p.\n",
            VAR_2, VAR_3, VAR_4, VAR_5);

    if (!(VAR_6 = FUNC_4(sizeof(*VAR_6))))
        return VAR_1;

    VAR_7 = FUNC_3(VAR_6, VAR_2, VAR_3, VAR_4);
    if (FUNC_0(VAR_7))
    {
        FUNC_2("Failed to initialize vertex declaration, hr %#x.\n", VAR_7);
        FUNC_5(VAR_6);
        return VAR_7;
    }

    FUNC_1("Created vertex declaration %p.\n", VAR_6);
    *VAR_5 = VAR_6;

    return VAR_0;
}
