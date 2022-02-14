
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nentries; int* entryRes; int recheckCurItem; } ;
typedef int GinTernaryValue ;
typedef TYPE_1__* GinScanKey ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static GinTernaryValue
FUNC_1(GinScanKey VAR_4)
{
 int VAR_5;
 int VAR_6[VAR_3];
 int VAR_7;
 bool VAR_8;
 bool VAR_9 = 0;
 GinTernaryValue VAR_10;






 VAR_5 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_4->nentries; VAR_7++)
 {
  if (VAR_4->entryRes[VAR_7] == VAR_1)
  {
   if (VAR_5 >= VAR_3)
    return VAR_1;
   VAR_6[VAR_5++] = VAR_7;
  }
 }





 if (VAR_5 == 0)
  return FUNC_0(VAR_4);


 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
  VAR_4->entryRes[VAR_6[VAR_7]] = VAR_0;
 VAR_10 = FUNC_0(VAR_4);

 for (;;)
 {

  for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
  {
   if (VAR_4->entryRes[VAR_6[VAR_7]] == VAR_0)
   {
    VAR_4->entryRes[VAR_6[VAR_7]] = VAR_2;
    break;
   }
   else
    VAR_4->entryRes[VAR_6[VAR_7]] = VAR_0;
  }
  if (VAR_7 == VAR_5)
   break;

  VAR_8 = FUNC_0(VAR_4);
  VAR_9 |= VAR_4->recheckCurItem;

  if (VAR_10 != VAR_8)
   return VAR_1;
 }


 if (VAR_10 == VAR_2 && VAR_9)
  VAR_10 = VAR_1;

 return VAR_10;
}
