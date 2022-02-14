
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct board_info {int * id; } ;


 struct board_info* VAR_0 ;
 scalar_t__ FUNC_0 (char*,int *) ;

struct board_info *FUNC_1(char *VAR_1)
{
 struct board_info *VAR_2;

 for (VAR_2 = VAR_0; VAR_2->id != ((void*)0); VAR_2++)
  if (FUNC_0(VAR_1, VAR_2->id) == 0)
   return VAR_2;

 return ((void*)0);
}
