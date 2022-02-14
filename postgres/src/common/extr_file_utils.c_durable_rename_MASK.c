
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char const*,int) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (char const*,int,int ) ;
 int FUNC_5 (char*,char const*,...) ;
 scalar_t__ FUNC_6 (char const*,char const*) ;

int
FUNC_7(const char *VAR_4, const char *VAR_5)
{
 int VAR_6;
 if (FUNC_2(VAR_4, 0) != 0)
  return -1;

 VAR_6 = FUNC_4(VAR_5, VAR_2 | VAR_1, 0);
 if (VAR_6 < 0)
 {
  if (VAR_3 != VAR_0)
  {
   FUNC_5("could not open file \"%s\": %m", VAR_5);
   return -1;
  }
 }
 else
 {
  if (FUNC_1(VAR_6) != 0)
  {
   FUNC_5("could not fsync file \"%s\": %m", VAR_5);
   FUNC_0(VAR_6);
   return -1;
  }
  FUNC_0(VAR_6);
 }


 if (FUNC_6(VAR_4, VAR_5) != 0)
 {
  FUNC_5("could not rename file \"%s\" to \"%s\": %m",
      VAR_4, VAR_5);
  return -1;
 }





 if (FUNC_2(VAR_5, 0) != 0)
  return -1;

 if (FUNC_3(VAR_5) != 0)
  return -1;

 return 0;
}
