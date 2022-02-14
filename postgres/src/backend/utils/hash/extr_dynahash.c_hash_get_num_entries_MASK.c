
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* freeList; } ;
struct TYPE_6__ {TYPE_4__* hctl; } ;
struct TYPE_5__ {long nentries; } ;
typedef TYPE_2__ HTAB ;


 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;

long
FUNC_1(HTAB *VAR_1)
{
 int VAR_2;
 long VAR_3 = VAR_1->hctl->freeList[0].nentries;






 if (FUNC_0(VAR_1->hctl))
 {
  for (VAR_2 = 1; VAR_2 < VAR_0; VAR_2++)
   VAR_3 += VAR_1->hctl->freeList[VAR_2].nentries;
 }

 return VAR_3;
}
