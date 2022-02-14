
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct d3dcompiler_shader_reflection_type_member {int dummy; } ;
struct TYPE_3__ {int Class; int Type; int Rows; int Columns; int Elements; int Members; int Name; } ;
struct d3dcompiler_shader_reflection_type {struct d3dcompiler_shader_reflection_type_member* members; int name; TYPE_2__* reflection; TYPE_1__ desc; } ;
struct TYPE_4__ {int target; } ;
typedef int HRESULT ;
typedef int DWORD ;
typedef TYPE_1__ D3D11_SHADER_TYPE_DESC ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int VAR_2 ;
 struct d3dcompiler_shader_reflection_type_member* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,struct d3dcompiler_shader_reflection_type_member*) ;
 int VAR_3 ;
 int FUNC_5 (char*,int,...) ;
 int FUNC_6 (char const*,int *) ;
 int FUNC_7 (TYPE_2__*,struct d3dcompiler_shader_reflection_type_member*,char const*,char const**) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct d3dcompiler_shader_reflection_type_member*) ;
 int FUNC_12 (struct d3dcompiler_shader_reflection_type_member*) ;
 int FUNC_13 (char const**,int*) ;
 int FUNC_14 (char const**,int) ;

__attribute__((used)) static HRESULT FUNC_15(struct d3dcompiler_shader_reflection_type *VAR_4, const char *VAR_5, DWORD VAR_6)
{
    const char *VAR_7 = VAR_5 + VAR_6;
    DWORD VAR_8;
    D3D11_SHADER_TYPE_DESC *VAR_9;
    unsigned int VAR_10;
    struct d3dcompiler_shader_reflection_type_member *VAR_11 = ((void*)0);
    HRESULT VAR_12;
    DWORD VAR_13;

    VAR_9 = &VAR_4->desc;

    FUNC_13(&VAR_7, &VAR_8);
    VAR_9->Class = VAR_8 & 0xffff;
    VAR_9->Type = VAR_8 >> 16;
    FUNC_5("Class %s, Type %s\n", FUNC_8(VAR_9->Class),
            FUNC_9(VAR_9->Type));

    FUNC_13(&VAR_7, &VAR_8);
    VAR_9->Rows = VAR_8 & 0xffff;
    VAR_9->Columns = VAR_8 >> 16;
    FUNC_5("Rows %u, Columns %u\n", VAR_9->Rows, VAR_9->Columns);

    FUNC_13(&VAR_7, &VAR_8);
    VAR_9->Elements = VAR_8 & 0xffff;
    VAR_9->Members = VAR_8 >> 16;
    FUNC_5("Elements %u, Members %u\n", VAR_9->Elements, VAR_9->Members);

    FUNC_13(&VAR_7, &VAR_13);
    FUNC_5("Member Offset %u\n", VAR_13);

    if ((VAR_4->reflection->target & VAR_0) >= 0x500)
        FUNC_14(&VAR_7, 4);

    if (VAR_9->Members)
    {
        const char *VAR_14 = VAR_5 + VAR_13;

        VAR_11 = FUNC_3(FUNC_2(), VAR_2, sizeof(*VAR_11) * VAR_9->Members);
        if (!VAR_11)
        {
            FUNC_0("Failed to allocate type memory.\n");
            return VAR_1;
        }

        for (VAR_10 = 0; VAR_10 < VAR_9->Members; ++VAR_10)
        {
            VAR_12 = FUNC_7(VAR_4->reflection, &VAR_11[VAR_10], VAR_5, &VAR_14);
            if (VAR_12 != VAR_3)
            {
                FUNC_1("Failed to parse type members.\n");
                goto err_out;
            }
        }
    }

    if ((VAR_4->reflection->target & VAR_0) >= 0x500)
    {
        FUNC_13(&VAR_7, &VAR_6);
        if (!FUNC_6(VAR_5 + VAR_6, &VAR_4->name))
        {
            FUNC_0("Failed to copy name.\n");
            FUNC_12(VAR_11);
            return VAR_1;
        }
        VAR_9->Name = VAR_4->name;
        FUNC_5("Type name: %s.\n", FUNC_10(VAR_4->name));
    }

    VAR_4->members = VAR_11;

    return VAR_3;

err_out:
    for (VAR_10 = 0; VAR_10 < VAR_9->Members; ++VAR_10)
    {
        FUNC_11(&VAR_11[VAR_10]);
    }
    FUNC_4(FUNC_2(), 0, VAR_11);
    return VAR_12;
}
