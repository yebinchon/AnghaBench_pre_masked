
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * HSTRING_TABLE ;
typedef int DWORD ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int *,int ) ;
 int * FUNC_6 (int *,int) ;
 int * VAR_0 ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(void)
{
    HSTRING_TABLE VAR_1;
    WCHAR *VAR_2;
    DWORD VAR_3, VAR_4;

    VAR_1 = FUNC_4();
    FUNC_1(VAR_1 != ((void*)0), "Failed to Initialize String Table\n");

    VAR_3 = FUNC_2(VAR_1, VAR_0, 0);
    FUNC_1(VAR_3 != -1, "failed to add 'string' to string table\n");


    VAR_4 = FUNC_5(VAR_1, VAR_0, 0);
    FUNC_1(VAR_4 == VAR_3, "got %d and %d\n", VAR_4, VAR_3);

    VAR_2 = FUNC_6(VAR_1, VAR_4);
    FUNC_1(VAR_2 != ((void*)0), "failed to lookup string %d\n", VAR_4);
    FUNC_1(!FUNC_0(VAR_0, VAR_2), "got %s, expected %s\n", FUNC_7(VAR_2), FUNC_7(VAR_0));

    FUNC_3(VAR_1);
}
