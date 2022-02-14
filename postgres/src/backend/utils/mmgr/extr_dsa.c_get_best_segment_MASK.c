
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {TYPE_2__* header; int fpm; } ;
typedef TYPE_3__ dsa_segment_map ;
typedef scalar_t__ dsa_segment_index ;
struct TYPE_16__ {TYPE_1__* control; } ;
typedef TYPE_4__ dsa_area ;
struct TYPE_14__ {scalar_t__ next; size_t bin; scalar_t__ prev; } ;
struct TYPE_13__ {scalar_t__* segment_bins; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*) ;
 size_t FUNC_4 (size_t) ;
 size_t FUNC_5 (int ) ;
 TYPE_3__* FUNC_6 (TYPE_4__*,scalar_t__) ;
 int FUNC_7 (TYPE_4__*,TYPE_3__*) ;

__attribute__((used)) static dsa_segment_map *
FUNC_8(dsa_area *VAR_2, size_t VAR_3)
{
 size_t VAR_4;

 FUNC_0(FUNC_2(FUNC_1(VAR_2)));
 FUNC_3(VAR_2);





 for (VAR_4 = FUNC_4(VAR_3);
   VAR_4 < VAR_0;
   ++VAR_4)
 {




  size_t VAR_5 = (size_t) 1 << (VAR_4 - 1);
  dsa_segment_index VAR_6;


  VAR_6 = VAR_2->control->segment_bins[VAR_4];
  while (VAR_6 != VAR_1)
  {
   dsa_segment_map *VAR_7;
   dsa_segment_index VAR_8;
   size_t VAR_9;

   VAR_7 = FUNC_6(VAR_2, VAR_6);
   VAR_8 = VAR_7->header->next;
   VAR_9 = FUNC_5(VAR_7->fpm);


   if (VAR_9 >= VAR_5 && VAR_9 < VAR_3)
   {
    VAR_6 = VAR_8;
    continue;
   }


   if (VAR_9 < VAR_5)
   {
    size_t VAR_10;

    VAR_10 = FUNC_4(VAR_9);


    FUNC_7(VAR_2, VAR_7);


    VAR_7->header->prev = VAR_1;
    VAR_7->header->next =
     VAR_2->control->segment_bins[VAR_10];
    VAR_7->header->bin = VAR_10;
    VAR_2->control->segment_bins[VAR_10] = VAR_6;
    if (VAR_7->header->next != VAR_1)
    {
     dsa_segment_map *VAR_11;

     VAR_11 = FUNC_6(VAR_2,
            VAR_7->header->next);
     FUNC_0(VAR_11->header->bin == VAR_10);
     VAR_11->header->prev = VAR_6;
    }





   }


   if (VAR_9 >= VAR_3)
    return VAR_7;


   VAR_6 = VAR_8;
  }
 }


 return ((void*)0);
}
