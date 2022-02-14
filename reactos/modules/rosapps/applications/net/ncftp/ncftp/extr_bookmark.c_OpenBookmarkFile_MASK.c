
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pathName ;
typedef int path2 ;
typedef int line ;
typedef int FILE ;
typedef int Bookmark ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (char*,int,int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char*,int ) ;
 int FUNC_9 (int ,char*,char*) ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,char*,int) ;
 int FUNC_12 (char*,char*,int*) ;
 int VAR_5 ;

FILE *
FUNC_13(int *VAR_6)
{
 char VAR_7[256], VAR_8[256];
 char VAR_9[256];
 FILE *VAR_10;
 int VAR_11;
 int VAR_12;
 Bookmark VAR_13;

 if (VAR_1[0] == '\0')
  return ((void*)0);
 (void) FUNC_3(VAR_7, sizeof(VAR_7), VAR_2);
 VAR_10 = FUNC_8(VAR_7, VAR_0);
 if (VAR_10 == ((void*)0)) {

  (void) FUNC_3(VAR_8, sizeof(VAR_8), VAR_4);
  if (FUNC_10(VAR_8, VAR_7) == 0) {

   VAR_10 = FUNC_8(VAR_7, VAR_0);
   if (VAR_10 == ((void*)0))
    return ((void*)0);
  }
  return ((void*)0);
 }

 (void) FUNC_6(VAR_7, 00600);
 if (FUNC_1(VAR_9, sizeof(VAR_9), VAR_10) == ((void*)0)) {
  (void) FUNC_9(VAR_5, "%s: invalid format.\n", VAR_7);
  (void) FUNC_7(VAR_10);
  return ((void*)0);
 }




 VAR_11 = -1;
 (void) FUNC_12(VAR_9, "%*s %*s %*s %d", &VAR_11);
 if (VAR_11 < VAR_3) {
  if (VAR_11 < 0) {
   (void) FUNC_9(VAR_5, "%s: invalid format, or bad version.\n", VAR_7);
   (void) FUNC_7(VAR_10);
   return ((void*)0);
  }
  (void) FUNC_5(VAR_8, VAR_7);
  (void) FUNC_11(VAR_9, ".v%d", VAR_11);
  (void) FUNC_4(VAR_8, VAR_9);
  (void) FUNC_10(VAR_7, VAR_8);
  (void) FUNC_9(VAR_5, "%s: old version.\n", VAR_7);
  (void) FUNC_7(VAR_10);
  return ((void*)0);
 }




 VAR_12 = -1;




 if (FUNC_1(VAR_9, sizeof(VAR_9), VAR_10) == ((void*)0)) {
  (void) FUNC_9(VAR_5, "%s: invalid format.\n", VAR_7);
  (void) FUNC_7(VAR_10);
  return ((void*)0);
 }

 if (VAR_6 == (int *) 0) {



  return(VAR_10);
 }




 for (VAR_12 = 0; ; VAR_12++) {
  if (FUNC_2(VAR_10, &VAR_13) < 0)
   break;
 }






 FUNC_0(VAR_10);
 VAR_10 = FUNC_8(VAR_7, VAR_0);
 if (VAR_10 == ((void*)0))
  return (((void*)0));
 if (FUNC_1(VAR_9, sizeof(VAR_9), VAR_10) == ((void*)0)) {
  (void) FUNC_9(VAR_5, "%s: invalid format.\n", VAR_7);
  (void) FUNC_7(VAR_10);
  return ((void*)0);
 }

 if (FUNC_1(VAR_9, sizeof(VAR_9), VAR_10) == ((void*)0)) {
  (void) FUNC_9(VAR_5, "%s: invalid format.\n", VAR_7);
  (void) FUNC_7(VAR_10);
  return ((void*)0);
 }


 *VAR_6 = VAR_12;
 return (VAR_10);
}
