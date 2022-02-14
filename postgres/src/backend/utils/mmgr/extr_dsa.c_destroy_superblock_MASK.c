
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_22__ {int * mapped_address; TYPE_2__* header; int * segment; int fpm; } ;
typedef TYPE_3__ dsa_segment_map ;
typedef size_t dsa_segment_index ;
typedef int dsa_pointer ;
struct TYPE_23__ {int size_class; int npages; int start; } ;
typedef TYPE_4__ dsa_area_span ;
struct TYPE_24__ {TYPE_1__* control; } ;
typedef TYPE_5__ dsa_area ;
struct TYPE_21__ {scalar_t__ usable_pages; int freed; scalar_t__ size; } ;
struct TYPE_20__ {scalar_t__ total_segment_size; int freed_segment_counter; int * segment_handles; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*,int ) ;
 TYPE_4__* FUNC_9 (TYPE_5__*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 TYPE_3__* FUNC_14 (TYPE_5__*,int ) ;
 size_t FUNC_15 (TYPE_5__*,TYPE_3__*) ;
 int FUNC_16 (TYPE_5__*,TYPE_3__*) ;
 int FUNC_17 (TYPE_5__*,TYPE_4__*) ;

__attribute__((used)) static void
FUNC_18(dsa_area *VAR_4, dsa_pointer VAR_5)
{
 dsa_area_span *VAR_6 = FUNC_9(VAR_4, VAR_5);
 int VAR_7 = VAR_6->size_class;
 dsa_segment_map *VAR_8;



 FUNC_17(VAR_4, VAR_6);






 FUNC_5(FUNC_1(VAR_4), VAR_3);
 FUNC_7(VAR_4);
 VAR_8 =
  FUNC_14(VAR_4, FUNC_3(VAR_6->start));
 FUNC_4(VAR_8->fpm,
        FUNC_2(VAR_6->start) / VAR_2,
        VAR_6->npages);

 if (FUNC_13(VAR_8->fpm) == VAR_8->header->usable_pages)
 {
  dsa_segment_index VAR_9 = FUNC_15(VAR_4, VAR_8);


  if (VAR_9 != 0)
  {




   FUNC_16(VAR_4, VAR_8);
   VAR_8->header->freed = 1;
   FUNC_0(VAR_4->control->total_segment_size >=
       VAR_8->header->size);
   VAR_4->control->total_segment_size -=
    VAR_8->header->size;
   FUNC_12(FUNC_11(VAR_8->segment));
   FUNC_10(VAR_8->segment);
   VAR_4->control->segment_handles[VAR_9] = VAR_1;
   ++VAR_4->control->freed_segment_counter;
   VAR_8->segment = ((void*)0);
   VAR_8->header = ((void*)0);
   VAR_8->mapped_address = ((void*)0);
  }
 }
 FUNC_6(FUNC_1(VAR_4));
 if (VAR_7 != VAR_0)
  FUNC_8(VAR_4, VAR_5);
}
