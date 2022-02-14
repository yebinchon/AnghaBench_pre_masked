
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bufW ;
typedef int bufA ;
typedef char WCHAR ;


 scalar_t__ FUNC_0 (void*,char*,int) ;
 scalar_t__ FUNC_1 (void*,char*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int,char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    char VAR_2[VAR_0];
    WCHAR VAR_3[VAR_0];


    if (VAR_1)
    {
        VAR_3[0] = '*';
        FUNC_2(FUNC_1((void*)0xffffffff, VAR_3, sizeof(VAR_3) / sizeof(WCHAR)) == 0, "Unexpected success in module handle\n");
        FUNC_2(VAR_3[0] == '*', "When failing, buffer shouldn't be written to\n");
    }

    VAR_2[0] = '*';
    FUNC_2(FUNC_0((void*)0xffffffff, VAR_2, sizeof(VAR_2)) == 0, "Unexpected success in module handle\n");
    FUNC_2(VAR_2[0] == '*', "When failing, buffer shouldn't be written to\n");
}
