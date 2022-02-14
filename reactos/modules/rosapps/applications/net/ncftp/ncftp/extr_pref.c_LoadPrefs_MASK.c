
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pathName ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,int ) ;
 char* VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_4(void)
{
 FILE *VAR_7;
 char VAR_8[256];
 VAR_7 = FUNC_3(VAR_4, VAR_0);
 if (VAR_7 != ((void*)0)) {

  FUNC_1(VAR_7);
  (void) FUNC_2(VAR_7);
 }

 if (VAR_1[0] != '\0') {
  (void) FUNC_0(VAR_8, sizeof(VAR_8), VAR_5);

  VAR_7 = FUNC_3(VAR_8, VAR_0);
  if (VAR_7 == ((void*)0)) {




   VAR_2++;
   (void) FUNC_0(VAR_8, sizeof(VAR_8), VAR_6);
   VAR_7 = FUNC_3(VAR_8, VAR_0);
  }

  if (VAR_7 == ((void*)0)) {

   VAR_2++;
  } else {

   FUNC_1(VAR_7);
   (void) FUNC_2(VAR_7);
  }
 }

 VAR_7 = FUNC_3(VAR_3, VAR_0);
 if (VAR_7 != ((void*)0)) {

  FUNC_1(VAR_7);
  (void) FUNC_2(VAR_7);
 }
}
