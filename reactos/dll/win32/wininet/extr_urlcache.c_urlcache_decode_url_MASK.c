
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uc ;
typedef int WCHAR ;
struct TYPE_4__ {int dwStructSize; int dwHostNameLength; scalar_t__ nScheme; char const* lpszHostName; } ;
typedef TYPE_1__ URL_COMPONENTSA ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int *,int,int *,int) ;
 int FUNC_1 (char const*,int ,int ,TYPE_1__*) ;
 int FUNC_2 (int ,int ,char const*,int,int *,int) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_7(const char *VAR_5, WCHAR *VAR_6, int VAR_7)
{
    URL_COMPONENTSA VAR_8;
    DWORD VAR_9, VAR_10;
    WCHAR *VAR_11;

    FUNC_6(&VAR_8, 0, sizeof(VAR_8));
    VAR_8.dwStructSize = sizeof(VAR_8);
    VAR_8.dwHostNameLength = 1;
    if(!FUNC_1(VAR_5, 0, 0, &VAR_8))
        VAR_8.nScheme = VAR_4;

    if(VAR_8.nScheme!=VAR_2 && VAR_8.nScheme!=VAR_3)
        return FUNC_2(VAR_0, 0, VAR_5, -1, VAR_6, VAR_7);

    if(!VAR_6)
        VAR_7 = 0;

    VAR_9 = FUNC_2(VAR_0, 0, VAR_5, VAR_8.lpszHostName-VAR_5, VAR_6, VAR_7);
    if(!VAR_9)
        return 0;
    if(VAR_6)
        VAR_7 -= VAR_9;

    VAR_11 = FUNC_4(VAR_8.dwHostNameLength*sizeof(WCHAR));
    if(!VAR_11)
        return 0;
    if(!FUNC_2(VAR_0, 0, VAR_8.lpszHostName, VAR_8.dwHostNameLength,
                VAR_11, VAR_8.dwHostNameLength)) {
        FUNC_5(VAR_11);
        return 0;
    }
    VAR_10 = FUNC_0(0, VAR_11, VAR_8.dwHostNameLength,
            VAR_6 ? VAR_6+VAR_9 : ((void*)0), VAR_7);
    FUNC_5(VAR_11);
    if(!VAR_10) {
        FUNC_3(VAR_1);
        return 0;
    }
    VAR_9 += VAR_10;
    if(VAR_6)
        VAR_7 -= VAR_10;

    VAR_10 = FUNC_2(VAR_0, 0,
            VAR_8.lpszHostName+VAR_8.dwHostNameLength,
            -1, VAR_6 ? VAR_6+VAR_9 : ((void*)0), VAR_7);
    if(!VAR_10)
        return 0;
    VAR_9 += VAR_10;

    return VAR_9;
}
