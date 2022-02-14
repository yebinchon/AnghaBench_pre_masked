
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t dumpId; int nDeps; scalar_t__* dependencies; } ;
typedef TYPE_1__ DumpableObject ;
typedef scalar_t__ DumpId ;


 TYPE_1__* FUNC_0 (scalar_t__) ;

__attribute__((used)) static int
FUNC_1(DumpableObject *VAR_0,
   DumpId VAR_1,
   bool *VAR_2,
   DumpId *VAR_3,
   DumpableObject **VAR_4,
   int VAR_5)
{
 int VAR_6;





 if (VAR_2[VAR_0->dumpId])
  return 0;





 if (VAR_3[VAR_0->dumpId] == VAR_1)
  return 0;







 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  if (VAR_4[VAR_6] == VAR_0)
   return 0;
 }




 VAR_4[VAR_5++] = VAR_0;




 for (VAR_6 = 0; VAR_6 < VAR_0->nDeps; VAR_6++)
 {
  if (VAR_0->dependencies[VAR_6] == VAR_1)
   return VAR_5;
 }




 for (VAR_6 = 0; VAR_6 < VAR_0->nDeps; VAR_6++)
 {
  DumpableObject *VAR_7 = FUNC_0(VAR_0->dependencies[VAR_6]);
  int VAR_8;

  if (!VAR_7)
   continue;
  VAR_8 = FUNC_1(VAR_7,
       VAR_1,
       VAR_2,
       VAR_3,
       VAR_4,
       VAR_5);
  if (VAR_8 > 0)
   return VAR_8;
 }




 VAR_3[VAR_0->dumpId] = VAR_1;

 return 0;
}
