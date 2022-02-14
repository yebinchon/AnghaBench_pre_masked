
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct d3dx_parameter {size_t object_id; scalar_t__ type; unsigned int element_count; TYPE_1__* members; int param_eval; int name; } ;
struct d3dx_state {struct d3dx_parameter* referenced_param; struct d3dx_parameter parameter; } ;
struct d3dx_object {char* data; scalar_t__ size; } ;
struct d3dx9_base_effect {struct d3dx_object* objects; } ;
struct TYPE_2__ {scalar_t__ type; int object_id; int param_eval; } ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,scalar_t__,...) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct d3dx9_base_effect*,int*,scalar_t__,scalar_t__,int *,int ,char const**,unsigned int) ;
 int FUNC_4 (int ) ;
 struct d3dx_parameter* FUNC_5 (struct d3dx9_base_effect*,int *,char*) ;
 int FUNC_6 (struct d3dx9_base_effect*) ;

__attribute__((used)) static HRESULT FUNC_7(struct d3dx9_base_effect *VAR_5, struct d3dx_state *VAR_6,
        const char **VAR_7, unsigned int VAR_8)
{
    DWORD VAR_9;
    struct d3dx_parameter *VAR_10 = &VAR_6->parameter;
    struct d3dx_object *VAR_11 = &VAR_5->objects[VAR_10->object_id];
    char *VAR_12 = VAR_11->data;
    HRESULT VAR_13;

    FUNC_2("Parsing array entry selection state for parameter %p.\n", VAR_10);

    VAR_9 = *(DWORD *)VAR_12;
    VAR_6->referenced_param = FUNC_5(VAR_5, ((void*)0), VAR_12 + 4);
    if (VAR_6->referenced_param)
    {
        FUNC_2("Mapping to parameter %s.\n", FUNC_4(VAR_6->referenced_param->name));
    }
    else
    {
        FUNC_1("Referenced parameter %s not found.\n", VAR_12 + 4);
        return VAR_0;
    }
    FUNC_2("Unknown DWORD: 0x%.8x.\n", *(DWORD *)(VAR_12 + VAR_9));

    if (VAR_9 % sizeof(DWORD))
        FUNC_1("Unaligned string_size %u.\n", VAR_9);
    if (FUNC_0(VAR_13 = FUNC_3(VAR_5, (DWORD *)(VAR_12 + VAR_9) + 1,
            VAR_11->size - (VAR_9 + sizeof(DWORD)), VAR_1, &VAR_10->param_eval,
            FUNC_6(VAR_5), ((void*)0), 0)))
        return VAR_13;
    VAR_13 = VAR_4;
    VAR_10 = VAR_6->referenced_param;
    if (VAR_10->type == VAR_3 || VAR_10->type == VAR_2)
    {
        unsigned int VAR_14;

        for (VAR_14 = 0; VAR_14 < VAR_10->element_count; VAR_14++)
        {
            if (VAR_10->members[VAR_14].type != VAR_10->type)
            {
                FUNC_1("Unexpected member parameter type %u, expected %u.\n", VAR_10->members[VAR_14].type, VAR_10->type);
                return VAR_0;
            }
            if (!VAR_10->members[VAR_14].param_eval)
            {
                FUNC_2("Creating preshader for object %u.\n", VAR_10->members[VAR_14].object_id);
                VAR_11 = &VAR_5->objects[VAR_10->members[VAR_14].object_id];
                if (FUNC_0(VAR_13 = FUNC_3(VAR_5, VAR_11->data, VAR_11->size, VAR_10->type,
                        &VAR_10->members[VAR_14].param_eval, FUNC_6(VAR_5),
                        VAR_7, VAR_8)))
                    break;
            }
        }
    }
    return VAR_13;
}
