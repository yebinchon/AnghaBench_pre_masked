
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int tupattnum; TYPE_1__* attr; } ;
typedef TYPE_2__ VacAttrStats ;
struct TYPE_6__ {int attisdropped; } ;
typedef int Relation ;
typedef int Bitmapset ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__**) ;

__attribute__((used)) static VacAttrStats **
FUNC_5(Relation VAR_0, Bitmapset *VAR_1,
       int VAR_2, VacAttrStats **VAR_3)
{
 int VAR_4 = 0;
 int VAR_5 = -1;
 VacAttrStats **VAR_6;

 VAR_6 = (VacAttrStats **)
  FUNC_3(FUNC_2(VAR_1) * sizeof(VacAttrStats *));


 while ((VAR_5 = FUNC_1(VAR_1, VAR_5)) >= 0)
 {
  int VAR_7;

  VAR_6[VAR_4] = ((void*)0);
  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
  {
   if (VAR_5 == VAR_3[VAR_7]->tupattnum)
   {
    VAR_6[VAR_4] = VAR_3[VAR_7];
    break;
   }
  }

  if (!VAR_6[VAR_4])
  {





   FUNC_4(VAR_6);
   return ((void*)0);
  }





  FUNC_0(!VAR_6[VAR_4]->attr->attisdropped);

  VAR_4++;
 }

 return VAR_6;
}
