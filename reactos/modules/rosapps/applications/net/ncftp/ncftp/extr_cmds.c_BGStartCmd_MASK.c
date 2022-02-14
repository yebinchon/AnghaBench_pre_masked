
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CommandPtr ;
typedef int ArgvInfoPtr ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char const*) ;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*,...) ;

void
FUNC_5(const int VAR_3, const char **const VAR_4, const CommandPtr VAR_5, const ArgvInfoPtr VAR_6)
{
 int VAR_7, VAR_8;

 FUNC_0(VAR_2);
 if (FUNC_2() < 0)
  return;

 if ((VAR_3 < 2) || ((VAR_8 = FUNC_3(VAR_4[1])) < 2)) {
  FUNC_1(0, &VAR_0);
  (void) FUNC_4("Background process started.\n");


  (void) FUNC_4("Watch the \"%s/batchlog\" file to see how it is progressing.\n", VAR_1);

 } else {
  for (VAR_7=0; VAR_7<VAR_8; VAR_7++)
   FUNC_1(0, &VAR_0);
  (void) FUNC_4("Background processes started.\n");


  (void) FUNC_4("Watch the \"%s/batchlog\" file to see how it is progressing.\n", VAR_1);

 }
}
