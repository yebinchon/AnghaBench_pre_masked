
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_6__ {int wMinorVerNum; int wMajorVerNum; int guid; } ;
struct TYPE_5__ {int guid; } ;
typedef TYPE_1__ TYPEATTR ;
typedef TYPE_2__ TLIBATTR ;
typedef int OLECHAR ;
typedef char* LPOLESTR ;
typedef int HKEY ;
typedef int DWORD ;
typedef int const BYTE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char*,int ,int *,int ,int,int *,int *,int *) ;
 int FUNC_2 (int ,char const*,int ,int ,int const*,int) ;
 int FUNC_3 (int *,char*,int) ;
 char* VAR_6 ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (char*,char const*,int ,int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(TLIBATTR *VAR_7, LPOLESTR VAR_8, TYPEATTR *VAR_9, DWORD VAR_10)
{
    WCHAR VAR_11[60];
    HKEY VAR_12, VAR_13;

    static const WCHAR VAR_14[] = {'{','0','0','0','2','0','4','2','4','-',
                                 '0','0','0','0','-','0','0','0','0','-','C','0','0','0','-',
                                 '0','0','0','0','0','0','0','0','0','0','4','6','}',0};

    FUNC_4( &VAR_9->guid, VAR_11 );
    if (FUNC_1(VAR_1, VAR_11, 0, ((void*)0), 0,
                        VAR_2 | VAR_10, ((void*)0), &VAR_12, ((void*)0)) == VAR_0)
    {
        if (VAR_8)
            FUNC_2(VAR_12, ((void*)0), 0, VAR_5,
                           (BYTE *)VAR_8, (FUNC_6(VAR_8)+1) * sizeof(OLECHAR));

        if (FUNC_1(VAR_12, VAR_4, 0, ((void*)0), 0,
            VAR_2 | VAR_10, ((void*)0), &VAR_13, ((void*)0)) == VAR_0) {
            FUNC_2(VAR_13, ((void*)0), 0, VAR_5,
                           (const BYTE *)VAR_14, sizeof VAR_14);
            FUNC_0(VAR_13);
        }

        if (FUNC_1(VAR_12, VAR_3, 0, ((void*)0), 0,
            VAR_2 | VAR_10, ((void*)0), &VAR_13, ((void*)0)) == VAR_0) {
            FUNC_2(VAR_13, ((void*)0), 0, VAR_5,
                           (const BYTE *)VAR_14, sizeof VAR_14);
            FUNC_0(VAR_13);
        }

        if (FUNC_1(VAR_12, VAR_6, 0, ((void*)0), 0,
            VAR_2 | VAR_10, ((void*)0), &VAR_13, ((void*)0)) == VAR_0)
        {
            WCHAR VAR_15[40];
            static const WCHAR VAR_16[] = {'%','x','.','%','x',0 };
            static const WCHAR VAR_17[] = {'V','e','r','s','i','o','n',0};

            FUNC_3(&VAR_7->guid, VAR_15, 40);
            FUNC_2(VAR_13, ((void*)0), 0, VAR_5,
                           (BYTE *)VAR_15, (FUNC_6(VAR_15)+1) * sizeof(WCHAR));
            FUNC_5(VAR_15, VAR_16, VAR_7->wMajorVerNum, VAR_7->wMinorVerNum);
            FUNC_2(VAR_13, VAR_17, 0, VAR_5,
                           (BYTE*)VAR_15, (FUNC_6(VAR_15)+1) * sizeof(WCHAR));
            FUNC_0(VAR_13);
        }

        FUNC_0(VAR_12);
    }
}
