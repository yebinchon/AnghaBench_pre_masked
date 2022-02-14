
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pref ;
typedef int WCHAR ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int,int,int*,int *,int*) ;
 int FUNC_2 (int,int,int,int *) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static void FUNC_4(void)
{
    DWORD VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6 = 0;
    WCHAR VAR_7[256];

    VAR_2 = 3;
    VAR_3 = 0;
    VAR_1 = FUNC_1(VAR_2, VAR_3, ((void*)0), ((void*)0), ((void*)0));
    FUNC_0(VAR_1 == 0, "expected ret == 0, got %u\n", VAR_1);

    VAR_5 = 0;
    VAR_1 = FUNC_1(VAR_2, VAR_3, &VAR_5, ((void*)0), ((void*)0));
    FUNC_0(VAR_1 == 0, "expected ret == 0, got %u\n", VAR_1);

    FUNC_3("template %u\n", VAR_5);

    if(VAR_5 == VAR_0) {
        VAR_6 = sizeof(VAR_7)/sizeof(WCHAR);
        VAR_1 = FUNC_1(VAR_2, VAR_3, &VAR_5, VAR_7, &VAR_6);
        FUNC_0(VAR_1 == 0, "expected ret == 0, got %u\n", VAR_1);
    }

    VAR_4 = 5;
    VAR_1 = FUNC_2(VAR_2, VAR_3, VAR_4, ((void*)0));
    FUNC_0(VAR_1 == 0, "expected ret == 0, got %u\n", VAR_1);

    VAR_4 = 0;
    VAR_1 = FUNC_1(VAR_2, VAR_3, &VAR_4, ((void*)0), ((void*)0));
    FUNC_0(VAR_1 == 0, "expected ret == 0, got %u\n", VAR_1);
    FUNC_0(VAR_4 == 5, "expected template == 5, got %u\n", VAR_4);

    VAR_4 = 5;
    VAR_1 = FUNC_2(VAR_2, VAR_3, VAR_5, VAR_6 ? VAR_7 : ((void*)0));
    FUNC_0(VAR_1 == 0, "expected ret == 0, got %u\n", VAR_1);
}
