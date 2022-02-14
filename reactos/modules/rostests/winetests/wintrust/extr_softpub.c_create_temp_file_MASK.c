
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int temp_path ;
typedef char WCHAR ;
typedef int HANDLE ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int ,int *,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char*,char const*,int ,char*) ;
 scalar_t__ FUNC_2 (int,char*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static HANDLE FUNC_3(WCHAR *VAR_6)
{
    HANDLE VAR_7 = VAR_4;
    WCHAR VAR_8[VAR_5];

    if (FUNC_2(sizeof(VAR_8) / sizeof(VAR_8[0]), VAR_8))
    {
        static const WCHAR VAR_9[] = { 'i','m','g',0 };

        if (FUNC_1(VAR_8, VAR_9, 0, VAR_6))
            VAR_7 = FUNC_0(VAR_6, VAR_2 | VAR_3, 0, ((void*)0),
             VAR_0, VAR_1, ((void*)0));
    }
    return VAR_7;
}
