
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dtype; int dno; } ;




 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_1__** VAR_1 ;
 int VAR_2 ;

int
FUNC_1(int **VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;





 for (VAR_4 = VAR_0; VAR_4 < VAR_2; VAR_4++)
 {
  switch (VAR_1[VAR_4]->dtype)
  {
   case 128:
   case 129:
    VAR_5++;
    break;

   default:
    break;
  }
 }

 if (VAR_3 != ((void*)0))
 {
  if (VAR_5 > 0)
  {
   *VAR_3 = (int *) FUNC_0(sizeof(int) * VAR_5);

   VAR_5 = 0;
   for (VAR_4 = VAR_0; VAR_4 < VAR_2; VAR_4++)
   {
    switch (VAR_1[VAR_4]->dtype)
    {
     case 128:
     case 129:
      (*VAR_3)[VAR_5++] = VAR_1[VAR_4]->dno;

     default:
      break;
    }
   }
  }
  else
   *VAR_3 = ((void*)0);
 }

 VAR_0 = VAR_2;
 return VAR_5;
}
