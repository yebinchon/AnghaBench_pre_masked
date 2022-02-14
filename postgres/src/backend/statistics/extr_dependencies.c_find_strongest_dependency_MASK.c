
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int ndeps; TYPE_1__** deps; } ;
struct TYPE_6__ {int nattributes; scalar_t__ degree; } ;
typedef int StatisticExtInfo ;
typedef TYPE_1__ MVDependency ;
typedef TYPE_2__ MVDependencies ;
typedef int Bitmapset ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *) ;

__attribute__((used)) static MVDependency *
FUNC_2(StatisticExtInfo *VAR_0, MVDependencies *VAR_1,
        Bitmapset *VAR_2)
{
 int VAR_3;
 MVDependency *VAR_4 = ((void*)0);


 int VAR_5 = FUNC_0(VAR_2);






 for (VAR_3 = 0; VAR_3 < VAR_1->ndeps; VAR_3++)
 {
  MVDependency *VAR_6 = VAR_1->deps[VAR_3];





  if (VAR_6->nattributes > VAR_5)
   continue;

  if (VAR_4)
  {

   if (VAR_6->nattributes < VAR_4->nattributes)
    continue;


   if (VAR_4->nattributes == VAR_6->nattributes &&
    VAR_4->degree > VAR_6->degree)
    continue;
  }






  if (FUNC_1(VAR_6, VAR_2))
   VAR_4 = VAR_6;
 }

 return VAR_4;
}
