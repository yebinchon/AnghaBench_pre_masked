
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct d3dx_state {size_t operation; } ;
struct d3dx_pass {unsigned int state_count; struct d3dx_state* states; int annotation_count; int name; } ;
struct d3dx_parameter {int object_id; } ;
struct d3dx9_base_effect {int flags; TYPE_1__* objects; } ;
struct TYPE_7__ {scalar_t__ class; } ;
struct TYPE_6__ {int * pPixelShaderFunction; int * pVertexShaderFunction; int Annotations; int Name; } ;
struct TYPE_5__ {int * data; } ;
typedef int HRESULT ;
typedef TYPE_2__ D3DXPASS_DESC ;
typedef int D3DXHANDLE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct d3dx_pass*,struct d3dx_state*,void**,struct d3dx_parameter**,int ,int *) ;
 struct d3dx_pass* FUNC_3 (struct d3dx9_base_effect*,int ) ;
 TYPE_3__* VAR_6 ;

__attribute__((used)) static HRESULT FUNC_4(struct d3dx9_base_effect *VAR_7,
        D3DXHANDLE VAR_8, D3DXPASS_DESC *VAR_9)
{
    struct d3dx_pass *VAR_10 = FUNC_3(VAR_7, VAR_8);
    unsigned int VAR_11;

    if (!VAR_9 || !VAR_10)
    {
        FUNC_1("Invalid argument specified.\n");
        return VAR_0;
    }

    VAR_9->Name = VAR_10->name;
    VAR_9->Annotations = VAR_10->annotation_count;

    VAR_9->pVertexShaderFunction = ((void*)0);
    VAR_9->pPixelShaderFunction = ((void*)0);

    if (VAR_7->flags & VAR_1)
        return VAR_2;

    for (VAR_11 = 0; VAR_11 < VAR_10->state_count; ++VAR_11)
    {
        struct d3dx_state *VAR_12 = &VAR_10->states[VAR_11];

        if (VAR_6[VAR_12->operation].class == VAR_5
                || VAR_6[VAR_12->operation].class == VAR_4)
        {
            struct d3dx_parameter *VAR_13;
            void *VAR_14;
            BOOL VAR_15;
            HRESULT VAR_16;
            void *VAR_17;

            if (FUNC_0(VAR_16 = FUNC_2(VAR_10, &VAR_10->states[VAR_11], &VAR_14, &VAR_13,
                    VAR_3, &VAR_15)))
                return VAR_16;

            VAR_17 = VAR_13->object_id ? VAR_7->objects[VAR_13->object_id].data : ((void*)0);
            if (VAR_6[VAR_12->operation].class == VAR_5)
                VAR_9->pVertexShaderFunction = VAR_17;
            else
                VAR_9->pPixelShaderFunction = VAR_17;
        }
    }

    return VAR_2;
}
