
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_sampler {int dummy; } ;
struct d3dx_parameter {int element_count; int bytes; int class; unsigned int member_count; size_t object_id; int type; struct d3dx_sampler* data; struct d3dx_parameter* members; } ;
struct d3dx_object {struct d3dx_parameter* param; } ;
struct d3dx9_base_effect {int dummy; } ;
typedef int UINT ;
typedef scalar_t__ HRESULT ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 () ;
 int VAR_2 ;
 struct d3dx_sampler* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,struct d3dx_sampler*) ;
 int FUNC_4 (char*,size_t) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (struct d3dx9_base_effect*,struct d3dx_sampler*,char const*,char const**,struct d3dx_object*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char const**,size_t*) ;

__attribute__((used)) static HRESULT FUNC_10(struct d3dx9_base_effect *VAR_3, struct d3dx_parameter *VAR_4,
        void *VAR_5, const char *VAR_6, const char **VAR_7, struct d3dx_object *VAR_8)
{
    unsigned int VAR_9;
    HRESULT VAR_10;
    UINT VAR_11 = 0;

    if (VAR_4->element_count)
    {
        VAR_4->data = VAR_5;

        for (VAR_9 = 0; VAR_9 < VAR_4->element_count; ++VAR_9)
        {
            struct d3dx_parameter *VAR_12 = &VAR_4->members[VAR_9];

            VAR_10 = FUNC_10(VAR_3, VAR_12, VAR_5 ? (char *)VAR_5 + VAR_11 : ((void*)0), VAR_6, VAR_7, VAR_8);
            if (VAR_10 != VAR_0)
            {
                FUNC_5("Failed to parse value %u\n", VAR_9);
                return VAR_10;
            }

            VAR_11 += VAR_12->bytes;
        }

        return VAR_0;
    }

    switch(VAR_4->class)
    {
        case 143:
        case 141:
        case 145:
        case 146:
            VAR_4->data = VAR_5;
            break;

        case 142:
            VAR_4->data = VAR_5;

            for (VAR_9 = 0; VAR_9 < VAR_4->member_count; ++VAR_9)
            {
                struct d3dx_parameter *VAR_13 = &VAR_4->members[VAR_9];

                VAR_10 = FUNC_10(VAR_3, VAR_13, (char *)VAR_5 + VAR_11, VAR_6, VAR_7, VAR_8);
                if (VAR_10 != VAR_0)
                {
                    FUNC_5("Failed to parse value %u\n", VAR_9);
                    return VAR_10;
                }

                VAR_11 += VAR_13->bytes;
            }
            break;

        case 144:
            switch (VAR_4->type)
            {
                case 134:
                case 133:
                case 132:
                case 131:
                case 130:
                case 129:
                case 140:
                case 128:
                    FUNC_9(VAR_7, &VAR_4->object_id);
                    FUNC_4("Id: %u\n", VAR_4->object_id);
                    VAR_8[VAR_4->object_id].param = VAR_4;
                    VAR_4->data = VAR_5;
                    break;

                case 139:
                case 138:
                case 137:
                case 136:
                case 135:
                {
                    struct d3dx_sampler *VAR_14;

                    VAR_14 = FUNC_2(FUNC_1(), VAR_2, sizeof(*VAR_14));
                    if (!VAR_14)
                        return VAR_1;

                    VAR_10 = FUNC_6(VAR_3, VAR_14, VAR_6, VAR_7, VAR_8);
                    if (VAR_10 != VAR_0)
                    {
                        FUNC_3(FUNC_1(), 0, VAR_14);
                        FUNC_5("Failed to parse sampler\n");
                        return VAR_10;
                    }

                    VAR_4->data = VAR_14;
                    break;
                }

                default:
                    FUNC_0("Unhandled type %s\n", FUNC_8(VAR_4->type));
                    break;
            }
            break;

        default:
            FUNC_0("Unhandled class %s\n", FUNC_7(VAR_4->class));
            break;
    }

    return VAR_0;
}
