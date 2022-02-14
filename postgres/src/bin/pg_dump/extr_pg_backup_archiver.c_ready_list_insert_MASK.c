
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int TocEntry ;
struct TYPE_3__ {size_t last_te; int sorted; int ** tes; } ;
typedef TYPE_1__ ParallelReadyList ;



__attribute__((used)) static void
FUNC_0(ParallelReadyList *VAR_0, TocEntry *VAR_1)
{
 VAR_0->tes[++VAR_0->last_te] = VAR_1;

 VAR_0->sorted = 0;
}
