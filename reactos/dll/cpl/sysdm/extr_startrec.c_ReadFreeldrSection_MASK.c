
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int szValue ;
typedef int szName ;
typedef int WCHAR ;
struct TYPE_4__ {int BootType; int szOptions; int szBootPath; int szSectionName; } ;
typedef TYPE_1__* PBOOTRECORD ;
typedef int INFCONTEXT ;
typedef int HINF ;
typedef int DWORD ;
typedef int BOOTRECORD ;


 int FUNC_0 () ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 int FUNC_2 (int ,int *,int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int,int *,int,int *) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static PBOOTRECORD
FUNC_7(HINF VAR_2, WCHAR *VAR_3)
{
    PBOOTRECORD VAR_4;
    INFCONTEXT VAR_5;
    WCHAR VAR_6[VAR_1];
    WCHAR VAR_7[VAR_1];
    DWORD VAR_8;

    if (!FUNC_2(VAR_2,
                            VAR_3,
                            ((void*)0),
                            &VAR_5))
    {

        return ((void*)0);
    }

    VAR_4 = FUNC_1(FUNC_0(), VAR_0, sizeof(BOOTRECORD));
    if (VAR_4 == ((void*)0))
    {
        return ((void*)0);
    }

    FUNC_6(VAR_4->szSectionName, VAR_3);

    do
    {
        if (!FUNC_4(&VAR_5,
                                  0,
                                  VAR_6,
                                  sizeof(VAR_6) / sizeof(WCHAR),
                                  &VAR_8))
        {
            break;
        }

        if (!FUNC_4(&VAR_5,
                                  1,
                                  VAR_7,
                                  sizeof(VAR_7) / sizeof(WCHAR),
                                  &VAR_8))
        {
            break;
        }

        if (!FUNC_5(VAR_6, L"BootType", 8))
        {
            if (!FUNC_5(VAR_7, L"ReactOS", 7))
            {

                VAR_4->BootType = 1;
            }
            else
            {
                VAR_4->BootType = 0;
            }
        }
        else if (!FUNC_5(VAR_6, L"SystemPath", 10))
        {
            FUNC_6(VAR_4->szBootPath, VAR_7);
        }
        else if (!FUNC_5(VAR_6, L"Options", 7))
        {

            FUNC_6(VAR_4->szOptions, VAR_7);
        }

    }
    while (FUNC_3(&VAR_5, &VAR_5));

    return VAR_4;
}
