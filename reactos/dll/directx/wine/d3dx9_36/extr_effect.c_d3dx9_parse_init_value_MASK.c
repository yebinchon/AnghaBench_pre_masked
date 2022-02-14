
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_parameter {int class; scalar_t__ bytes; } ;
struct d3dx_object {int dummy; } ;
struct d3dx9_base_effect {int dummy; } ;
typedef scalar_t__ UINT ;
typedef scalar_t__ HRESULT ;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 () ;
 int VAR_2 ;
 void* FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int ,int ,void*) ;
 int FUNC_5 (char*,scalar_t__) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (struct d3dx9_base_effect*,struct d3dx_parameter*,void*,char const*,char const**,struct d3dx_object*) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (char const*,scalar_t__) ;
 int FUNC_10 (void*,char const*,scalar_t__) ;

__attribute__((used)) static HRESULT FUNC_11(struct d3dx9_base_effect *VAR_3, struct d3dx_parameter *VAR_4,
        const char *VAR_5, const char *VAR_6, struct d3dx_object *VAR_7)
{
    UINT VAR_8 = VAR_4->bytes;
    HRESULT VAR_9;
    void *VAR_10 = ((void*)0);

    FUNC_5("param size: %u\n", VAR_8);

    if (VAR_8)
    {
        VAR_10 = FUNC_3(FUNC_2(), VAR_2, VAR_8);
        if (!VAR_10)
        {
            FUNC_0("Failed to allocate data memory.\n");
            return VAR_1;
        }

        switch(VAR_4->class)
        {
            case 131:
                break;

            case 130:
            case 128:
            case 132:
            case 133:
            case 129:
                FUNC_5("Data: %s.\n", FUNC_9(VAR_6, VAR_8));
                FUNC_10(VAR_10, VAR_6, VAR_8);
                break;

            default:
                FUNC_1("Unhandled class %s\n", FUNC_8(VAR_4->class));
                break;
        }
    }

    VAR_9 = FUNC_7(VAR_3, VAR_4, VAR_10, VAR_5, &VAR_6, VAR_7);
    if (VAR_9 != VAR_0)
    {
        FUNC_6("Failed to parse value\n");
        FUNC_4(FUNC_2(), 0, VAR_10);
        return VAR_9;
    }

    return VAR_0;
}
