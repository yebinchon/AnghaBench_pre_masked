
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
typedef size_t ut64 ;
typedef int ut32 ;
typedef int ut16 ;
struct TYPE_3__ {size_t start_of_data; size_t page_size; size_t page_starts_count; int* page_starts; size_t delta_mask; size_t delta_shift; size_t value_mask; size_t value_add; size_t slide; } ;
typedef TYPE_1__ RDyldRebaseInfo2 ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int *) ;
 int FUNC_1 (int *,size_t) ;

__attribute__((used)) static void FUNC_2(RDyldRebaseInfo2 *VAR_2, ut8 *VAR_3, ut64 VAR_4, int VAR_5, ut64 VAR_6) {
 int VAR_7 = 0;
 while (VAR_7 < VAR_5) {
  ut64 VAR_8 = VAR_4 - VAR_2->start_of_data;
  ut64 VAR_9 = VAR_8 / VAR_2->page_size;
  ut64 VAR_10 = VAR_8 % VAR_2->page_size;
  ut64 VAR_11 = VAR_2->page_size - VAR_10;

  if (VAR_9 >= VAR_2->page_starts_count) {
   goto next_page;
  }
  ut16 VAR_12 = VAR_2->page_starts[VAR_9];

  if (VAR_12 == VAR_1) {
   goto next_page;
  }

  if (!(VAR_12 & VAR_0)) {
   ut64 VAR_13 = VAR_2->page_starts[VAR_9] * 4;
   if (VAR_13 >= VAR_10 && VAR_13 < VAR_10 + VAR_5) {
    ut32 VAR_14 = 1;
    while (VAR_14) {
     ut64 VAR_15 = VAR_7 + VAR_13 - VAR_10;
     if (VAR_15 >= VAR_5) {
      break;
     }
     ut64 VAR_16 = FUNC_0 (VAR_3 + VAR_15);
     VAR_14 = ((VAR_16 & VAR_2->delta_mask) >> VAR_2->delta_shift);
     if (VAR_15 >= VAR_6) {
      ut64 VAR_17 = VAR_16 & VAR_2->value_mask;
      if (VAR_17 != 0) {
       VAR_17 += VAR_2->value_add;
       VAR_17 += VAR_2->slide;
      }
      FUNC_1 (VAR_3 + VAR_15, VAR_17);
     }
     VAR_13 += VAR_14;
    }
   }
  }
next_page:
  VAR_7 += VAR_11;
  VAR_4 += VAR_11;
 }
}
