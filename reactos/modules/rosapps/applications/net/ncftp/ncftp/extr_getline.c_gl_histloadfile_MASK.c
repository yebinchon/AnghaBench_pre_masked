
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char const* const,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ,int) ;

void
FUNC_5(const char *const VAR_0)
{
 FILE *VAR_1;
 char VAR_2[256];

 VAR_1 = FUNC_2(VAR_0,



  "r"

 );
 if (VAR_1 != ((void*)0)) {
  FUNC_4(VAR_2, 0, sizeof(VAR_2));
  while (FUNC_1(VAR_2, sizeof(VAR_2) - 2, VAR_1) != ((void*)0)) {
   FUNC_3(VAR_2);
  }
  FUNC_0(VAR_1);
 }
}
