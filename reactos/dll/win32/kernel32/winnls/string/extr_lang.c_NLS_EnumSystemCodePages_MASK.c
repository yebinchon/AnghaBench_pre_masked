
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int szValue ;
typedef int szNumberA ;
typedef int szNumber ;
typedef int WCHAR ;
typedef scalar_t__ ULONG ;
struct TYPE_3__ {int dwFlags; scalar_t__ (* procA ) (char*) ;scalar_t__ (* procW ) (int *) ;} ;
typedef scalar_t__ HANDLE ;
typedef TYPE_1__ ENUMSYSTEMCODEPAGES_CALLBACKS ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,int *,int,int *,int) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,int *,int,char*,int,int ,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static BOOL FUNC_9(ENUMSYSTEMCODEPAGES_CALLBACKS *VAR_6)
{
    WCHAR VAR_7[5 + 1], VAR_8[VAR_4];
    HANDLE VAR_9;
    BOOL VAR_10 = VAR_5;
    ULONG VAR_11 = 0;

    if (!VAR_6)
    {
        FUNC_3(VAR_2);
        return VAR_3;
    }

    switch (VAR_6->dwFlags)
    {
        case 129:
        case 128:
            break;
        default:
            FUNC_3(VAR_1);
            return VAR_3;
    }

    VAR_9 = FUNC_1(0, L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\NLS\\CodePage");
    if (!VAR_9)
    {
        FUNC_4("NLS_RegOpenKey() failed\n");
        return VAR_3;
    }

    while (VAR_10)
    {
        if (FUNC_0(VAR_9, VAR_11, VAR_7, sizeof(VAR_7),
                             VAR_8, sizeof(VAR_8)))
        {
            if ((VAR_6->dwFlags == 128)||
                ((VAR_6->dwFlags == 129)&&(FUNC_8(VAR_8) > 2)))
            {
                if (VAR_6->procW)
                {
                    VAR_10 = VAR_6->procW(VAR_7);
                }
                else
                {
                    char VAR_12[sizeof(VAR_7)/sizeof(WCHAR)];

                    FUNC_5(VAR_0, 0, VAR_7, -1, VAR_12, sizeof(VAR_12), 0, 0);
                    VAR_10 = VAR_6->procA(VAR_12);
                }
            }

            VAR_11++;

        } else VAR_10 = VAR_3;

        if (!VAR_10)
            break;
    }

    if (VAR_9)
        FUNC_2(VAR_9);

    return VAR_5;
}
