
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_2 ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int ,char const*,int ) ;

void
FUNC_4(int VAR_3, const char *VAR_4, va_list VAR_5)
{
 int VAR_6;

 VAR_6 = VAR_1;
 (void)FUNC_1(VAR_2, "%s: ", VAR_0);
 if (VAR_4 != ((void*)0)) {
  (void)FUNC_3(VAR_2, VAR_4, VAR_5);
  (void)FUNC_1(VAR_2, ": ");
 }
 (void)FUNC_1(VAR_2, "%s\n", FUNC_2(VAR_6));
 FUNC_0(VAR_3);
}
