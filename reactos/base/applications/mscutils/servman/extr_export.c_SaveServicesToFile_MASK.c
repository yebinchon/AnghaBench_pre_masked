
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int newl ;
typedef int WCHAR ;
struct TYPE_4__ {int hListView; } ;
typedef TYPE_1__* PMAIN_WND_INFO ;
typedef int LPCWSTR ;
typedef scalar_t__ INT ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,int*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (scalar_t__,int*,int,int*,int *) ;

__attribute__((used)) static BOOL
FUNC_5(PMAIN_WND_INFO VAR_6,
                   LPCWSTR VAR_7)
{
    HANDLE VAR_8;
    BOOL VAR_9 = VAR_1;

    VAR_8 = FUNC_1(VAR_7,
                       VAR_3,
                       0,
                       ((void*)0),
                       VAR_0,
                       VAR_2,
                       ((void*)0));

    if(VAR_8 != VAR_4)
    {
        WCHAR VAR_10[500];
        WCHAR VAR_11[2] = {L'\r', L'\n'};
        WCHAR VAR_12 = L'\t';
        DWORD VAR_13, VAR_14;
        INT VAR_15 = 0;
        INT VAR_16, VAR_17;

        VAR_15 = FUNC_3(VAR_6->hListView);

        for (VAR_16=0; VAR_16 < VAR_15; VAR_16++)
        {
            for (VAR_17=0; VAR_17<5; VAR_17++)
            {
                VAR_13 = FUNC_2(VAR_6,
                                                   VAR_10,
                                                   VAR_16,
                                                   VAR_17);
                if (VAR_13 != 0)
                {
                    FUNC_4(VAR_8,
                              VAR_10,
                              sizeof(WCHAR) * VAR_13,
                              &VAR_14,
                              ((void*)0));

                    FUNC_4(VAR_8,
                              &VAR_12,
                              sizeof(WCHAR),
                              &VAR_14,
                              ((void*)0));
                }
            }
            FUNC_4(VAR_8,
                      VAR_11,
                      sizeof(VAR_11),
                      &VAR_14,
                      ((void*)0));
        }

        FUNC_0(VAR_8);
        VAR_9 = VAR_5;
    }

    return VAR_9;
}
