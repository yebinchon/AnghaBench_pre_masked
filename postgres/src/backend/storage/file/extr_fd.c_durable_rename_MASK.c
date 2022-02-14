
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const*,int) ;
 int VAR_2 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char const*,...) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (char const*,int,int,int) ;
 scalar_t__ FUNC_6 (char const*,int) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (char const*,char const*) ;

int
FUNC_9(const char *VAR_4, const char *VAR_5, int VAR_6)
{
 int VAR_7;
 if (FUNC_5(VAR_4, 0, 0, VAR_6) != 0)
  return -1;

 VAR_7 = FUNC_1(VAR_5, VAR_2 | VAR_1);
 if (VAR_7 < 0)
 {
  if (VAR_3 != VAR_0)
  {
   FUNC_2(VAR_6,
     (FUNC_3(),
      FUNC_4("could not open file \"%s\": %m", VAR_5)));
   return -1;
  }
 }
 else
 {
  if (FUNC_7(VAR_7) != 0)
  {
   int VAR_8;


   VAR_8 = VAR_3;
   FUNC_0(VAR_7);
   VAR_3 = VAR_8;

   FUNC_2(VAR_6,
     (FUNC_3(),
      FUNC_4("could not fsync file \"%s\": %m", VAR_5)));
   return -1;
  }

  if (FUNC_0(VAR_7) != 0)
  {
   FUNC_2(VAR_6,
     (FUNC_3(),
      FUNC_4("could not close file \"%s\": %m", VAR_5)));
   return -1;
  }
 }


 if (FUNC_8(VAR_4, VAR_5) < 0)
 {
  FUNC_2(VAR_6,
    (FUNC_3(),
     FUNC_4("could not rename file \"%s\" to \"%s\": %m",
      VAR_4, VAR_5)));
  return -1;
 }





 if (FUNC_5(VAR_5, 0, 0, VAR_6) != 0)
  return -1;

 if (FUNC_6(VAR_5, VAR_6) != 0)
  return -1;

 return 0;
}
