
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_parameter {int flags; } ;
struct d3dx_object {int dummy; } ;
struct d3dx9_base_effect {int dummy; } ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct d3dx9_base_effect*,struct d3dx_parameter*,char const*,char const**,int *,int ) ;
 scalar_t__ FUNC_3 (struct d3dx9_base_effect*,struct d3dx_parameter*,char const*,char const*,struct d3dx_object*) ;
 int FUNC_4 (char const**,int*) ;

__attribute__((used)) static HRESULT FUNC_5(struct d3dx9_base_effect *VAR_2, struct d3dx_parameter *VAR_3,
        const char *VAR_4, const char **VAR_5, struct d3dx_object *VAR_6)
{
    DWORD VAR_7;
    const char *VAR_8;
    HRESULT VAR_9;

    VAR_3->flags = VAR_0;

    FUNC_4(VAR_5, &VAR_7);
    FUNC_0("Typedef offset: %#x\n", VAR_7);
    VAR_8 = VAR_4 + VAR_7;
    VAR_9 = FUNC_2(VAR_2, VAR_3, VAR_4, &VAR_8, ((void*)0), VAR_0);
    if (VAR_9 != VAR_1)
    {
        FUNC_1("Failed to parse type definition\n");
        return VAR_9;
    }

    FUNC_4(VAR_5, &VAR_7);
    FUNC_0("Value offset: %#x\n", VAR_7);
    VAR_9 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_4 + VAR_7, VAR_6);
    if (VAR_9 != VAR_1)
    {
        FUNC_1("Failed to parse value\n");
        return VAR_9;
    }

    return VAR_1;
}
