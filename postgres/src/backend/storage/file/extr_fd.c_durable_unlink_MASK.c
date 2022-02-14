
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (char const*,int) ;
 scalar_t__ FUNC_4 (char const*) ;

int
FUNC_5(const char *VAR_0, int VAR_1)
{
 if (FUNC_4(VAR_0) < 0)
 {
  FUNC_0(VAR_1,
    (FUNC_1(),
     FUNC_2("could not remove file \"%s\": %m",
      VAR_0)));
  return -1;
 }





 if (FUNC_3(VAR_0, VAR_1) != 0)
  return -1;

 return 0;
}
