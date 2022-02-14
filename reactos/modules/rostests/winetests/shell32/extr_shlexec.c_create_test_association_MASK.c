
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPBYTE ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ,char const*,int ,int *,int ,int ,int *,int *,int *) ;
 scalar_t__ FUNC_2 (int ,int *,int ,int ,int ,scalar_t__) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int,char*,char*,scalar_t__) ;
 int FUNC_5 (char*,char*,char const*) ;
 scalar_t__ FUNC_6 (char*) ;

__attribute__((used)) static BOOL FUNC_7(const char* VAR_7)
{
    HKEY VAR_8;
    char VAR_9[VAR_5];
    LONG VAR_10;

    FUNC_5(VAR_9, "shlexec%s", VAR_7);
    VAR_10=FUNC_1(VAR_3, VAR_7, 0, ((void*)0), 0, VAR_4,
                       ((void*)0), &VAR_8, ((void*)0));
    FUNC_4(VAR_10 == VAR_1 || VAR_10 == VAR_0,
       "could not create association %s (rc=%d)\n", VAR_9, VAR_10);
    if (VAR_10 != VAR_1)
        return VAR_2;

    VAR_10=FUNC_2(VAR_8, ((void*)0), 0, VAR_6, (LPBYTE) VAR_9, FUNC_6(VAR_9)+1);
    FUNC_4(VAR_10==VAR_1, "RegSetValueEx '%s' failed, expected ERROR_SUCCESS, got %d\n", VAR_9, VAR_10);
    FUNC_0(VAR_8);

    return FUNC_3(VAR_9, VAR_2);
}
