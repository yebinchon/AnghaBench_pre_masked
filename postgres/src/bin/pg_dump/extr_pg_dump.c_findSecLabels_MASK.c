
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ classoid; scalar_t__ objoid; } ;
typedef TYPE_1__ SecLabelItem ;
typedef scalar_t__ Oid ;
typedef int Archive ;


 int FUNC_0 (int *,TYPE_1__**) ;

__attribute__((used)) static int
FUNC_1(Archive *VAR_0, Oid VAR_1, Oid VAR_2, SecLabelItem **VAR_3)
{

 static SecLabelItem *VAR_4 = ((void*)0);
 static int VAR_5 = -1;

 SecLabelItem *VAR_6 = ((void*)0);
 SecLabelItem *VAR_7;
 SecLabelItem *VAR_8;
 int VAR_9;


 if (VAR_5 < 0)
  VAR_5 = FUNC_0(VAR_0, &VAR_4);

 if (VAR_5 <= 0)
 {
  *VAR_3 = ((void*)0);
  return 0;
 }




 VAR_7 = &VAR_4[0];
 VAR_8 = &VAR_4[VAR_5 - 1];
 while (VAR_7 <= VAR_8)
 {
  VAR_6 = VAR_7 + (VAR_8 - VAR_7) / 2;

  if (VAR_1 < VAR_6->classoid)
   VAR_8 = VAR_6 - 1;
  else if (VAR_1 > VAR_6->classoid)
   VAR_7 = VAR_6 + 1;
  else if (VAR_2 < VAR_6->objoid)
   VAR_8 = VAR_6 - 1;
  else if (VAR_2 > VAR_6->objoid)
   VAR_7 = VAR_6 + 1;
  else
   break;
 }

 if (VAR_7 > VAR_8)
 {
  *VAR_3 = ((void*)0);
  return 0;
 }






 VAR_9 = 1;
 while (VAR_6 > VAR_7)
 {
  if (VAR_1 != VAR_6[-1].classoid ||
   VAR_2 != VAR_6[-1].objoid)
   break;
  VAR_6--;
  VAR_9++;
 }

 *VAR_3 = VAR_6;

 VAR_6 += VAR_9;
 while (VAR_6 <= VAR_8)
 {
  if (VAR_1 != VAR_6->classoid ||
   VAR_2 != VAR_6->objoid)
   break;
  VAR_6++;
  VAR_9++;
 }

 return VAR_9;
}
