
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct d3dx9_base_effect {int parameter_count; int technique_count; int object_count; TYPE_1__* objects; TYPE_1__* parameters; TYPE_1__* techniques; int version_counter; TYPE_5__* pool; int param_tree; } ;
typedef size_t UINT ;
struct TYPE_14__ {int version_counter; } ;
struct TYPE_13__ {int param; int * version_counter; scalar_t__ data; } ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int VAR_2 ;
 void* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,TYPE_1__*) ;
 int FUNC_5 (char*,size_t) ;
 int FUNC_6 (char*,size_t) ;
 int FUNC_7 (struct d3dx9_base_effect*,int *,int *,int ,int ) ;
 scalar_t__ FUNC_8 (struct d3dx9_base_effect*,int,char const**) ;
 scalar_t__ FUNC_9 (struct d3dx9_base_effect*,TYPE_1__*) ;
 scalar_t__ FUNC_10 (struct d3dx9_base_effect*,TYPE_1__*,char const*,char const**,TYPE_1__*) ;
 scalar_t__ FUNC_11 (struct d3dx9_base_effect*,TYPE_1__*,char const*,char const**,TYPE_1__*) ;
 scalar_t__ FUNC_12 (struct d3dx9_base_effect*,char const*,char const**,char const**,unsigned int) ;
 scalar_t__ FUNC_13 (TYPE_5__*,TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_17 (int *) ;
 int VAR_4 ;
 int FUNC_18 (char const**,...) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (char const**,int) ;
 int FUNC_21 (int *,int ,TYPE_1__*) ;
 int FUNC_22 (int *,int ) ;

__attribute__((used)) static HRESULT FUNC_23(struct d3dx9_base_effect *VAR_5, const char *VAR_6, UINT VAR_7,
        DWORD VAR_8, const char **VAR_9, unsigned int VAR_10)
{
    const char *VAR_11 = VAR_6 + VAR_8;
    UINT VAR_12, VAR_13;
    HRESULT VAR_14;
    UINT VAR_15;

    FUNC_18(&VAR_11, &VAR_5->parameter_count);
    FUNC_5("Parameter count: %u.\n", VAR_5->parameter_count);

    FUNC_18(&VAR_11, &VAR_5->technique_count);
    FUNC_5("Technique count: %u.\n", VAR_5->technique_count);

    FUNC_20(&VAR_11, 1);

    FUNC_18(&VAR_11, &VAR_5->object_count);
    FUNC_5("Object count: %u.\n", VAR_5->object_count);

    VAR_5->objects = FUNC_3(FUNC_2(), VAR_2, sizeof(*VAR_5->objects) * VAR_5->object_count);
    if (!VAR_5->objects)
    {
        FUNC_0("Out of memory.\n");
        VAR_14 = VAR_1;
        goto err_out;
    }

    FUNC_22(&VAR_5->param_tree, VAR_3);
    if (VAR_5->parameter_count)
    {
        VAR_5->parameters = FUNC_3(FUNC_2(), VAR_2,
                sizeof(*VAR_5->parameters) * VAR_5->parameter_count);
        if (!VAR_5->parameters)
        {
            FUNC_0("Out of memory.\n");
            VAR_14 = VAR_1;
            goto err_out;
        }

        for (VAR_15 = 0; VAR_15 < VAR_5->parameter_count; ++VAR_15)
        {
            FUNC_17(&VAR_5->parameters[VAR_15].param);
            VAR_14 = FUNC_10(VAR_5, &VAR_5->parameters[VAR_15], VAR_6, &VAR_11, VAR_5->objects);
            if (VAR_14 != VAR_0)
            {
                FUNC_6("Failed to parse parameter %u.\n", VAR_15);
                goto err_out;
            }
            FUNC_21(&VAR_5->parameters[VAR_15].param, VAR_4,
                &VAR_5->parameters[VAR_15]);
            FUNC_7(VAR_5, &VAR_5->parameters[VAR_15].param, ((void*)0), 0, 0);
        }
    }

    if (VAR_5->technique_count)
    {
        VAR_5->techniques = FUNC_3(FUNC_2(), VAR_2,
                sizeof(*VAR_5->techniques) * VAR_5->technique_count);
        if (!VAR_5->techniques)
        {
            FUNC_0("Out of memory.\n");
            VAR_14 = VAR_1;
            goto err_out;
        }

        for (VAR_15 = 0; VAR_15 < VAR_5->technique_count; ++VAR_15)
        {
            FUNC_5("Parsing technique %u.\n", VAR_15);
            VAR_14 = FUNC_11(VAR_5, &VAR_5->techniques[VAR_15], VAR_6, &VAR_11, VAR_5->objects);
            if (VAR_14 != VAR_0)
            {
                FUNC_6("Failed to parse technique %u.\n", VAR_15);
                goto err_out;
            }
        }
    }

    FUNC_18(&VAR_11, &VAR_12);
    FUNC_5("String count: %u.\n", VAR_12);

    FUNC_18(&VAR_11, &VAR_13);
    FUNC_5("Resource count: %u.\n", VAR_13);

    for (VAR_15 = 0; VAR_15 < VAR_12; ++VAR_15)
    {
        DWORD VAR_16;

        FUNC_18(&VAR_11, &VAR_16);
        FUNC_5("id: %u.\n", VAR_16);

        if (FUNC_1(VAR_14 = FUNC_8(VAR_5, VAR_16, &VAR_11)))
            goto err_out;

        if (VAR_5->objects[VAR_16].data)
        {
            if (FUNC_1(VAR_14 = FUNC_9(VAR_5, &VAR_5->objects[VAR_16])))
                goto err_out;
        }
    }

    for (VAR_15 = 0; VAR_15 < VAR_13; ++VAR_15)
    {
        FUNC_5("parse resource %u.\n", VAR_15);

        VAR_14 = FUNC_12(VAR_5, VAR_6, &VAR_11, VAR_9, VAR_10);
        if (VAR_14 != VAR_0)
        {
            FUNC_6("Failed to parse resource %u.\n", VAR_15);
            goto err_out;
        }
    }

    for (VAR_15 = 0; VAR_15 < VAR_5->parameter_count; ++VAR_15)
    {
        if (FUNC_1(VAR_14 = FUNC_13(VAR_5->pool, &VAR_5->parameters[VAR_15])))
            goto err_out;
        VAR_5->parameters[VAR_15].version_counter = VAR_5->pool
                ? &VAR_5->pool->version_counter
                : &VAR_5->version_counter;
        FUNC_19(&VAR_5->parameters[VAR_15].param);
    }
    return VAR_0;

err_out:

    if (VAR_5->techniques)
    {
        for (VAR_15 = 0; VAR_15 < VAR_5->technique_count; ++VAR_15)
            FUNC_15(&VAR_5->techniques[VAR_15]);
        FUNC_4(FUNC_2(), 0, VAR_5->techniques);
        VAR_5->techniques = ((void*)0);
    }

    if (VAR_5->parameters)
    {
        for (VAR_15 = 0; VAR_15 < VAR_5->parameter_count; ++VAR_15)
        {
            FUNC_16(&VAR_5->parameters[VAR_15]);
        }
        FUNC_4(FUNC_2(), 0, VAR_5->parameters);
        VAR_5->parameters = ((void*)0);
    }

    if (VAR_5->objects)
    {
        for (VAR_15 = 0; VAR_15 < VAR_5->object_count; ++VAR_15)
        {
            FUNC_14(&VAR_5->objects[VAR_15]);
        }
        FUNC_4(FUNC_2(), 0, VAR_5->objects);
        VAR_5->objects = ((void*)0);
    }

    return VAR_14;
}
