
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(void)
{
 if (FUNC_0() < 0) {



  (void) FUNC_2("Sorry, spooling isn't allowed because this user requires that the NCFTPDIR\nenvironment variable be set to a directory to write datafiles to.\n");

  return (-1);
 } else if (FUNC_1() == 0) {



  (void) FUNC_2("Sorry, the \"ncftpbatch\" program could not be found.\nThis program must be installed and in your PATH in order to use this feature.\n");

  return (-1);
 }
 return (0);
}
