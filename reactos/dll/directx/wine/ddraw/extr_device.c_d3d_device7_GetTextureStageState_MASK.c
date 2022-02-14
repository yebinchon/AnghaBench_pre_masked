
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int texture_state; int sampler_state; } ;
struct tss_lookup {TYPE_1__ u; scalar_t__ sampler_state; } ;
struct d3d_device {int wined3d_device; } ;
typedef int IDirect3DDevice7 ;
typedef int HRESULT ;
typedef int DWORD ;
typedef size_t D3DTEXTURESTAGESTATETYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int *,int ,size_t,int *) ;
 int FUNC_2 (char*,size_t) ;






 struct d3d_device* FUNC_3 (int *) ;
 struct tss_lookup* VAR_12 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static HRESULT FUNC_8(IDirect3DDevice7 *VAR_13,
        DWORD VAR_14, D3DTEXTURESTAGESTATETYPE VAR_15, DWORD *VAR_16)
{
    struct d3d_device *VAR_17 = FUNC_3(VAR_13);
    const struct tss_lookup *VAR_18;

    FUNC_1("iface %p, stage %u, state %#x, value %p.\n",
            VAR_13, VAR_14, VAR_15, VAR_16);

    if (!VAR_16)
        return VAR_10;

    if (VAR_15 > VAR_8)
    {
        FUNC_2("Invalid state %#x passed.\n", VAR_15);
        return VAR_11;
    }

    VAR_18 = &VAR_12[VAR_15];

    FUNC_6();

    if (VAR_18->sampler_state)
    {
        *VAR_16 = FUNC_4(VAR_17->wined3d_device, VAR_14, VAR_18->u.sampler_state);

        switch (VAR_15)
        {

            case 134:
            {
                switch (*VAR_16)
                {
                    case 129:
                        *VAR_16 = VAR_6;
                        break;
                    case 128:
                        *VAR_16 = VAR_7;
                        break;
                    case 130:
                        *VAR_16 = VAR_5;
                        break;
                    default:
                        FUNC_0("Unexpected mipfilter value %#x.\n", *VAR_16);
                        *VAR_16 = VAR_6;
                        break;
                }
                break;
            }


            case 135:
            {
                switch (*VAR_16)
                {
                    case 128:
                            *VAR_16 = VAR_4;
                            break;
                    case 130:
                            *VAR_16 = VAR_3;
                            break;
                    case 133:
                            *VAR_16 = VAR_0;
                            break;
                    case 132:
                            *VAR_16 = VAR_1;
                            break;
                    case 131:
                            *VAR_16 = VAR_2;
                            break;
                    default:
                        FUNC_0("Unexpected wined3d mag filter value %#x.\n", *VAR_16);
                        *VAR_16 = VAR_4;
                        break;
                }
                break;
            }

            default:
                break;
        }
    }
    else
    {
        *VAR_16 = FUNC_5(VAR_17->wined3d_device, VAR_14, VAR_18->u.texture_state);
    }

    FUNC_7();

    return VAR_9;
}
