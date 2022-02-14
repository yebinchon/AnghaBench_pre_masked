
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int FILE ;


 char* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,char const*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int *,char const*,int ) ;

__attribute__((used)) static int FUNC_5(FILE *VAR_2, const char *VAR_3, const char *VAR_4,
  va_list VAR_5)
{
 int VAR_6 = 0;




 if (VAR_1 < 0) {
  if (FUNC_2(FUNC_0(VAR_2)) || FUNC_3())
   VAR_1 = 1;
  else
   VAR_1 = 0;
 }

 if (VAR_1 && *VAR_3)
  FUNC_1(VAR_2, "%s", VAR_3);
 VAR_6 += FUNC_4(VAR_2, VAR_4, VAR_5);
 if (VAR_1 && *VAR_3)
  FUNC_1(VAR_2, "%s", VAR_0);
 return VAR_6;
}
