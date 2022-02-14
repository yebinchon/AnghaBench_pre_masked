
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int ,char const*,int ) ;

__attribute__((used)) static void
FUNC_2(const char* VAR_1, const char* VAR_2, va_list VAR_3)
{
 if (VAR_1 != ((void*)0))
  FUNC_0(VAR_0, "%s: ", VAR_1);
 FUNC_0(VAR_0, "Warning, ");
 FUNC_1(VAR_0, VAR_2, VAR_3);
 FUNC_0(VAR_0, ".\n");
}
