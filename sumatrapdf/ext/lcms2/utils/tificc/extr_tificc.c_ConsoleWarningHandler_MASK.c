
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char const*,int ) ;

__attribute__((used)) static
void FUNC_6(const char* VAR_2, const char* VAR_3, va_list VAR_4)
{
    char VAR_5[512] = { '\0' };
    if (VAR_2 != ((void*)0))
        FUNC_2(FUNC_3(VAR_5, VAR_2), ": ");

    FUNC_5(VAR_5+FUNC_4(VAR_5), VAR_3, VAR_4);
    FUNC_2(VAR_5, ".");
    if (VAR_0) {

        FUNC_1(VAR_1, "\nWarning");
        FUNC_1(VAR_1, " %s\n", VAR_5);
        FUNC_0(VAR_1);
    }
}
