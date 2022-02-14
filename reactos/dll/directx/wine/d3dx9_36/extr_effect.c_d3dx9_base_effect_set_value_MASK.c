
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
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int) ;
 struct d3dx_parameter* FUNC_7 (struct d3dx9_base_effect*,int ) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (scalar_t__,void const*,scalar_t__) ;
 int FUNC_10 (struct d3dx_parameter*) ;
 int FUNC_11 (char**,char const*) ;

__attribute__((used)) static HRESULT FUNC_12(struct d3dx9_base_effect *VAR_4,
        D3DXHANDLE VAR_5, const void *VAR_6, UINT VAR_7)
{
    struct d3dx_parameter *VAR_8 = FUNC_7(VAR_4, VAR_5);
    unsigned int VAR_9;

    if (!VAR_8)
    {
        FUNC_5("Invalid parameter %p specified\n", VAR_5);
        return VAR_0;
    }


    if (VAR_8->class == VAR_1 && FUNC_8(VAR_8->type))
    {
        FUNC_4("Sampler: returning E_FAIL\n");
        return VAR_3;
    }

    if (VAR_6 && VAR_8->bytes <= VAR_7)
    {
        switch (VAR_8->type)
        {
            case 133:
            case 132:
            case 131:
            case 130:
            case 129:
                for (VAR_9 = 0; VAR_9 < (VAR_8->element_count ? VAR_8->element_count : 1); ++VAR_9)
                {
                    IUnknown *VAR_10 = ((IUnknown **)VAR_8->data)[VAR_9];
                    IUnknown *VAR_11 = ((IUnknown **)VAR_6)[VAR_9];

                    if (VAR_11 == VAR_10)
                        continue;

                    if (VAR_11)
                        FUNC_2(VAR_11);
                    if (VAR_10)
                        FUNC_3(VAR_10);
                }

            case 128:
            case 137:
            case 135:
            case 136:
                FUNC_4("Copy %u bytes.\n", VAR_8->bytes);
                FUNC_9(VAR_8->data, VAR_6, VAR_8->bytes);
                FUNC_10(VAR_8);
                break;

            case 134:
            {
                HRESULT VAR_12;

                FUNC_10(VAR_8);
                for (VAR_9 = 0; VAR_9 < (VAR_8->element_count ? VAR_8->element_count : 1); ++VAR_9)
                {
                    if (FUNC_0(VAR_12 = FUNC_11(&((char **)VAR_8->data)[VAR_9], ((const char **)VAR_6)[VAR_9])))
                        return VAR_12;
                }
                break;
            }

            default:
                FUNC_1("Unhandled type %s.\n", FUNC_6(VAR_8->type));
                break;
        }

        return VAR_2;
    }

    FUNC_5("Invalid argument specified\n");

    return VAR_0;
}
