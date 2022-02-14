
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_11__ {scalar_t__ SemanticIndex; scalar_t__ Register; scalar_t__ SystemValueType; scalar_t__ ComponentType; scalar_t__ Mask; scalar_t__ ReadWriteMask; scalar_t__ Stream; int SemanticName; int member_0; } ;
struct TYPE_10__ {TYPE_1__* lpVtbl; } ;
struct TYPE_9__ {scalar_t__ (* GetOutputParameterDesc ) (TYPE_2__*,int ,TYPE_3__*) ;scalar_t__ (* Release ) (TYPE_2__*) ;} ;
typedef TYPE_2__ ID3D11ShaderReflection ;
typedef scalar_t__ HRESULT ;
typedef TYPE_3__ D3D11_SIGNATURE_PARAMETER_DESC ;


 unsigned int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,char*,unsigned int,scalar_t__,...) ;
 scalar_t__ FUNC_2 (int *,int ,int *,void**) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ,TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int ** VAR_2 ;
 TYPE_3__* VAR_3 ;

__attribute__((used)) static void FUNC_6(void)
{
    HRESULT VAR_4;
    ULONG VAR_5;
    ID3D11ShaderReflection *VAR_6;
    D3D11_SIGNATURE_PARAMETER_DESC VAR_7 = {0};
    const D3D11_SIGNATURE_PARAMETER_DESC *VAR_8;
    unsigned int VAR_9;

    for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_3); ++VAR_9)
    {
        VAR_4 = FUNC_2(VAR_2[VAR_9], VAR_2[VAR_9][6], &VAR_0, (void **)&VAR_6);
        FUNC_1(VAR_4 == VAR_1, "(%u): D3DReflect failed %x\n", VAR_9, VAR_4);

        VAR_8 = &VAR_3[VAR_9];

        VAR_4 = VAR_6->lpVtbl->GetOutputParameterDesc(VAR_6, 0, &VAR_7);
        FUNC_1(VAR_4 == VAR_1, "(%u): GetOutputParameterDesc failed, got %x, expected %x\n", VAR_9, VAR_4, VAR_1);

        FUNC_1(!FUNC_3(VAR_7.SemanticName, VAR_8->SemanticName), "(%u): GetOutputParameterDesc SemanticName failed, got \"%s\", expected \"%s\"\n",
                VAR_9, VAR_7.SemanticName, VAR_8->SemanticName);
        FUNC_1(VAR_7.SemanticIndex == VAR_8->SemanticIndex, "(%u): GetOutputParameterDesc SemanticIndex failed, got %u, expected %u\n",
                VAR_9, VAR_7.SemanticIndex, VAR_8->SemanticIndex);
        FUNC_1(VAR_7.Register == VAR_8->Register, "(%u): GetOutputParameterDesc Register failed, got %u, expected %u\n",
                VAR_9, VAR_7.Register, VAR_8->Register);
        FUNC_1(VAR_7.SystemValueType == VAR_8->SystemValueType, "(%u): GetOutputParameterDesc SystemValueType failed, got %x, expected %x\n",
                VAR_9, VAR_7.SystemValueType, VAR_8->SystemValueType);
        FUNC_1(VAR_7.ComponentType == VAR_8->ComponentType, "(%u): GetOutputParameterDesc ComponentType failed, got %x, expected %x\n",
                VAR_9, VAR_7.ComponentType, VAR_8->ComponentType);
        FUNC_1(VAR_7.Mask == VAR_8->Mask, "(%u): GetOutputParameterDesc Mask failed, got %x, expected %x\n",
                VAR_9, VAR_7.Mask, VAR_8->Mask);
        FUNC_1(VAR_7.ReadWriteMask == VAR_8->ReadWriteMask, "(%u): GetOutputParameterDesc ReadWriteMask failed, got %x, expected %x\n",
                VAR_9, VAR_7.ReadWriteMask, VAR_8->ReadWriteMask);
        FUNC_1(VAR_7.Stream == VAR_8->Stream, "(%u): GetOutputParameterDesc Stream failed, got %u, expected %u\n",
                VAR_9, VAR_7.Stream, VAR_8->ReadWriteMask);

        VAR_5 = VAR_6->lpVtbl->Release(VAR_6);
        FUNC_1(VAR_5 == 0, "(%u): Release failed %u\n", VAR_9, VAR_5);
    }
}
