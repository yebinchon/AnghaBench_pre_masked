
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dx_parameter {scalar_t__ class; int type; scalar_t__ bytes; int element_count; scalar_t__ data; } ;
struct d3dx9_base_effect {int dummy; } ;
typedef scalar_t__ UINT ;
typedef int IUnknown ;
typedef int HRESULT ;
typedef int D3DXHANDLE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (int) ;
 struct d3dx_parameter* FUNC_5 (struct d3dx9_base_effect*,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (void*,scalar_t__,scalar_t__) ;

__attribute__((used)) static HRESULT FUNC_8(struct d3dx9_base_effect *VAR_4,
        D3DXHANDLE VAR_5, void *VAR_6, UINT VAR_7)
{
    struct d3dx_parameter *VAR_8 = FUNC_5(VAR_4, VAR_5);

    if (!VAR_8)
    {
        FUNC_3("Invalid parameter %p specified\n", VAR_5);
        return VAR_0;
    }


    if (VAR_8->class == VAR_1 && FUNC_6(VAR_8->type))
    {
        FUNC_2("Sampler: returning E_FAIL\n");
        return VAR_3;
    }

    if (VAR_6 && VAR_8->bytes <= VAR_7)
    {
        FUNC_2("Type %s\n", FUNC_4(VAR_8->type));

        switch (VAR_8->type)
        {
            case 128:
            case 139:
            case 137:
            case 138:
            case 135:
                break;

            case 129:
            case 136:
            case 134:
            case 133:
            case 132:
            case 131:
            case 130:
            {
                UINT VAR_9;

                for (VAR_9 = 0; VAR_9 < (VAR_8->element_count ? VAR_8->element_count : 1); ++VAR_9)
                {
                    IUnknown *VAR_10 = ((IUnknown **)VAR_8->data)[VAR_9];
                    if (VAR_10) FUNC_1(VAR_10);
                }
                break;
            }

            default:
                FUNC_0("Unhandled type %s\n", FUNC_4(VAR_8->type));
                break;
        }

        FUNC_2("Copy %u bytes\n", VAR_8->bytes);
        FUNC_7(VAR_6, VAR_8->data, VAR_8->bytes);
        return VAR_2;
    }

    FUNC_3("Parameter not found.\n");

    return VAR_0;
}
