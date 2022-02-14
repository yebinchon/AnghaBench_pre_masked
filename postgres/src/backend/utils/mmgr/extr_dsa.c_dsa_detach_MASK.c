
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int high_segment_index; TYPE_1__* segment_maps; } ;
typedef TYPE_2__ dsa_area ;
struct TYPE_5__ {int * segment; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;

void
FUNC_2(dsa_area *VAR_0)
{
 int VAR_1;


 for (VAR_1 = 0; VAR_1 <= VAR_0->high_segment_index; ++VAR_1)
  if (VAR_0->segment_maps[VAR_1].segment != ((void*)0))
   FUNC_0(VAR_0->segment_maps[VAR_1].segment);
 FUNC_1(VAR_0);
}
