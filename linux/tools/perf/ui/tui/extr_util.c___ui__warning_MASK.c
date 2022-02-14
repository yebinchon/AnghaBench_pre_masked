
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (char const*,char*,char*,int ) ;
 scalar_t__ FUNC_3 (char**,char const*,int ) ;
 int FUNC_4 (int ,char const*,int ) ;

__attribute__((used)) static int FUNC_5(const char *VAR_2, const char *VAR_3, va_list VAR_4)
{
 char *VAR_5;

 if (FUNC_3(&VAR_5, VAR_3, VAR_4) > 0) {
  int VAR_6;

  VAR_6 = FUNC_2(VAR_2, VAR_5, "Press any key...", 0);
  FUNC_1(VAR_5);
  return VAR_6;
 }

 FUNC_0(VAR_1, "%s\n", VAR_2);
 FUNC_4(VAR_1, VAR_3, VAR_4);
 return VAR_0;
}
