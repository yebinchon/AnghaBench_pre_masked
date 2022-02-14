
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int nf ;
typedef int WCHAR ;
typedef size_t UINT ;
struct TYPE_4__ {int* lpDecimalSep; int* lpThousandSep; int Grouping; } ;
typedef TYPE_1__ NUMBERFMTW ;
typedef int LPWSTR ;
typedef char* LONGLONG ;
typedef size_t INT ;


 size_t FUNC_0 (int ,int ,int*,int ) ;
 size_t FUNC_1 (int ,int ,int*,TYPE_1__*,int ,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*,char*,char*) ;

UINT
FUNC_5(LONGLONG VAR_4, LPWSTR VAR_5, UINT VAR_6)
{
    WCHAR VAR_7[24];
    WCHAR VAR_8[8], VAR_9[8];
    NUMBERFMTW VAR_10;
    WCHAR VAR_11[12];
    INT VAR_12;
    INT VAR_13;
    INT VAR_14;


    FUNC_4(VAR_7, L"%I64u", VAR_4);


    FUNC_0(VAR_3, VAR_0, VAR_8, FUNC_3(VAR_8));
    FUNC_0(VAR_3, VAR_2, VAR_9, FUNC_3(VAR_9));


    FUNC_2(&VAR_10, sizeof(VAR_10));
    VAR_10.lpDecimalSep = VAR_8;
    VAR_10.lpThousandSep = VAR_9;


    VAR_12 = FUNC_0(VAR_3,
                                 VAR_1,
                                 VAR_11,
                                 FUNC_3(VAR_11));


    for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++)
    {
        WCHAR VAR_15 = VAR_11[VAR_14];

        if (VAR_15 >= L'0' && VAR_15 <= L'9')
            VAR_10.Grouping = VAR_10.Grouping * 10 + (VAR_15 - L'0');
        else if (VAR_15 != L';')
            break;
    }

    if ((VAR_10.Grouping % 10) == 0)
        VAR_10.Grouping /= 10;
    else
        VAR_10.Grouping *= 10;


    VAR_13 = FUNC_1(VAR_3,
                                 0,
                                 VAR_7,
                                 &VAR_10,
                                 VAR_5,
                                 VAR_6);

    if (!VAR_13)
        return 0;


    return VAR_13 - 1;
}
