
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property_test {scalar_t__ vt; int prop; } ;
typedef int VARIANT ;
typedef int IDxDiagContainer ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (int *,scalar_t__*) ;
 scalar_t__ FUNC_1 (int *,int ,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,char*,int,...) ;
 int FUNC_7 (char*,scalar_t__,int ) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(IDxDiagContainer *VAR_1, const struct property_test *VAR_2, size_t VAR_3)
{
    HRESULT VAR_4;


    if (VAR_3 == 0)
    {
        DWORD VAR_5;

        VAR_4 = FUNC_0(VAR_1, &VAR_5);
        FUNC_6(VAR_4 == VAR_0, "Expected IDxDiagContainer::GetNumberOfProps to return S_OK, got 0x%08x\n", VAR_4);
        if (VAR_4 == VAR_0)
            FUNC_6(VAR_5 == 0, "Expected container property count to be zero, got %u\n", VAR_5);
    }
    else
    {
        VARIANT VAR_6;
        int VAR_7;

        FUNC_4(&VAR_6);


        for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
        {
            VAR_4 = FUNC_1(VAR_1, VAR_2[VAR_7].prop, &VAR_6);
            FUNC_6(VAR_4 == VAR_0, "[%d] Expected IDxDiagContainer::GetProp to return S_OK for %s, got 0x%08x\n",
               VAR_7, FUNC_8(VAR_2[VAR_7].prop), VAR_4);

            if (VAR_4 == VAR_0)
            {
                FUNC_6(FUNC_2(&VAR_6) == VAR_2[VAR_7].vt,
                   "[%d] Expected variant type %d, got %d\n", VAR_7, VAR_2[VAR_7].vt, FUNC_2(&VAR_6));
                FUNC_7("%s = %s\n", FUNC_8(VAR_2[VAR_7].prop), FUNC_5(&VAR_6));
                FUNC_3(&VAR_6);
            }
        }
    }
}
