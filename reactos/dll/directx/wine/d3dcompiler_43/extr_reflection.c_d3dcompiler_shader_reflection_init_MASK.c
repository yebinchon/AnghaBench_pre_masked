
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dxbc_section {int tag; int data_size; int data; } ;
struct dxbc {unsigned int count; struct dxbc_section* sections; } ;
struct TYPE_2__ {int * lpVtbl; } ;
struct d3dcompiler_shader_reflection {int refcount; int target; void* pcsg; void* osgn; void* isgn; int types; TYPE_1__ ID3D11ShaderReflection_iface; } ;
typedef int SIZE_T ;
typedef int HRESULT ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 () ;
 int VAR_1 ;
 void* FUNC_4 (int ,int ,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct d3dcompiler_shader_reflection*,int ,int ) ;
 int FUNC_7 (struct d3dcompiler_shader_reflection*,int ,int ) ;
 int FUNC_8 (void*,struct dxbc_section*,int ) ;
 int FUNC_9 (struct d3dcompiler_shader_reflection*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_10 (char const*,int) ;
 int FUNC_11 (struct dxbc*) ;
 int FUNC_12 (void const*,int ,struct dxbc*) ;
 int FUNC_13 (struct d3dcompiler_shader_reflection*) ;
 int FUNC_14 (int *,int ) ;

__attribute__((used)) static HRESULT FUNC_15(struct d3dcompiler_shader_reflection *VAR_4,
        const void *VAR_5, SIZE_T VAR_6)
{
    struct dxbc VAR_7;
    HRESULT VAR_8;
    unsigned int VAR_9;

    VAR_4->ID3D11ShaderReflection_iface.lpVtbl = &VAR_3;
    VAR_4->refcount = 1;

    FUNC_14(&VAR_4->types, VAR_2);

    VAR_8 = FUNC_12(VAR_5, VAR_6, &VAR_7);
    if (FUNC_1(VAR_8))
    {
        FUNC_5("Failed to parse reflection\n");
        return VAR_8;
    }

    for (VAR_9 = 0; VAR_9 < VAR_7.count; ++VAR_9)
    {
        struct dxbc_section *VAR_10 = &VAR_7.sections[VAR_9];

        switch (VAR_10->tag)
        {
            case 131:
                VAR_8 = FUNC_6(VAR_4, VAR_10->data, VAR_10->data_size);
                if (FUNC_1(VAR_8))
                {
                    FUNC_5("Failed to parse RDEF section.\n");
                    goto err_out;
                }
                break;

            case 135:
                VAR_4->isgn = FUNC_4(FUNC_3(), VAR_1, sizeof(*VAR_4->isgn));
                if (!VAR_4->isgn)
                {
                    FUNC_0("Failed to allocate ISGN memory.\n");
                    VAR_8 = VAR_0;
                    goto err_out;
                }

                VAR_8 = FUNC_8(VAR_4->isgn, VAR_10, VAR_4->target);
                if (FUNC_1(VAR_8))
                {
                    FUNC_5("Failed to parse section ISGN.\n");
                    goto err_out;
                }
                break;

            case 134:
            case 133:
                VAR_4->osgn = FUNC_4(FUNC_3(), VAR_1, sizeof(*VAR_4->osgn));
                if (!VAR_4->osgn)
                {
                    FUNC_0("Failed to allocate OSGN memory.\n");
                    VAR_8 = VAR_0;
                    goto err_out;
                }

                VAR_8 = FUNC_8(VAR_4->osgn, VAR_10, VAR_4->target);
                if (FUNC_1(VAR_8))
                {
                    FUNC_5("Failed to parse section OSGN.\n");
                    goto err_out;
                }
                break;

            case 132:
                VAR_4->pcsg = FUNC_4(FUNC_3(), VAR_1, sizeof(*VAR_4->pcsg));
                if (!VAR_4->pcsg)
                {
                    FUNC_0("Failed to allocate PCSG memory.\n");
                    VAR_8 = VAR_0;
                    goto err_out;
                }

                VAR_8 = FUNC_8(VAR_4->pcsg, VAR_10, VAR_4->target);
                if (FUNC_1(VAR_8))
                {
                    FUNC_5("Failed to parse section PCSG.\n");
                    goto err_out;
                }
                break;

            case 129:
            case 130:
                VAR_8 = FUNC_7(VAR_4, VAR_10->data, VAR_10->data_size);
                if (FUNC_1(VAR_8))
                {
                    FUNC_5("Failed to parse SHDR section.\n");
                    goto err_out;
                }
                break;

            case 128:
                VAR_8 = FUNC_9(VAR_4, VAR_10->data, VAR_10->data_size);
                if (FUNC_1(VAR_8))
                {
                    FUNC_5("Failed to parse section STAT.\n");
                    goto err_out;
                }
                break;

            default:
                FUNC_2("Unhandled section %s!\n", FUNC_10((const char *)&VAR_10->tag, 4));
                break;
        }
    }

    FUNC_11(&VAR_7);

    return VAR_8;

err_out:
    FUNC_13(VAR_4);
    FUNC_11(&VAR_7);

    return VAR_8;
}
