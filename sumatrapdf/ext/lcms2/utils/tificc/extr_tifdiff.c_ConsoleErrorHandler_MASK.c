
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char const*,int ) ;

__attribute__((used)) static
void FUNC_6(const char* VAR_1, const char* VAR_2, va_list VAR_3)
{
       char VAR_4[512] = { '\0' };

       if (VAR_1 != ((void*)0))
              FUNC_2(FUNC_3(VAR_4, VAR_1), ": ");

       FUNC_5(VAR_4+FUNC_4(VAR_4), VAR_2, VAR_3);
       FUNC_2(VAR_4, ".");
       FUNC_1(VAR_0, "\nError");
       FUNC_1(VAR_0, " %s\n", VAR_4);
       FUNC_0(VAR_0);
}
