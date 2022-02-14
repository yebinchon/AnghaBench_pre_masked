
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PROPSHEETHEADER ;
typedef int * (* PCreateNetIDPropertyPage ) () ;
typedef int LPARAM ;
typedef int * HPROPSHEETPAGE ;
typedef int * HMODULE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static HMODULE
FUNC_6(PROPSHEETHEADER *VAR_0)
{
    HPROPSHEETPAGE VAR_1;
    HMODULE VAR_2;
    PCreateNetIDPropertyPage VAR_3;

    VAR_2 = FUNC_3(FUNC_5("netid.dll"));
    if (VAR_2 != ((void*)0))
    {
        VAR_3 = (PCreateNetIDPropertyPage)FUNC_2(VAR_2,
                                                                    "CreateNetIDPropertyPage");
        if (VAR_3 != ((void*)0))
        {
            VAR_1 = VAR_3();
            if (VAR_1 == ((void*)0))
                goto Fail;

            if (!FUNC_4(VAR_1, (LPARAM)VAR_0))
            {
                FUNC_0(VAR_1);
                goto Fail;
            }
        }
        else
        {
Fail:
            FUNC_1(VAR_2);
            VAR_2 = ((void*)0);
        }
    }

    return VAR_2;
}
