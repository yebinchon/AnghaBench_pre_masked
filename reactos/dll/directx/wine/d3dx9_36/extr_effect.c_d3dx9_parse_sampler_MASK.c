
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_sampler {int state_count; int * states; } ;
struct d3dx_object {int dummy; } ;
struct d3dx9_base_effect {int dummy; } ;
typedef size_t UINT ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 int * FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,size_t) ;
 scalar_t__ FUNC_6 (struct d3dx9_base_effect*,int *,char const*,char const**,struct d3dx_object*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char const**,int*) ;

__attribute__((used)) static HRESULT FUNC_9(struct d3dx9_base_effect *VAR_3, struct d3dx_sampler *VAR_4,
        const char *VAR_5, const char **VAR_6, struct d3dx_object *VAR_7)
{
    HRESULT VAR_8;
    UINT VAR_9;

    FUNC_8(VAR_6, &VAR_4->state_count);
    FUNC_4("Count: %u\n", VAR_4->state_count);

    VAR_4->states = FUNC_2(FUNC_1(), VAR_2, sizeof(*VAR_4->states) * VAR_4->state_count);
    if (!VAR_4->states)
    {
        FUNC_0("Out of memory\n");
        return VAR_1;
    }

    for (VAR_9 = 0; VAR_9 < VAR_4->state_count; ++VAR_9)
    {
        VAR_8 = FUNC_6(VAR_3, &VAR_4->states[VAR_9], VAR_5, VAR_6, VAR_7);
        if (VAR_8 != VAR_0)
        {
            FUNC_5("Failed to parse state %u\n", VAR_9);
            goto err_out;
        }
    }

    return VAR_0;

err_out:

    for (VAR_9 = 0; VAR_9 < VAR_4->state_count; ++VAR_9)
    {
        FUNC_7(&VAR_4->states[VAR_9]);
    }
    FUNC_3(FUNC_1(), 0, VAR_4->states);
    VAR_4->states = ((void*)0);

    return VAR_8;
}
