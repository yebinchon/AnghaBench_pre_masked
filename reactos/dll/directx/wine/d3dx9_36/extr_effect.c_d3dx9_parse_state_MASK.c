
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct d3dx_state {int operation; int index; int parameter; int type; } ;
struct d3dx_object {int dummy; } ;
struct d3dx9_base_effect {int dummy; } ;
struct TYPE_2__ {int name; } ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct d3dx9_base_effect*,int *,char const*,char const**,int *,int ) ;
 scalar_t__ FUNC_3 (struct d3dx9_base_effect*,int *,char const*,char const*,struct d3dx_object*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (char const**,int*) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static HRESULT FUNC_6(struct d3dx9_base_effect *VAR_4, struct d3dx_state *VAR_5,
        const char *VAR_6, const char **VAR_7, struct d3dx_object *VAR_8)
{
    DWORD VAR_9;
    const char *VAR_10;
    HRESULT VAR_11;

    VAR_5->type = VAR_2;

    FUNC_5(VAR_7, &VAR_5->operation);
    FUNC_0("Operation: %#x (%s)\n", VAR_5->operation, VAR_3[VAR_5->operation].name);

    FUNC_5(VAR_7, &VAR_5->index);
    FUNC_0("Index: %#x\n", VAR_5->index);

    FUNC_5(VAR_7, &VAR_9);
    FUNC_0("Typedef offset: %#x\n", VAR_9);
    VAR_10 = VAR_6 + VAR_9;
    VAR_11 = FUNC_2(VAR_4, &VAR_5->parameter, VAR_6, &VAR_10, ((void*)0), 0);
    if (VAR_11 != VAR_0)
    {
        FUNC_1("Failed to parse type definition\n");
        goto err_out;
    }

    FUNC_5(VAR_7, &VAR_9);
    FUNC_0("Value offset: %#x\n", VAR_9);
    VAR_11 = FUNC_3(VAR_4, &VAR_5->parameter, VAR_6, VAR_6 + VAR_9, VAR_8);
    if (VAR_11 != VAR_0)
    {
        FUNC_1("Failed to parse value\n");
        goto err_out;
    }

    return VAR_0;

err_out:

    FUNC_4(&VAR_5->parameter, VAR_1, VAR_1);

    return VAR_11;
}
