
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char const*,char const*) ;
 long FUNC_1 (char const*,char**,int ) ;

bool
FUNC_2(const char *VAR_1, const char *VAR_2, int *VAR_3)
{
 char *VAR_4;
 long VAR_5;


 if (VAR_1 == ((void*)0))
  VAR_1 = "";

 VAR_0 = 0;
 VAR_5 = FUNC_1(VAR_1, &VAR_4, 0);
 if (VAR_0 == 0 && *VAR_4 == '\0' && VAR_4 != VAR_1 && VAR_5 == (int) VAR_5)
 {
  *VAR_3 = (int) VAR_5;
  return 1;
 }
 else
 {

  if (VAR_2)
   FUNC_0("invalid value \"%s\" for \"%s\": integer expected",
       VAR_1, VAR_2);
  return 0;
 }
}
