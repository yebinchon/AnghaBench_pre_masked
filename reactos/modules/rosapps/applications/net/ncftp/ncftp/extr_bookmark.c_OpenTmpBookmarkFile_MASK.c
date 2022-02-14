
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pathName ;
typedef int path2 ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (int ,char*,...) ;
 char* VAR_1 ;
 scalar_t__ FUNC_6 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,unsigned int) ;
 int VAR_5 ;

FILE *
FUNC_9(int VAR_6)
{
 FILE *VAR_7;
 char VAR_8[32];
 char VAR_9[256], VAR_10[256];

 if (VAR_1[0] == '\0')
  return (((void*)0));

 (void) FUNC_0(VAR_10, sizeof(VAR_10), VAR_2);
 (void) FUNC_0(VAR_9, sizeof(VAR_9), VAR_4);
 (void) FUNC_8(VAR_8, "-%u.txt", (unsigned int) FUNC_6());
 (void) FUNC_1(VAR_9, VAR_8);

 VAR_7 = FUNC_4(VAR_9, VAR_0);
 if (VAR_7 == ((void*)0)) {
  (void) FUNC_5(VAR_5, "Could not save bookmark.\n");
  FUNC_7(VAR_9);
  return (((void*)0));
 }
 (void) FUNC_2(VAR_9, 00600);
 if (VAR_6 > 0) {
  if (FUNC_5(*VAR_7, "NcFTP bookmark-file version: %d\nNumber of bookmarks: %d\n", VAR_3, VAR_6) < 0) {
   (void) FUNC_5(VAR_5, "Could not save bookmark.\n");
   FUNC_7(VAR_9);
   (void) FUNC_3(VAR_7);
   return (((void*)0));
  }
 } else {
  if (FUNC_5(*VAR_7, "NcFTP bookmark-file version: %d\nNumber of bookmarks: ??\n", VAR_3) < 0) {
   (void) FUNC_5(VAR_5, "Could not save bookmark.\n");
   FUNC_7(VAR_9);
   (void) FUNC_3(VAR_7);
   return (((void*)0));
  }
 }

 return (VAR_7);
}
