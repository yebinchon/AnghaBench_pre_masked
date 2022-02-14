
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int nparts; scalar_t__* oids; int * boundinfo; } ;
struct TYPE_6__ {int parttypbyval; int parttyplen; int partnatts; } ;
typedef TYPE_1__* PartitionKey ;
typedef TYPE_2__* PartitionDesc ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int *,int *) ;

bool
FUNC_2(PartitionKey VAR_0, PartitionDesc VAR_1,
     PartitionDesc VAR_2)
{
 int VAR_3;

 if (VAR_1 != ((void*)0))
 {
  if (VAR_2 == ((void*)0))
   return 0;
  if (VAR_1->nparts != VAR_2->nparts)
   return 0;

  FUNC_0(VAR_0 != ((void*)0) || VAR_1->nparts == 0);






  for (VAR_3 = 0; VAR_3 < VAR_1->nparts; VAR_3++)
  {
   if (VAR_1->oids[VAR_3] != VAR_2->oids[VAR_3])
    return 0;
  }





  if (VAR_1->boundinfo != ((void*)0))
  {
   if (VAR_2->boundinfo == ((void*)0))
    return 0;

   if (!FUNC_1(VAR_0->partnatts, VAR_0->parttyplen,
          VAR_0->parttypbyval,
          VAR_1->boundinfo,
          VAR_2->boundinfo))
    return 0;
  }
  else if (VAR_2->boundinfo != ((void*)0))
   return 0;
 }
 else if (VAR_2 != ((void*)0))
  return 0;

 return 1;
}
