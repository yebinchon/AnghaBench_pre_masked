
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t* renumber_map; TYPE_1__* page_object_lists; } ;
typedef TYPE_2__ pdf_write_state ;
struct TYPE_7__ {int len; size_t* object; size_t page_object_number; } ;
typedef TYPE_3__ page_objects ;
struct TYPE_5__ {int len; TYPE_3__** page; } ;



__attribute__((used)) static void FUNC_0(pdf_write_state *VAR_0)
{
 int VAR_1, VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->page_object_lists->len; VAR_1++)
 {
  page_objects *VAR_3 = VAR_0->page_object_lists->page[VAR_1];
  for (VAR_2 = 0; VAR_2 < VAR_3->len; VAR_2++)
  {
   VAR_3->object[VAR_2] = VAR_0->renumber_map[VAR_3->object[VAR_2]];
  }
  VAR_3->page_object_number = VAR_0->renumber_map[VAR_3->page_object_number];
 }
}
