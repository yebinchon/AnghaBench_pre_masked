
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ) ;
 char* FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char*,...) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static bool
FUNC_6(text *VAR_7, text *VAR_8, text *VAR_9)
{
 char *VAR_10,
      *VAR_11,
      *VAR_12;
 int VAR_13;

 VAR_10 = FUNC_1(VAR_7, 0);
 VAR_11 = FUNC_1(VAR_8, 0);

 if (VAR_9 == ((void*)0))
  VAR_12 = ((void*)0);
 else
  VAR_12 = FUNC_1(VAR_9, 0);

 if (FUNC_0(VAR_10, VAR_5) < 0)
 {
  FUNC_2(VAR_4,
    (FUNC_3(),
     FUNC_4("file \"%s\" is not accessible: %m", VAR_10)));

  return 0;
 }

 if (VAR_12 && FUNC_0(VAR_11, VAR_5) < 0)
 {
  FUNC_2(VAR_4,
    (FUNC_3(),
     FUNC_4("file \"%s\" is not accessible: %m", VAR_11)));

  return 0;
 }

 VAR_13 = FUNC_0(VAR_12 ? VAR_12 : VAR_11, VAR_5);
 if (VAR_13 >= 0 || VAR_6 != VAR_0)
 {
  FUNC_2(VAR_3,
    (VAR_1,
     FUNC_4("cannot rename to target file \"%s\"",
      VAR_12 ? VAR_12 : VAR_11)));
 }

 if (VAR_12)
 {
  if (FUNC_5(VAR_11, VAR_12) != 0)
  {
   FUNC_2(VAR_3,
     (FUNC_3(),
      FUNC_4("could not rename \"%s\" to \"%s\": %m",
       VAR_11, VAR_12)));
  }
  if (FUNC_5(VAR_10, VAR_11) != 0)
  {
   FUNC_2(VAR_4,
     (FUNC_3(),
      FUNC_4("could not rename \"%s\" to \"%s\": %m",
       VAR_10, VAR_11)));

   if (FUNC_5(VAR_12, VAR_11) != 0)
   {
    FUNC_2(VAR_3,
      (FUNC_3(),
       FUNC_4("could not rename \"%s\" back to \"%s\": %m",
        VAR_12, VAR_11)));
   }
   else
   {
    FUNC_2(VAR_3,
      (VAR_2,
       FUNC_4("renaming \"%s\" to \"%s\" was reverted",
        VAR_11, VAR_12)));
   }
  }
 }
 else if (FUNC_5(VAR_10, VAR_11) != 0)
 {
  FUNC_2(VAR_3,
    (FUNC_3(),
     FUNC_4("could not rename \"%s\" to \"%s\": %m", VAR_10, VAR_11)));
 }

 return 1;
}
