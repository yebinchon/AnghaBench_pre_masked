
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 scalar_t__ FUNC_0 (unsigned char*,char*,int) ;
 int FUNC_1 (unsigned char*,size_t*,int,char*) ;

int
FUNC_2(void)
{
    unsigned char VAR_0[1024];
    size_t VAR_1;

    VAR_1 = 0;
    FUNC_1(VAR_0, &VAR_1, sizeof(VAR_0), "\"\\t\\n\\r\\x1f\\123\"");
    if (FUNC_0(VAR_0, "\t\n\r\x1f\123", 5) != 0)
        return 1;
    return 0;
}
