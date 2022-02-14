
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s ;


 int FUNC_0 (char*,unsigned char const*,int) ;
 int FUNC_1 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_2(void)
{
    const char VAR_0[] = "1234567890123456789012345678901234567890123456789012"
                     "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    FUNC_1("test", VAR_0, sizeof(VAR_0) - 1);
    FUNC_0("test", (const unsigned char *)VAR_0, sizeof(VAR_0));
    return 1;
}
