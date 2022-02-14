
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ objType; int nDeps; int * dependencies; } ;
typedef TYPE_1__ DumpableObject ;
typedef int DumpId ;
typedef int ArchiveHandle ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int) ;

__attribute__((used)) static void
FUNC_3(ArchiveHandle *VAR_2, DumpableObject *VAR_3,
       DumpId **VAR_4, int *VAR_5, int *VAR_6)
{
 int VAR_7;





 if (VAR_3->objType == VAR_1 ||
  VAR_3->objType == VAR_0)
  return;

 for (VAR_7 = 0; VAR_7 < VAR_3->nDeps; VAR_7++)
 {
  DumpId VAR_8 = VAR_3->dependencies[VAR_7];

  if (FUNC_0(VAR_2, VAR_8) != 0)
  {

   if (*VAR_5 >= *VAR_6)
   {
    *VAR_6 *= 2;
    *VAR_4 = (DumpId *) FUNC_2(*VAR_4,
               *VAR_6 * sizeof(DumpId));
   }
   (*VAR_4)[*VAR_5] = VAR_8;
   (*VAR_5)++;
  }
  else
  {





   DumpableObject *VAR_9 = FUNC_1(VAR_8);

   if (VAR_9)
    FUNC_3(VAR_2, VAR_9,
           VAR_4, VAR_5, VAR_6);
  }
 }
}
