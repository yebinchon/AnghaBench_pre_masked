
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
typedef size_t ut64 ;
struct TYPE_3__ {size_t start_of_data; size_t page_size; size_t page_starts_count; size_t* page_starts; size_t delta_mask; size_t delta_shift; size_t auth_value_add; scalar_t__ slide; } ;
typedef TYPE_1__ RDyldRebaseInfo3 ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (size_t) ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (int *,size_t) ;

__attribute__((used)) static void FUNC_3(RDyldRebaseInfo3 *VAR_1, ut8 *VAR_2, ut64 VAR_3, int VAR_4, ut64 VAR_5) {
 int VAR_6 = 0;
 while (VAR_6 < VAR_4) {
  ut64 VAR_7 = VAR_3 - VAR_1->start_of_data;
  ut64 VAR_8 = VAR_7 / VAR_1->page_size;
  ut64 VAR_9 = VAR_7 % VAR_1->page_size;
  ut64 VAR_10 = VAR_1->page_size - VAR_9;

  if (VAR_8 >= VAR_1->page_starts_count) {
   goto next_page;
  }
  ut64 VAR_11 = VAR_1->page_starts[VAR_8];

  if (VAR_11 == VAR_0) {
   goto next_page;
  }

  ut64 VAR_12 = VAR_11;
  if (VAR_12 >= VAR_9 && VAR_12 < VAR_9 + VAR_4) {
   do {
    ut64 VAR_13 = VAR_6 + VAR_12 - VAR_9;
    if (VAR_13 >= VAR_4) {
     break;
    }
    ut64 VAR_14 = FUNC_1 (VAR_2 + VAR_13);
    VAR_11 = ((VAR_14 & VAR_1->delta_mask) >> VAR_1->delta_shift);
    if (VAR_13 >= VAR_5) {
     ut64 VAR_15 = 0;
     if (FUNC_0 (VAR_14)) {
      VAR_15 = (VAR_14 & 0xFFFFFFFFULL) + VAR_1->auth_value_add;

     } else {
      VAR_15 = ((VAR_14 << 13) & 0xFF00000000000000ULL) | (VAR_14 & 0x7ffffffffffULL);
      VAR_15 &= 0x00FFFFFFFFFFFFFFULL;
     }
     if (VAR_15 != 0) {
      VAR_15 += VAR_1->slide;
     }
     FUNC_2 (VAR_2 + VAR_13, VAR_15);
    }
    VAR_12 += VAR_11;
   } while (VAR_11);
  }
next_page:
  VAR_6 += VAR_10;
  VAR_3 += VAR_10;
 }
}
