
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int m_Name; int m_ClsID; } ;
typedef int OLECHAR ;
typedef int LPCWSTR ;
typedef scalar_t__ LONG ;
typedef int HRESULT ;
typedef int HKEY ;
typedef TYPE_1__ FactoryTemplate ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int *,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static HRESULT FUNC_7(const FactoryTemplate * VAR_7, int VAR_8,
                                       LPCWSTR VAR_9, BOOL VAR_10)
{
    HRESULT VAR_11 = VAR_3;
    HKEY VAR_12;
    OLECHAR VAR_13[VAR_0];
    LONG VAR_14, VAR_15 = FUNC_2(VAR_2, VAR_4, &VAR_12);
    if (VAR_1 != VAR_15)
        return FUNC_0(VAR_15);

    for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++, VAR_7++)
    {

        VAR_11 = FUNC_6(VAR_7->m_ClsID, VAR_13, VAR_0);
        if (FUNC_4(VAR_11))
        {
            if (VAR_10 )
                VAR_11 = FUNC_5(VAR_12, VAR_13,
                                        VAR_7->m_Name, VAR_9,
                                        VAR_5, VAR_6);
            else
                VAR_11 = FUNC_3(VAR_12, VAR_13);
        }
    }
    FUNC_1(VAR_12);
    return VAR_11;
}
