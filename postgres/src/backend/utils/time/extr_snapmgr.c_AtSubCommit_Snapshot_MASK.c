
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int as_level; struct TYPE_3__* as_next; } ;
typedef TYPE_1__ ActiveSnapshotElt ;


 TYPE_1__* VAR_0 ;

void
FUNC_0(int VAR_1)
{
 ActiveSnapshotElt *VAR_2;





 for (VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_2 = VAR_2->as_next)
 {
  if (VAR_2->as_level < VAR_1)
   break;
  VAR_2->as_level = VAR_1 - 1;
 }
}
