
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_8__ {int CodePageName; } ;
struct TYPE_7__ {int Flags; struct TYPE_7__* NextItem; int * Name; scalar_t__ CodePage; } ;
typedef int PINT ;
typedef TYPE_1__* PCPAGE ;
typedef int INFCONTEXT ;
typedef int HINF ;
typedef TYPE_2__ CPINFOEX ;
typedef int CPAGE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__,int ,TYPE_2__*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_1__* FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,TYPE_1__*) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_6 (int ,char*,int *,int *) ;
 int FUNC_7 (int ,int *,char*,int *) ;
 int FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *,int,int *,int,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (int *,int ) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *,char*,scalar_t__) ;

__attribute__((used)) static BOOL
FUNC_14(
    HINF VAR_6)
{
    WCHAR VAR_7[VAR_2];
    INFCONTEXT VAR_8, VAR_9;
    PCPAGE VAR_10;
    CPINFOEX VAR_11;
    UINT VAR_12;

    if (!FUNC_6(VAR_6,
                            L"CodePages",
                            ((void*)0),
                            &VAR_8))
        return VAR_1;

    for (;;)
    {
        if (FUNC_9(&VAR_8, 0, (PINT)&VAR_12))
        {
            VAR_10 = FUNC_4(FUNC_3(), 0, sizeof(CPAGE));
            if (VAR_10 == ((void*)0))
                return VAR_1;

            VAR_10->CodePage = VAR_12;
            VAR_10->Flags = 0;
            (VAR_10->Name)[0] = VAR_5;

            if (FUNC_1(VAR_12, 0, &VAR_11))
            {
                FUNC_11(VAR_10->Name, VAR_11.CodePageName);
            }
            else
            {
                FUNC_10(&VAR_8, 1, VAR_10->Name, VAR_2, ((void*)0));
            }

            if (FUNC_12(VAR_10->Name) != 0)
            {
                VAR_10->NextItem = VAR_3;
                VAR_3 = VAR_10;

                FUNC_13(VAR_7, L"CODEPAGE_REMOVE_%d", VAR_12);

                if ((VAR_12 == FUNC_0()) ||
                    (VAR_12 == FUNC_2()) ||
                    (!FUNC_7(VAR_6, VAR_7, L"AddReg", &VAR_9)))
                {
                    VAR_10->Flags |= VAR_0;
                }
            }
            else
            {
                FUNC_5(FUNC_3(), 0, VAR_10);
            }
        }

        if (!FUNC_8(&VAR_8, &VAR_8))
            break;
    }

    return VAR_4;
}
