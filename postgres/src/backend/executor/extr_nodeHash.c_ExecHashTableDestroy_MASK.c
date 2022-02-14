
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nbatch; int hashCxt; scalar_t__* outerBatchFile; scalar_t__* innerBatchFile; } ;
typedef TYPE_1__* HashJoinTable ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(HashJoinTable VAR_0)
{
 int VAR_1;






 if (VAR_0->innerBatchFile != ((void*)0))
 {
  for (VAR_1 = 1; VAR_1 < VAR_0->nbatch; VAR_1++)
  {
   if (VAR_0->innerBatchFile[VAR_1])
    FUNC_0(VAR_0->innerBatchFile[VAR_1]);
   if (VAR_0->outerBatchFile[VAR_1])
    FUNC_0(VAR_0->outerBatchFile[VAR_1]);
  }
 }


 FUNC_1(VAR_0->hashCxt);


 FUNC_2(VAR_0);
}
