
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int line ;
struct TYPE_4__ {int bookmarkName; } ;
typedef int FILE ;
typedef TYPE_1__ Bookmark ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 (TYPE_1__*,int *,int) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,char*,...) ;
 int FUNC_10 (char*) ;
 int VAR_0 ;
 size_t FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (char*,char*,size_t) ;

int
FUNC_13(Bookmark *VAR_1, int VAR_2)
{
 FILE *VAR_3, *VAR_4;
 char VAR_5[256];
 char VAR_6[64];
 int VAR_7 = 0;
 size_t VAR_8;

 VAR_4 = FUNC_3(0);
 if (VAR_4 == ((void*)0))
  return (-1);

 (void) FUNC_5(VAR_6, VAR_1->bookmarkName);
 (void) FUNC_4(VAR_6, ",");
 VAR_8 = FUNC_11(VAR_6);


 VAR_3 = FUNC_2(((void*)0));
 if (VAR_3 != ((void*)0)) {
  while (FUNC_1(VAR_5, sizeof(VAR_5), VAR_3) != ((void*)0)) {
   if (FUNC_12(VAR_5, VAR_6, VAR_8) == 0) {

    if (FUNC_7(VAR_1, VAR_4, VAR_2) < 0) {
     (void) FUNC_9(VAR_0, "Could not save bookmark.\n");
     FUNC_10("reason");
     (void) FUNC_8(VAR_4);
    }
    VAR_7 = 1;
   } else {
    if (FUNC_9(*VAR_4, "%s\n", VAR_5) < 0) {
     (void) FUNC_9(VAR_0, "Could not save bookmark.\n");
     FUNC_10("reason");
     (void) FUNC_8(VAR_4);
     return (-1);
    }
   }
  }
  FUNC_0(VAR_3);
 }

 if (VAR_7 == 0) {

  if (FUNC_7(VAR_1, VAR_4, VAR_2) < 0) {
   (void) FUNC_9(VAR_0, "Could not save bookmark.\n");
   FUNC_10("reason");
   (void) FUNC_8(VAR_4);
   return (-1);
  }
 }

 if (FUNC_8(VAR_4) < 0) {
  (void) FUNC_9(VAR_0, "Could not save bookmark.\n");
  FUNC_10("reason");
  return (-1);
 }

 if (FUNC_6() < 0) {
  (void) FUNC_9(VAR_0, "Could not rename bookmark file.\n");
  FUNC_10("reason");
  return (-1);
 }
 return (0);
}
