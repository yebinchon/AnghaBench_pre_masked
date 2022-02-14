
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dcompiler_shader_reflection_type_member {int offset; int name; int type; } ;
struct d3dcompiler_shader_reflection {int dummy; } ;
typedef int HRESULT ;
typedef int DWORD ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char const*,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct d3dcompiler_shader_reflection*,char const*,int) ;
 int FUNC_7 (char const**,int*) ;

__attribute__((used)) static HRESULT FUNC_8(struct d3dcompiler_shader_reflection *VAR_3,
        struct d3dcompiler_shader_reflection_type_member *VAR_4, const char *VAR_5, const char **VAR_6)
{
    DWORD VAR_7;

    FUNC_7(VAR_6, &VAR_7);
    if (!FUNC_4(VAR_5 + VAR_7, &VAR_4->name))
    {
        FUNC_0("Failed to copy name.\n");
        return VAR_1;
    }
    FUNC_3("Member name: %s.\n", FUNC_5(VAR_4->name));

    FUNC_7(VAR_6, &VAR_7);
    FUNC_3("Member type offset: %x\n", VAR_7);

    VAR_4->type = FUNC_6(VAR_3, VAR_5, VAR_7);
    if (!VAR_4->type)
    {
        FUNC_0("Failed to get member type\n");
        FUNC_2(FUNC_1(), 0, VAR_4->name);
        return VAR_0;
    }

    FUNC_7(VAR_6, &VAR_4->offset);
    FUNC_3("Member offset %x\n", VAR_4->offset);

    return VAR_2;
}
