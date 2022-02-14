
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;
typedef int FILE ;
typedef int Bookmark ;


 int * FUNC_0 (char*,int,int *) ;
 scalar_t__ FUNC_1 (char*,int *) ;

int
FUNC_2(FILE *VAR_0, Bookmark *VAR_1)
{
 char VAR_2[512];

 while (FUNC_0(VAR_2, sizeof(VAR_2), VAR_0) != ((void*)0)) {
  if (FUNC_1(VAR_2, VAR_1) >= 0)
   return (0);
 }
 return (-1);
}
