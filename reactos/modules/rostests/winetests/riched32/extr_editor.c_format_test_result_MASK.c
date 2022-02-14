
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,char const) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static void FUNC_2(char *VAR_0, const char *VAR_1)
{
    int VAR_2;
    for (VAR_2 = 0; VAR_2 < FUNC_1(VAR_1); VAR_2++)
        FUNC_0(VAR_0 + 2*VAR_2, "%02x", VAR_1[VAR_2] & 0xFF);
    VAR_0[2*VAR_2] = 0;
}
