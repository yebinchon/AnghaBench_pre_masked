
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __ms_va_list ;
typedef int WCHAR ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int const*,int ,int ,int *,int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,char*) ;
 int VAR_2 ;
 int FUNC_7 (int ,int ,int *,int,char*,int,int *,int *) ;
 int FUNC_8 (int ,int *,int,int*,int *) ;
 int FUNC_9 (int ,char*,int,int*,int ) ;

__attribute__((used)) static int FUNC_10(const WCHAR *VAR_3, __ms_va_list VAR_4)
{
    int VAR_5;
    DWORD VAR_6, VAR_7;
    WCHAR VAR_8[8192];

    VAR_5 = FUNC_1(VAR_1, VAR_3, 0, 0, VAR_8,
                          FUNC_0(VAR_8), &VAR_4);

    VAR_7 = FUNC_8(FUNC_4(VAR_2), VAR_8, VAR_5, &VAR_6, ((void*)0));
    if (!VAR_7)
    {
        DWORD VAR_9;
        char *VAR_10;





        VAR_9 = FUNC_7(FUNC_2(), 0, VAR_8, VAR_5,
            ((void*)0), 0, ((void*)0), ((void*)0));
        VAR_10 = FUNC_5(FUNC_3(), 0, VAR_9);
        if (!VAR_10)
            return 0;

        FUNC_7(FUNC_2(), 0, VAR_8, VAR_5, VAR_10, VAR_9,
            ((void*)0), ((void*)0));
        FUNC_9(FUNC_4(VAR_2), VAR_10, VAR_9, &VAR_6, VAR_0);
        FUNC_6(FUNC_3(), 0, VAR_10);
    }

    return VAR_6;
}
