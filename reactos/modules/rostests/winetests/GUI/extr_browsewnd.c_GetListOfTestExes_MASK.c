
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dwFileAttributes; int cFileName; } ;
typedef TYPE_1__ WIN32_FIND_DATAW ;
typedef int WCHAR ;
struct TYPE_7__ {int* lpExeList; } ;
typedef TYPE_2__* PMAIN_WND_INFO ;
typedef int* LPWSTR ;
typedef int INT ;
typedef scalar_t__ HANDLE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (scalar_t__,TYPE_1__*) ;
 int FUNC_3 (int,int*) ;
 int FUNC_4 () ;
 int FUNC_5 (int*) ;
 int FUNC_6 () ;
 int* FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,int*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int* FUNC_9 (int*,int) ;
 int FUNC_10 (int*,int*) ;
 int FUNC_11 (int*) ;
 int FUNC_12 (int*,int ,int) ;

__attribute__((used)) static INT
FUNC_13(PMAIN_WND_INFO VAR_4)
{
    HANDLE VAR_5;
    WIN32_FIND_DATAW VAR_6;
    WCHAR VAR_7[VAR_3];
    LPWSTR VAR_8;
    INT VAR_9 = 0;
    INT VAR_10;

    VAR_10 = FUNC_3(VAR_3, VAR_7);
    if (!VAR_10) return 0;

    FUNC_12(VAR_7, VAR_0, VAR_3 - (VAR_10 + 1));

    VAR_9 = FUNC_5(VAR_7);
    if (!VAR_9) return 0;

    VAR_4->lpExeList = FUNC_7(FUNC_6(),
                                 0,
                                 VAR_9 * (VAR_3 * sizeof(WCHAR)));
    if (!VAR_4->lpExeList)
        return 0;

    VAR_5 = FUNC_1(VAR_7,
                           &VAR_6);
    if (VAR_5 == VAR_2)
    {
        FUNC_0(FUNC_4());
        FUNC_8(FUNC_6(), 0, VAR_4->lpExeList);
        return 0;
    }


    VAR_8 = FUNC_9(VAR_7, L'*');
    if (VAR_8)
        *VAR_8 = L'\0';


    VAR_8 = VAR_4->lpExeList;

    do
    {
        if (!(VAR_6.dwFileAttributes & VAR_1))
        {

            FUNC_10(VAR_8, VAR_7);


            VAR_10 = VAR_3 - (FUNC_11(VAR_8) + 1);
            FUNC_12(VAR_8, VAR_6.cFileName, VAR_10);


            VAR_8 += VAR_3;
        }
    } while (FUNC_2(VAR_5, &VAR_6) != 0);

    return VAR_9;
}
