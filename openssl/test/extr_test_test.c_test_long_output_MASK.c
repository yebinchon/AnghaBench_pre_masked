
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char const*,int ,char const*,int ) ;
 int FUNC_2 (char const*,char const*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(void)
{
    const char *VAR_0 = "1234567890123456789012345678901234567890123456789012";
    const char *VAR_1 = "1234567890klmnopqrs01234567890EFGHIJKLM0123456789XYZ";
    const char *VAR_2 = "1234567890123456789012345678901234567890123456789012"
                    "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXY+"
                    "12345678901234567890123ABC78901234567890123456789012";
    const char *VAR_3 = "1234567890123456789012345678901234567890123456789012"
                    "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXY-"
                    "1234567890123456789012345678901234567890123456789012"
                    "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

    return FUNC_0(0, FUNC_2(VAR_0, VAR_1))
           & FUNC_0(0, FUNC_2(VAR_1, VAR_2))
           & FUNC_0(0, FUNC_2(VAR_2, VAR_3))
           & FUNC_0(0, FUNC_1(VAR_2, FUNC_3(VAR_2), VAR_3, FUNC_3(VAR_3)));
}
