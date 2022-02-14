
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pwd2 ;
typedef int pwd1 ;
typedef int FILE ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int,int *) ;
 int * FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_11 (char*,char*,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_12 (char*,char*) ;
 int FUNC_13 (char*) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_14(void)
{
 char VAR_5[100];
 char VAR_6[100];

 if (VAR_1)
 {



  FUNC_10("\n");
  FUNC_4(VAR_3);
  FUNC_11("Enter new superuser password: ", VAR_5, sizeof(VAR_5), 0);
  FUNC_11("Enter it again: ", VAR_6, sizeof(VAR_6), 0);
  if (FUNC_12(VAR_5, VAR_6) != 0)
  {
   FUNC_7(VAR_2, FUNC_0("Passwords didn't match.\n"));
   FUNC_1(1);
  }
 }
 else
 {
  FILE *VAR_7 = FUNC_6(VAR_0, "r");
  int VAR_8;

  if (!VAR_7)
  {
   FUNC_8("could not open file \"%s\" for reading: %m",
       VAR_0);
   FUNC_1(1);
  }
  if (!FUNC_5(VAR_5, sizeof(VAR_5), VAR_7))
  {
   if (FUNC_3(VAR_7))
    FUNC_8("could not read password from file \"%s\": %m",
        VAR_0);
   else
    FUNC_8("password file \"%s\" is empty",
        VAR_0);
   FUNC_1(1);
  }
  FUNC_2(VAR_7);

  VAR_8 = FUNC_13(VAR_5);
  while (VAR_8 > 0 && (VAR_5[VAR_8 - 1] == '\r' || VAR_5[VAR_8 - 1] == '\n'))
   VAR_5[--VAR_8] = '\0';
 }

 VAR_4 = FUNC_9(VAR_5);
}
