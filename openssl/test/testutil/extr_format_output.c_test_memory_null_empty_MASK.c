
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(const unsigned char *VAR_0, char VAR_1)
{
    if (VAR_0 == ((void*)0))
        FUNC_0("%4s %c%s\n", "", VAR_1, "NULL");
    else
        FUNC_0("%04x %c%s\n", 0u, VAR_1, "empty");
}
