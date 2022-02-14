
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,char*,...) ;
 int FUNC_4 (int ) ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 char* FUNC_5 (int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*,char*,...) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,char*,...) ;
 char* VAR_9 ;
 int FUNC_10 () ;
 int VAR_10 ;
 scalar_t__ FUNC_11 (char*,char*) ;

void
FUNC_12(void)
{
 FUNC_10();

 if (FUNC_11(VAR_4, VAR_3) == 0 &&
  FUNC_11(VAR_4, VAR_8) == 0 &&
  FUNC_11(VAR_4, VAR_7) == 0 &&
  FUNC_11(VAR_4, VAR_6) == 0 &&
  FUNC_11(VAR_4, VAR_5) == 0)
  FUNC_9(FUNC_0("The database cluster will be initialized with locale \"%s\".\n"), VAR_4);
 else
 {
  FUNC_9(FUNC_0("The database cluster will be initialized with locales\n"
     "  COLLATE:  %s\n"
     "  CTYPE:    %s\n"
     "  MESSAGES: %s\n"
     "  MONETARY: %s\n"
     "  NUMERIC:  %s\n"
     "  TIME:     %s\n"),
      VAR_3,
      VAR_4,
      VAR_5,
      VAR_6,
      VAR_7,
      VAR_8);
 }

 if (!VAR_1)
 {
  int VAR_11;

  VAR_11 = FUNC_6(VAR_4, 1);

  if (VAR_11 == -1)
  {

   FUNC_7("could not find suitable encoding for locale \"%s\"",
       VAR_4);
   FUNC_3(VAR_10, FUNC_0("Rerun %s with the -E option.\n"), VAR_9);
   FUNC_3(VAR_10, FUNC_0("Try \"%s --help\" for more information.\n"),
     VAR_9);
   FUNC_2(1);
  }
  else if (!FUNC_8(VAR_11))
  {
   FUNC_7("locale \"%s\" requires unsupported encoding \"%s\"",
       VAR_4, FUNC_5(VAR_11));
   FUNC_3(VAR_10,
     FUNC_0("Encoding \"%s\" is not allowed as a server-side encoding.\n"
       "Rerun %s with a different locale selection.\n"),
     FUNC_5(VAR_11), VAR_9);
   FUNC_2(1);

  }
  else
  {
   VAR_2 = VAR_11;
   FUNC_9(FUNC_0("The default database encoding has accordingly been set to \"%s\".\n"),
       FUNC_5(VAR_2));
  }
 }
 else
  VAR_2 = FUNC_4(VAR_1);

 if (!FUNC_1(VAR_4, VAR_2) ||
  !FUNC_1(VAR_3, VAR_2))
  FUNC_2(1);

}
