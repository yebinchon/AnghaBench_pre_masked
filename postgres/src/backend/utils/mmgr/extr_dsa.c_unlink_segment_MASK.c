
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__* header; } ;
typedef TYPE_3__ dsa_segment_map ;
struct TYPE_14__ {TYPE_1__* control; } ;
typedef TYPE_4__ dsa_area ;
struct TYPE_12__ {scalar_t__ prev; scalar_t__ next; size_t bin; } ;
struct TYPE_11__ {scalar_t__* segment_bins; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_1 (TYPE_4__*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_4__*,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_3(dsa_area *VAR_1, dsa_segment_map *VAR_2)
{
 if (VAR_2->header->prev != VAR_0)
 {
  dsa_segment_map *VAR_3;

  VAR_3 = FUNC_1(VAR_1, VAR_2->header->prev);
  VAR_3->header->next = VAR_2->header->next;
 }
 else
 {
  FUNC_0(VAR_1->control->segment_bins[VAR_2->header->bin] ==
      FUNC_2(VAR_1, VAR_2));
  VAR_1->control->segment_bins[VAR_2->header->bin] =
   VAR_2->header->next;
 }
 if (VAR_2->header->next != VAR_0)
 {
  dsa_segment_map *VAR_4;

  VAR_4 = FUNC_1(VAR_1, VAR_2->header->next);
  VAR_4->header->prev = VAR_2->header->prev;
 }
}
