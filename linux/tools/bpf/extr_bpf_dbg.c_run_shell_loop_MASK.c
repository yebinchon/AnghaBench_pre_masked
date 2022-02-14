
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int *) ;
 char* FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(FILE *VAR_2, FILE *VAR_3)
{
 char *VAR_4;

 FUNC_4(VAR_2, VAR_3);

 while ((VAR_4 = FUNC_5("> ")) != ((void*)0)) {
  int VAR_5 = FUNC_1(VAR_4);
  if (VAR_5 == VAR_0)
   break;
  if (VAR_5 == VAR_1 && FUNC_6(VAR_4) > 0)
   FUNC_0(VAR_4);

  FUNC_3(VAR_4);
 }

 FUNC_2(VAR_2, VAR_3);
 return 0;
}
