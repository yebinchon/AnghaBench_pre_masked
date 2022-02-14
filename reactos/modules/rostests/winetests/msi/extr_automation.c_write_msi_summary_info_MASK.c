
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int szValue; int pftValue; int iValue; int datatype; int property; } ;
typedef TYPE_1__ msi_summary_info ;
typedef scalar_t__ UINT ;
typedef int MSIHANDLE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *,int,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(MSIHANDLE VAR_1, const msi_summary_info *VAR_2, int VAR_3)
{
    MSIHANDLE VAR_4;
    UINT VAR_5;
    int VAR_6;

    VAR_5 = FUNC_1(VAR_1, ((void*)0), VAR_3, &VAR_4);
    FUNC_4(VAR_5 == VAR_0, "Expected ERROR_SUCCESS, got %u\n", VAR_5);


    for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
    {
        const msi_summary_info *VAR_7 = &VAR_2[VAR_6];

        VAR_5 = FUNC_3(VAR_4, VAR_7->property, VAR_7->datatype,
                                       VAR_7->iValue, VAR_7->pftValue, VAR_7->szValue);
        FUNC_4(VAR_5 == VAR_0, "Expected ERROR_SUCCESS, got %u\n", VAR_5);
    }


    VAR_5 = FUNC_2(VAR_4);
    FUNC_4(VAR_5 == VAR_0, "Expected ERROR_SUCCESS, got %u\n", VAR_5);

    FUNC_0(VAR_4);
}
