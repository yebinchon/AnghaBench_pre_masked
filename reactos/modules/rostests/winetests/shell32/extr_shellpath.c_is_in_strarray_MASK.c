
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,char const*,int,int *,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *,int const*) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 scalar_t__ FUNC_5 (char const*) ;

__attribute__((used)) static BOOL FUNC_6(const WCHAR *VAR_4, const char *VAR_5)
{
    WCHAR VAR_6[VAR_2];

    if(!VAR_4 && !VAR_5)
        return VAR_3;

    while(VAR_5 && *VAR_5)
    {
        DWORD VAR_7;

        if(FUNC_4(VAR_5, "(null)") == 0 && !VAR_4)
            return VAR_3;

        VAR_7 = FUNC_1(VAR_0, 0, VAR_5, -1, VAR_6, FUNC_0(VAR_6));
        if(VAR_7 == 0)
        {
            FUNC_3(0, "Failed to convert string\n");
            return VAR_1;
        }

        if(FUNC_2(VAR_6, VAR_4) == 0)
            return VAR_3;

        VAR_5 += FUNC_5(VAR_5) + 1;
    }

    return VAR_1;
}
