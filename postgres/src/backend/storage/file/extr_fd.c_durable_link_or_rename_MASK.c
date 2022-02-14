
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char const*,char const*) ;
 scalar_t__ FUNC_3 (char const*,int,int,int) ;
 scalar_t__ FUNC_4 (char const*,int) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;
 scalar_t__ FUNC_6 (char const*,char const*) ;
 int FUNC_7 (char const*) ;

int
FUNC_8(const char *VAR_0, const char *VAR_1, int VAR_2)
{




 if (FUNC_3(VAR_0, 0, 0, VAR_2) != 0)
  return -1;
 if (FUNC_6(VAR_0, VAR_1) < 0)
 {
  FUNC_0(VAR_2,
    (FUNC_1(),
     FUNC_2("could not rename file \"%s\" to \"%s\": %m",
      VAR_0, VAR_1)));
  return -1;
 }






 if (FUNC_3(VAR_1, 0, 0, VAR_2) != 0)
  return -1;


 if (FUNC_4(VAR_1, VAR_2) != 0)
  return -1;

 return 0;
}
