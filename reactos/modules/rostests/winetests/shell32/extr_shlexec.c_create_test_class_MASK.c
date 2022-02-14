
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPBYTE ;
typedef int LONG ;
typedef int HKEY ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char const*,int ,int *,int ,int,int *,int *,int *) ;
 int FUNC_2 (int ,char*,int ,int ,int ,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int,char*,char const*,...) ;

__attribute__((used)) static BOOL FUNC_4(const char* VAR_8, BOOL VAR_9)
{
    HKEY VAR_10, VAR_11;
    LONG VAR_12;

    VAR_12 = FUNC_1(VAR_3, VAR_8, 0, ((void*)0), 0,
                         VAR_4 | VAR_5, ((void*)0),
                         &VAR_10, ((void*)0));
    FUNC_3(VAR_12 == VAR_1 || VAR_12 == VAR_0,
       "could not create class %s (rc=%d)\n", VAR_8, VAR_12);
    if (VAR_12 != VAR_1)
        return VAR_2;

    if (VAR_9)
    {
        VAR_12 = FUNC_2(VAR_10, "URL Protocol", 0, VAR_6, (LPBYTE)"", 1);
        FUNC_3(VAR_12 == VAR_1, "RegSetValueEx '%s' failed, expected ERROR_SUCCESS, got %d\n", VAR_8, VAR_12);
    }

    VAR_12 = FUNC_1(VAR_10, "shell", 0, ((void*)0), 0,
                         VAR_4, ((void*)0), &VAR_11, ((void*)0));
    FUNC_3(VAR_12 == VAR_1, "RegCreateKeyEx 'shell' failed, expected ERROR_SUCCESS, got %d\n", VAR_12);

    FUNC_0(VAR_10);
    FUNC_0(VAR_11);
    return VAR_7;
}
