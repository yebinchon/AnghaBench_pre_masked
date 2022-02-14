
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char TCHAR ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef size_t DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (char**,size_t*,size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int ,long,char*,size_t*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_5 (int ,char*,int *) ;
 scalar_t__ FUNC_6 (int ,int *,int *,int *,size_t*,size_t*,int *,int *,int *,int *,int *,int *) ;
 int VAR_4 ;
 size_t FUNC_7 (char*) ;

BOOL FUNC_8(HKEY VAR_5, TCHAR** VAR_6, DWORD* VAR_7)
{
    HKEY VAR_8;
    DWORD VAR_9;
    DWORD VAR_10;
    DWORD VAR_11;
    LONG VAR_12;
    long int VAR_13;

    if (FUNC_5(VAR_5, *VAR_6, &VAR_8) != VAR_2) {
        FUNC_0();
        return VAR_3;
    }


    if (FUNC_6(VAR_8, ((void*)0), ((void*)0), ((void*)0), &VAR_10, &VAR_9,
                        ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0)) != VAR_2) {
        FUNC_0();
        FUNC_2(VAR_8);
        return VAR_3;
    }
    VAR_11 = FUNC_7(*VAR_6);
    FUNC_1(VAR_6, VAR_7, VAR_9 + VAR_11 + 1);

    (*VAR_6)[VAR_11] = '\\';
    for (VAR_13 = VAR_10 - 1; VAR_13 >= 0; VAR_13--) {
        DWORD VAR_14 = *VAR_7 - VAR_11;
        VAR_12 = FUNC_4(VAR_8, VAR_13, *VAR_6 + VAR_11 + 1, &VAR_14, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
        if (VAR_12 != VAR_2 && VAR_12 != VAR_0 && VAR_12 != VAR_1) {
            FUNC_0();
            FUNC_2(VAR_8);
            return VAR_3;
        } else {
            FUNC_8(VAR_5, VAR_6, VAR_7);
        }
    }
    (*VAR_6)[VAR_11] = '\0';
    FUNC_2(VAR_8);
    FUNC_3(VAR_5, *VAR_6);
    return VAR_4;
}
