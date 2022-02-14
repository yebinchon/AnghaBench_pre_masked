
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_25__ {char* Name; int NumSamples; int Dimension; int ReturnType; int uFlags; int BindCount; int BindPoint; int Type; } ;
struct TYPE_24__ {TYPE_1__* lpVtbl; } ;
struct TYPE_23__ {scalar_t__ (* GetResourceBindingDesc ) (TYPE_2__*,int,TYPE_3__*) ;scalar_t__ (* GetResourceBindingDescByName ) (TYPE_2__*,char*,TYPE_3__*) ;scalar_t__ (* Release ) (TYPE_2__*) ;} ;
typedef TYPE_2__ ID3D11ShaderReflection ;
typedef scalar_t__ HRESULT ;
typedef TYPE_3__ D3D11_SHADER_INPUT_BIND_DESC ;


 unsigned int FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,char*,scalar_t__,...) ;
 scalar_t__ FUNC_2 (int *,int ,int *,void**) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int,TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int,TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,char*,TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,char*,TYPE_3__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*,char*,TYPE_3__*) ;
 scalar_t__ FUNC_9 (TYPE_2__*,char*,TYPE_3__*) ;
 scalar_t__ FUNC_10 (TYPE_2__*,unsigned int,TYPE_3__*) ;
 scalar_t__ FUNC_11 (TYPE_2__*,char*,TYPE_3__*) ;
 scalar_t__ FUNC_12 (TYPE_2__*) ;
 int * VAR_3 ;
 TYPE_3__* VAR_4 ;

__attribute__((used)) static void FUNC_13(void)
{
    HRESULT VAR_5;
    ULONG VAR_6;
    ID3D11ShaderReflection *VAR_7;
    D3D11_SHADER_INPUT_BIND_DESC VAR_8;
    const D3D11_SHADER_INPUT_BIND_DESC *VAR_9;
    unsigned int VAR_10;

    VAR_5 = FUNC_2(VAR_3, VAR_3[6], &VAR_1, (void **)&VAR_7);
    FUNC_1(VAR_5 == VAR_2, "D3DReflect failed %x\n", VAR_5);


    VAR_5 = VAR_7->lpVtbl->GetResourceBindingDesc(VAR_7, 0, ((void*)0));
    FUNC_1(VAR_5 == VAR_0, "GetResourceBindingDesc failed, got %x, expected %x\n", VAR_5, VAR_0);

    VAR_5 = VAR_7->lpVtbl->GetResourceBindingDesc(VAR_7, 0xffffffff, &VAR_8);
    FUNC_1(VAR_5 == VAR_0, "GetResourceBindingDesc failed, got %x, expected %x\n", VAR_5, VAR_0);

    VAR_5 = VAR_7->lpVtbl->GetResourceBindingDescByName(VAR_7, ((void*)0), &VAR_8);
    FUNC_1(VAR_5 == VAR_0, "GetResourceBindingDescByName failed, got %x, expected %x\n", VAR_5, VAR_0);

    VAR_5 = VAR_7->lpVtbl->GetResourceBindingDescByName(VAR_7, "sam", ((void*)0));
    FUNC_1(VAR_5 == VAR_0, "GetResourceBindingDescByName failed, got %x, expected %x\n", VAR_5, VAR_0);

    VAR_5 = VAR_7->lpVtbl->GetResourceBindingDescByName(VAR_7, "invalid", ((void*)0));
    FUNC_1(VAR_5 == VAR_0, "GetResourceBindingDescByName failed, got %x, expected %x\n", VAR_5, VAR_0);

    VAR_5 = VAR_7->lpVtbl->GetResourceBindingDescByName(VAR_7, "invalid", &VAR_8);
    FUNC_1(VAR_5 == VAR_0, "GetResourceBindingDescByName failed, got %x, expected %x\n", VAR_5, VAR_0);


    for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_4); ++VAR_10)
    {
        VAR_9 = &VAR_4[VAR_10];

        VAR_5 = VAR_7->lpVtbl->GetResourceBindingDesc(VAR_7, VAR_10, &VAR_8);
        FUNC_1(VAR_5 == VAR_2, "GetResourceBindingDesc(%u) failed, got %x, expected %x\n", VAR_10, VAR_5, VAR_2);

        FUNC_1(!FUNC_3(VAR_8.Name, VAR_9->Name), "GetResourceBindingDesc(%u) Name failed, got \"%s\", expected \"%s\"\n",
                VAR_10, VAR_8.Name, VAR_9->Name);
        FUNC_1(VAR_8.Type == VAR_9->Type, "GetResourceBindingDesc(%u) Type failed, got %x, expected %x\n",
                VAR_10, VAR_8.Type, VAR_9->Type);
        FUNC_1(VAR_8.BindPoint == VAR_9->BindPoint, "GetResourceBindingDesc(%u) BindPoint failed, got %u, expected %u\n",
                VAR_10, VAR_8.BindPoint, VAR_9->BindPoint);
        FUNC_1(VAR_8.BindCount == VAR_9->BindCount, "GetResourceBindingDesc(%u) BindCount failed, got %u, expected %u\n",
                VAR_10, VAR_8.BindCount, VAR_9->BindCount);
        FUNC_1(VAR_8.uFlags == VAR_9->uFlags, "GetResourceBindingDesc(%u) uFlags failed, got %u, expected %u\n",
                VAR_10, VAR_8.uFlags, VAR_9->uFlags);
        FUNC_1(VAR_8.ReturnType == VAR_9->ReturnType, "GetResourceBindingDesc(%u) ReturnType failed, got %x, expected %x\n",
                VAR_10, VAR_8.ReturnType, VAR_9->ReturnType);
        FUNC_1(VAR_8.Dimension == VAR_9->Dimension, "GetResourceBindingDesc(%u) Dimension failed, got %x, expected %x\n",
                VAR_10, VAR_8.Dimension, VAR_9->Dimension);
        FUNC_1(VAR_8.NumSamples == VAR_9->NumSamples, "GetResourceBindingDesc(%u) NumSamples failed, got %u, expected %u\n",
                VAR_10, VAR_8.NumSamples, VAR_9->NumSamples);
    }


    for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_4); ++VAR_10)
    {
        VAR_9 = &VAR_4[VAR_10];

        VAR_5 = VAR_7->lpVtbl->GetResourceBindingDescByName(VAR_7, VAR_9->Name, &VAR_8);
        FUNC_1(VAR_5 == VAR_2, "GetResourceBindingDescByName(%u) failed, got %x, expected %x\n", VAR_10, VAR_5, VAR_2);

        FUNC_1(!FUNC_3(VAR_8.Name, VAR_9->Name), "GetResourceBindingDescByName(%u) Name failed, got \"%s\", expected \"%s\"\n",
                VAR_10, VAR_8.Name, VAR_9->Name);
        FUNC_1(VAR_8.Type == VAR_9->Type, "GetResourceBindingDescByName(%u) Type failed, got %x, expected %x\n",
                VAR_10, VAR_8.Type, VAR_9->Type);
        FUNC_1(VAR_8.BindPoint == VAR_9->BindPoint, "GetResourceBindingDescByName(%u) BindPoint failed, got %u, expected %u\n",
                VAR_10, VAR_8.BindPoint, VAR_9->BindPoint);
        FUNC_1(VAR_8.BindCount == VAR_9->BindCount, "GetResourceBindingDescByName(%u) BindCount failed, got %u, expected %u\n",
                VAR_10, VAR_8.BindCount, VAR_9->BindCount);
        FUNC_1(VAR_8.uFlags == VAR_9->uFlags, "GetResourceBindingDescByName(%u) uFlags failed, got %u, expected %u\n",
                VAR_10, VAR_8.uFlags, VAR_9->uFlags);
        FUNC_1(VAR_8.ReturnType == VAR_9->ReturnType, "GetResourceBindingDescByName(%u) ReturnType failed, got %x, expected %x\n",
                VAR_10, VAR_8.ReturnType, VAR_9->ReturnType);
        FUNC_1(VAR_8.Dimension == VAR_9->Dimension, "GetResourceBindingDescByName(%u) Dimension failed, got %x, expected %x\n",
                VAR_10, VAR_8.Dimension, VAR_9->Dimension);
        FUNC_1(VAR_8.NumSamples == VAR_9->NumSamples, "GetResourceBindingDescByName(%u) NumSamples failed, got %u, expected %u\n",
                VAR_10, VAR_8.NumSamples, VAR_9->NumSamples);
    }

    VAR_6 = VAR_7->lpVtbl->Release(VAR_7);
    FUNC_1(VAR_6 == 0, "Release failed %u\n", VAR_6);
}
