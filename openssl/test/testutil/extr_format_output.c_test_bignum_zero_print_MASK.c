
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIGNUM ;


 int VAR_0 ;
 char* FUNC_0 (int const*) ;
 int FUNC_1 (char*,char,int ,char const*,char const*) ;

__attribute__((used)) static void FUNC_2(const BIGNUM *VAR_1, char VAR_2)
{
    const char *VAR_3 = FUNC_0(VAR_1);
    const char *VAR_4 = VAR_1 != ((void*)0) ? ":    0" : "";

    FUNC_1("%c%*s%s\n", VAR_2, VAR_0, VAR_3, VAR_4);
}
