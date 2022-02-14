
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPBYTE ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char const*,long,int ,int *) ;
 scalar_t__ FUNC_2 (int ,char const*,int *,scalar_t__*,int *,scalar_t__*) ;
 int VAR_4 ;
 char* FUNC_3 (scalar_t__) ;

BOOL FUNC_4(HKEY VAR_5, const char *VAR_6, const char *VAR_7, char **VAR_8)
{
    HKEY VAR_9;
    char *VAR_10 = ((void*)0);
    BOOL VAR_11 = VAR_1;
    LONG VAR_12 = FUNC_1(VAR_5,
                               VAR_6,
                               0L,

                               VAR_2,
                               &VAR_9);
    if (VAR_12 != VAR_0) {
        goto out;
    }

    DWORD VAR_13, VAR_14;
    VAR_12 = FUNC_2(VAR_9,
                             VAR_7,
                             ((void*)0),
                             &VAR_14,
                             ((void*)0),
                             &VAR_13);
    if (VAR_12 != VAR_0 || VAR_14 != VAR_3) {
        goto out;
    }

    VAR_10 = FUNC_3 (VAR_13 + 1);
    VAR_10[VAR_13] = 0;
    VAR_12 = FUNC_2(VAR_9,
                             VAR_7,
                             ((void*)0),
                             ((void*)0),
                             (LPBYTE) VAR_10,
                             &VAR_13);
    if (VAR_12 != VAR_0) {
        goto out;
    }

    *VAR_8 = VAR_10;
    VAR_11 = VAR_4;

out:
    FUNC_0(VAR_9);
    return VAR_11;
}
