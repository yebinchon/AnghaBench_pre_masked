
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * lpVtbl; } ;
struct d3dcompiler_shader_reflection_variable {int start_offset; int size; int flags; int default_value; int type; int name; struct d3dcompiler_shader_reflection_constant_buffer* constant_buffer; TYPE_1__ ID3D11ShaderReflectionVariable_iface; } ;
struct d3dcompiler_shader_reflection_constant_buffer {int variable_count; struct d3dcompiler_shader_reflection_variable* variables; TYPE_2__* reflection; } ;
struct TYPE_4__ {int target; } ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 struct d3dcompiler_shader_reflection_variable* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,struct d3dcompiler_shader_reflection_variable*) ;
 int VAR_4 ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char const*,int *) ;
 int FUNC_6 (char const*,int *,int) ;
 int VAR_5 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct d3dcompiler_shader_reflection_variable*) ;
 int FUNC_9 (TYPE_2__*,char const*,int) ;
 int FUNC_10 (char const**,int*) ;
 int FUNC_11 (char const**,int) ;

__attribute__((used)) static HRESULT FUNC_12(struct d3dcompiler_shader_reflection_constant_buffer *VAR_6,
        const char *VAR_7, DWORD VAR_8, const char *VAR_9)
{
    struct d3dcompiler_shader_reflection_variable *VAR_10;
    unsigned int VAR_11;
    HRESULT VAR_12;

    VAR_10 = FUNC_2(FUNC_1(), VAR_3, VAR_6->variable_count * sizeof(*VAR_10));
    if (!VAR_10)
    {
        FUNC_0("Failed to allocate variables memory.\n");
        return VAR_2;
    }

    for (VAR_11 = 0; VAR_11 < VAR_6->variable_count; VAR_11++)
    {
        struct d3dcompiler_shader_reflection_variable *VAR_13 = &VAR_10[VAR_11];
        DWORD VAR_14;

        VAR_13->ID3D11ShaderReflectionVariable_iface.lpVtbl = &VAR_5;
        VAR_13->constant_buffer = VAR_6;

        FUNC_10(&VAR_9, &VAR_14);
        if (!FUNC_5(VAR_7 + VAR_14, &VAR_13->name))
        {
            FUNC_0("Failed to copy name.\n");
            VAR_12 = VAR_2;
            goto err_out;
        }
        FUNC_4("Variable name: %s.\n", FUNC_7(VAR_13->name));

        FUNC_10(&VAR_9, &VAR_13->start_offset);
        FUNC_4("Variable offset: %u\n", VAR_13->start_offset);

        FUNC_10(&VAR_9, &VAR_13->size);
        FUNC_4("Variable size: %u\n", VAR_13->size);

        FUNC_10(&VAR_9, &VAR_13->flags);
        FUNC_4("Variable flags: %u\n", VAR_13->flags);

        FUNC_10(&VAR_9, &VAR_14);
        FUNC_4("Variable type offset: %x\n", VAR_14);
        VAR_13->type = FUNC_9(VAR_6->reflection, VAR_7, VAR_14);
        if (!VAR_13->type)
        {
            FUNC_0("Failed to get type.\n");
            VAR_12 = VAR_1;
            goto err_out;
        }

        FUNC_10(&VAR_9, &VAR_14);
        FUNC_4("Variable default value offset: %x\n", VAR_14);
        if (!FUNC_6(VAR_7 + VAR_14, &VAR_13->default_value, VAR_14 ? VAR_13->size : 0))
        {
            FUNC_0("Failed to copy name.\n");
            VAR_12 = VAR_2;
            goto err_out;
        }

        if ((VAR_6->reflection->target & VAR_0) >= 0x500)
            FUNC_11(&VAR_9, 4);
    }

    VAR_6->variables = VAR_10;

    return VAR_4;

err_out:
    for (VAR_11 = 0; VAR_11 < VAR_6->variable_count; VAR_11++)
    {
        FUNC_8(&VAR_10[VAR_11]);
    }
    FUNC_3(FUNC_1(), 0, VAR_10);
    return VAR_12;
}
