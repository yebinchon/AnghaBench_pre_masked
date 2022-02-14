
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct d3d9_vertexshader {int dummy; } ;
struct TYPE_5__ {int * lpVtbl; } ;
typedef TYPE_1__ IDirect3DVertexShader9 ;


 int FUNC_0 (char*,TYPE_1__*,int *) ;
 int VAR_0 ;
 struct d3d9_vertexshader* FUNC_1 (TYPE_1__*) ;

struct d3d9_vertexshader *FUNC_2(IDirect3DVertexShader9 *VAR_1)
{
    if (!VAR_1)
        return ((void*)0);
    if (VAR_1->lpVtbl != &VAR_0)
        FUNC_0("Vertex shader %p with the wrong vtbl %p\n", VAR_1, VAR_1->lpVtbl);

    return FUNC_1(VAR_1);
}
