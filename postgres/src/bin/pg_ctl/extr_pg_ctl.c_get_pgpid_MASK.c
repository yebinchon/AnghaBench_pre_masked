
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef int pgpid_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int ,char*) ;
 int FUNC_5 (int *,char*,long*) ;
 scalar_t__ FUNC_6 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (int ,struct stat*) ;
 int FUNC_8 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_9 (int ,int ,int ,...) ;

__attribute__((used)) static pgpid_t
FUNC_10(bool VAR_6)
{
 FILE *VAR_7;
 long VAR_8;
 struct stat VAR_9;

 if (FUNC_7(VAR_2, &VAR_9) != 0)
 {
  if (VAR_1 == VAR_0)
   FUNC_9(FUNC_0("%s: directory \"%s\" does not exist\n"), VAR_4,
       VAR_2);
  else
   FUNC_9(FUNC_0("%s: could not access directory \"%s\": %s\n"), VAR_4,
       VAR_2, FUNC_8(VAR_1));






  FUNC_1(VAR_6 ? 4 : 1);
 }

 if (FUNC_7(VAR_5, &VAR_9) != 0 && VAR_1 == VAR_0)
 {
  FUNC_9(FUNC_0("%s: directory \"%s\" is not a database cluster directory\n"),
      VAR_4, VAR_2);
  FUNC_1(VAR_6 ? 4 : 1);
 }

 VAR_7 = FUNC_4(VAR_3, "r");
 if (VAR_7 == ((void*)0))
 {

  if (VAR_1 == VAR_0)
   return 0;
  else
  {
   FUNC_9(FUNC_0("%s: could not open PID file \"%s\": %s\n"),
       VAR_4, VAR_3, FUNC_8(VAR_1));
   FUNC_1(1);
  }
 }
 if (FUNC_5(VAR_7, "%ld", &VAR_8) != 1)
 {

  if (FUNC_6(VAR_7) == 0 && FUNC_3(VAR_7))
   FUNC_9(FUNC_0("%s: the PID file \"%s\" is empty\n"),
       VAR_4, VAR_3);
  else
   FUNC_9(FUNC_0("%s: invalid data in PID file \"%s\"\n"),
       VAR_4, VAR_3);
  FUNC_1(1);
 }
 FUNC_2(VAR_7);
 return (pgpid_t) VAR_8;
}
