
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ans ;
struct TYPE_4__ {char* pass; char* bookmarkName; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int,int ) ;
 int FUNC_6 (int ,char*) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (char*,...) ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_9(void)
{
 int VAR_5;
 char VAR_6[64];


 FUNC_0(&VAR_0);

 VAR_5 = VAR_2;
 if (VAR_1 != 0)
  VAR_5 = 1;
 if ((VAR_5 < 0) && (VAR_0.pass[0] != '\0')) {
  (void) FUNC_8("\n\nYou logged into this site using a password.\nWould you like to save the password with this bookmark?\n\n");
  (void) FUNC_8("Save? [no] ");
  (void) FUNC_7(VAR_6, 0, sizeof(VAR_6));
  FUNC_4(VAR_4);
  (void) FUNC_5(VAR_6, sizeof(VAR_6) - 1, VAR_4);
  if ((VAR_5 = FUNC_3(VAR_6)) == 0) {
   (void) FUNC_8("\nNot saving the password.\n");
  }
 }
 if (FUNC_1(&VAR_0, VAR_5) < 0) {
  (void) FUNC_6(VAR_3, "Could not save bookmark.\n");
 } else {

  VAR_1 = 1;
  (void) FUNC_8("Bookmark \"%s\" saved.\n", VAR_0.bookmarkName);

  FUNC_2();
 }
}
