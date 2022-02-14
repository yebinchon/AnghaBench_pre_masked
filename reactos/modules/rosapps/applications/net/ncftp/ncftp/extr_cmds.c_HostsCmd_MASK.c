
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bm ;
typedef int CommandPtr ;
typedef int ArgvInfoPtr ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char const**,int ,int ) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (char*,int) ;
 int VAR_0 ;
 int FUNC_4 (char*) ;

void
FUNC_5(const int VAR_1, const char **const VAR_2, const CommandPtr VAR_3, const ArgvInfoPtr VAR_4)
{
 const char *VAR_5[3];
 char VAR_6[128];

 FUNC_0(VAR_0);

 if ((VAR_1 == 1) && (FUNC_3(VAR_6, sizeof(VAR_6)) == 0)) {
  if (VAR_6[0] != '\0') {
   VAR_5[0] = "open";
   VAR_5[1] = VAR_6;
   VAR_5[2] = ((void*)0);
   FUNC_1(2, VAR_5, (CommandPtr) 0, (ArgvInfoPtr) 0);
  }
  return;
 }
 if (FUNC_2() <= 0) {
  (void) FUNC_4("You haven't bookmarked any FTP sites.\n");
  (void) FUNC_4("Before closing a site, you can use the \"bookmark\" command to save the current\nhost and directory for next time.\n");
 } else {
  (void) FUNC_4("\nTo use a bookmark, use the \"open\" command with the name of the bookmark.\n");
 }
}
