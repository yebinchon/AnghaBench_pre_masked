
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nattributes; int* attributes; } ;
typedef TYPE_1__ MVDependency ;
typedef int Bitmapset ;


 int FUNC_0 (int,int *) ;

__attribute__((used)) static bool
FUNC_1(MVDependency *VAR_0, Bitmapset *VAR_1)
{
 int VAR_2;





 for (VAR_2 = 0; VAR_2 < VAR_0->nattributes; VAR_2++)
 {
  int VAR_3 = VAR_0->attributes[VAR_2];

  if (!FUNC_0(VAR_3, VAR_1))
   return 0;
 }

 return 1;
}
