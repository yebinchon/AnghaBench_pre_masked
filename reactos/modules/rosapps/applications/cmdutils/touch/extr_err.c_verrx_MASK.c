
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 char* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;
 int FUNC_2 (int ,char const*,int ) ;

void
FUNC_3(int VAR_2, const char *VAR_3, va_list VAR_4)
{
 (void)FUNC_1(VAR_1, "%s: ", VAR_0);
 if (VAR_3 != ((void*)0))
  (void)FUNC_2(VAR_1, VAR_3, VAR_4);
 (void)FUNC_1(VAR_1, "\n");
 FUNC_0(VAR_2);
}
