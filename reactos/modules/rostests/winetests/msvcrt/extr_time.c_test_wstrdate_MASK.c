
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (char*,char*,int*,int*,int*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    wchar_t VAR_0[16], * VAR_1;
    int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;
    wchar_t VAR_7[] = { '%','0','2','d','/','%','0','2','d','/','%','0','2','d',0 };

    VAR_1 = FUNC_0(VAR_0);
    FUNC_1(VAR_1 == VAR_0, "Wrong return value\n");
    VAR_6 = FUNC_3(VAR_0);
    FUNC_1(VAR_6 == 8, "Wrong length: returned %d, should be 8\n", VAR_6);
    VAR_5 = FUNC_2(VAR_0, VAR_7, &VAR_2, &VAR_3, &VAR_4);
    FUNC_1(VAR_5 == 3, "Wrong format: count = %d, should be 3\n", VAR_5);
}
