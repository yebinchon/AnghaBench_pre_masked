
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef scalar_t__ WCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int,char*,int ,char const*,int) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 char* FUNC_3 (int ,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int ,scalar_t__ const*,int,char*,int,int *,int *) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static BOOL FUNC_8(const WCHAR * VAR_6, const char * VAR_7, char ** VAR_8)
{
    const WCHAR * VAR_9 = VAR_6;
    int VAR_10, VAR_11, VAR_12;
    char VAR_13[256];

    if (!VAR_6 || !VAR_7 || !VAR_8) return VAR_2;

    VAR_11 = FUNC_7(VAR_7);
    do
    {
        if (!FUNC_4( VAR_0, 0, VAR_9, -1, VAR_13, sizeof(VAR_13), ((void*)0), ((void*)0) )) VAR_13[sizeof(VAR_13)-1] = 0;
        VAR_10 = FUNC_7(VAR_13);
        if (FUNC_0(FUNC_2(), VAR_4|VAR_3, VAR_13, FUNC_6(VAR_10, VAR_11), VAR_7, VAR_11) == VAR_1)
        {
            if (VAR_13[VAR_11] == '=')
            {
                VAR_12 = FUNC_7(VAR_13);
                *VAR_8 = FUNC_3(FUNC_1(), 0, VAR_12 + 1);
                if (!*VAR_8) return VAR_2;
                FUNC_5(*VAR_8, VAR_13, VAR_12 + 1);
                return VAR_5;
            }
        }
        while (*VAR_9) VAR_9++;
        VAR_9++;
    } while (*VAR_9);
    return VAR_2;
}
