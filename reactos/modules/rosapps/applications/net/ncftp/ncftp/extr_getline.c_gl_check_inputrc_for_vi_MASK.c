
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int path ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 char* VAR_0 ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (char*,int,char*,char*,char*) ;
 int FUNC_5 (char*,char*,char*,char*) ;
 int FUNC_6 (char*) ;
 int * FUNC_7 (char*,char*) ;

__attribute__((used)) static void
FUNC_8(void)
{
 FILE *VAR_2;
 char VAR_3[256];
 FUNC_3(((void*)0));
 if (VAR_0 == ((void*)0))
  return;




 if (sizeof(VAR_3) >= (FUNC_6(VAR_0) + FUNC_6("/.inputrc")))
  return;

 FUNC_5(VAR_3, "%s%s", VAR_0, "/.inputrc");


 VAR_2 = FUNC_2(
  VAR_3,



  "r"

 );

 if (VAR_2 == ((void*)0))
  return;

 while (FUNC_1(VAR_3, sizeof(VAR_3) - 1, VAR_2) != ((void*)0)) {
  if ((FUNC_7(VAR_3, "editing-mode") != ((void*)0)) && (FUNC_7(VAR_3, "vi") != ((void*)0))) {
   VAR_1 = 1;
   break;
  }
 }

 (void) FUNC_0(VAR_2);
}
