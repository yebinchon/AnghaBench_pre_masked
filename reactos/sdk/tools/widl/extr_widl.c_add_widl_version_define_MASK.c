
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int version_str ;


 char* VAR_0 ;
 unsigned int FUNC_0 (char const*) ;
 int FUNC_1 (char*,int,char*,unsigned int) ;
 char* FUNC_2 (char const*,char) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    unsigned int VAR_1;
    const char *VAR_2 = VAR_0;


    VAR_1 = FUNC_0(VAR_2) * 0x10000;
    VAR_2 = FUNC_2(VAR_2, '.');


    if (VAR_2)
    {
        VAR_1 += FUNC_0(VAR_2 + 1) * 0x100;
        VAR_2 = FUNC_2(VAR_2 + 1, '.');
    }


    if (VAR_2)
        VAR_1 += FUNC_0(VAR_2 + 1);

    if (VAR_1 != 0)
    {
        char VAR_3[11];
        FUNC_1(VAR_3, sizeof(VAR_3), "0x%x", VAR_1);
        FUNC_3("__WIDL__", VAR_3);
    }
    else
        FUNC_3("__WIDL__", ((void*)0));
}
