
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
typedef int HPDF_UINT ;
typedef int HPDF_STATUS ;
typedef int HPDF_Outline ;
typedef TYPE_1__* HPDF_Number ;
typedef scalar_t__ HPDF_Dict ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,char*,int) ;
 int FUNC_2 (scalar_t__,char*,int ) ;
 int FUNC_3 (scalar_t__,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static HPDF_STATUS
FUNC_6 (HPDF_Dict VAR_2)
{
    HPDF_Number VAR_3 = (HPDF_Number)FUNC_2 (VAR_2, "Count",
                VAR_0);
    HPDF_UINT VAR_4 = FUNC_0 ((HPDF_Outline)VAR_2);

    FUNC_5((" BeforeWrite\n"));

    if (VAR_4 == 0 && VAR_3)
        return FUNC_3 (VAR_2, "Count");

    if (!FUNC_4 ((HPDF_Outline)VAR_2))
        VAR_4 = VAR_4 * -1;

    if (VAR_3)
        VAR_3->value = VAR_4;
    else
        if (VAR_4)
            return FUNC_1 (VAR_2, "Count", VAR_4);

    return VAR_1;
}
