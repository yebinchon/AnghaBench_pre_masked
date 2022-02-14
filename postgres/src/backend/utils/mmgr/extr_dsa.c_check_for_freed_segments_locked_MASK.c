
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {size_t freed_segment_counter; int high_segment_index; TYPE_3__* segment_maps; TYPE_1__* control; } ;
typedef TYPE_4__ dsa_area ;
struct TYPE_9__ {int * mapped_address; TYPE_2__* header; int * segment; } ;
struct TYPE_8__ {scalar_t__ freed; } ;
struct TYPE_7__ {size_t freed_segment_counter; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(dsa_area *VAR_0)
{
 size_t VAR_1;
 int VAR_2;

 FUNC_0(FUNC_2(FUNC_1(VAR_0)));
 VAR_1 = VAR_0->control->freed_segment_counter;
 if (FUNC_4(VAR_0->freed_segment_counter != VAR_1))
 {
  for (VAR_2 = 0; VAR_2 <= VAR_0->high_segment_index; ++VAR_2)
  {
   if (VAR_0->segment_maps[VAR_2].header != ((void*)0) &&
    VAR_0->segment_maps[VAR_2].header->freed)
   {
    FUNC_3(VAR_0->segment_maps[VAR_2].segment);
    VAR_0->segment_maps[VAR_2].segment = ((void*)0);
    VAR_0->segment_maps[VAR_2].header = ((void*)0);
    VAR_0->segment_maps[VAR_2].mapped_address = ((void*)0);
   }
  }
  VAR_0->freed_segment_counter = VAR_1;
 }
}
