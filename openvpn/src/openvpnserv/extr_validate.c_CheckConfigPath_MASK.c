
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * config_dir; } ;
typedef TYPE_1__ settings_t ;
typedef int WCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int *,int,int *,int) ;
 scalar_t__ FUNC_2 (int const*) ;
 int FUNC_3 (char*) ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,char*,int const*,int const*) ;
 int FUNC_6 (int const*) ;
 scalar_t__ FUNC_7 (int const*,int const*,int) ;
 int * FUNC_8 (int const*,char*) ;

__attribute__((used)) static BOOL
FUNC_9(const WCHAR *VAR_5, const WCHAR *VAR_6, const settings_t *VAR_7)
{
    WCHAR VAR_8[VAR_2];
    const WCHAR *VAR_9 = ((void*)0);
    const WCHAR *VAR_10 = ((void*)0);

    WCHAR VAR_11[VAR_2];



    if (FUNC_2(VAR_6) )
    {
        FUNC_5(VAR_8, FUNC_4(VAR_8), L"%s\\%s", VAR_5, VAR_6);
        VAR_9 = VAR_8;
    }
    else
    {
        VAR_9 = VAR_6;
    }




    if (FUNC_1(VAR_0, 0, VAR_7->config_dir, -1, VAR_11, VAR_2) == 0)
    {
        FUNC_0(VAR_3, FUNC_3("Failed to convert config_dir name to WideChar"));
        return VAR_1;
    }
    VAR_10 = VAR_11;


    if (FUNC_7(VAR_10, VAR_9, FUNC_6(VAR_10)) == 0
        && FUNC_8(VAR_9 + FUNC_6(VAR_10), L"..") == ((void*)0))
    {
        return VAR_4;
    }

    return VAR_1;
}
