
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* bookmarkName; } ;
typedef int CommandPtr ;
typedef int ArgvInfoPtr ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 () ;
 TYPE_1__ VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*) ;

void
FUNC_5(const int VAR_3, const char **const VAR_4, const CommandPtr VAR_5, const ArgvInfoPtr VAR_6)
{



 FUNC_0(VAR_2);

 if (VAR_1[0] == '\0') {
  (void) FUNC_4("Sorry, configuration information is not saved for this user.\n");
 } else if ((VAR_3 <= 1) || (VAR_4[1][0] == '\0')) {

  if (VAR_0.bookmarkName[0] == '\0') {

   if (FUNC_1(&VAR_0) < 0) {
    (void) FUNC_4("Nevermind.\n");
   } else {
    FUNC_3();
   }
  } else {

   FUNC_3();
  }
 } else {
  (void) FUNC_2(VAR_0.bookmarkName, VAR_4[1]);
  FUNC_3();
 }
}
