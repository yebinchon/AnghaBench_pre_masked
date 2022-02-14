
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 int VAR_5 ;
 char* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (char*,size_t,char const*,int ) ;

size_t
FUNC_10(char *VAR_6, size_t VAR_7, const char *VAR_8, va_list VAR_9)
{
 int VAR_10;

 VAR_10 = FUNC_9(VAR_6, VAR_7, VAR_8, VAR_9);


 if (FUNC_8(VAR_10 < 0))
 {

  FUNC_1(VAR_1, "vsnprintf failed: %m with format string \"%s\"", VAR_8);





 }

 if ((size_t) VAR_10 < VAR_7)
 {

  return (size_t) VAR_10;
 }
 if (FUNC_8((size_t) VAR_10 > VAR_3 - 1))
 {

  FUNC_2(VAR_1,
    (FUNC_3(VAR_0),
     FUNC_4("out of memory")));




 }

 return VAR_10 + 1;
}
