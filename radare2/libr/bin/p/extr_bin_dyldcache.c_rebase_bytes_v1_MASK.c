
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut64 ;
struct TYPE_3__ {int start_of_data; int page_size; int entries_size; int toc_count; int* entries; size_t* toc; scalar_t__ slide; } ;
typedef TYPE_1__ RDyldRebaseInfo1 ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int*,int) ;

__attribute__((used)) static void FUNC_2(RDyldRebaseInfo1 *VAR_0, ut8 *VAR_1, ut64 VAR_2, int VAR_3, ut64 VAR_4) {
 int VAR_5 = 0;
 while (VAR_5 < VAR_3) {
  ut64 VAR_6 = VAR_2 - VAR_0->start_of_data;
  ut64 VAR_7 = VAR_6 / VAR_0->page_size;
  ut64 VAR_8 = VAR_6 % VAR_0->page_size;
  ut64 VAR_9 = VAR_0->page_size - VAR_8;
  ut64 VAR_10 = VAR_8 / 32;
  ut64 VAR_11 = (VAR_8 % 32) / 4;

  if (VAR_10 >= VAR_0->entries_size) {
   VAR_5 += VAR_9;
   VAR_2 += VAR_9;
   continue;
  }

  if (VAR_7 >= VAR_0->toc_count) {
   break;
  }

  ut8 *VAR_12 = &VAR_0->entries[VAR_0->toc[VAR_7] * VAR_0->entries_size];
  ut8 VAR_13 = VAR_12[VAR_10];

  if (VAR_13 & (1 << VAR_11)) {
   ut64 VAR_14 = FUNC_0 (VAR_1 + VAR_5);
   VAR_14 += VAR_0->slide;
   FUNC_1 (VAR_1 + VAR_5, VAR_14);
   VAR_5 += 8;
   VAR_2 += 8;
  } else {
   VAR_5 += 4;
   VAR_2 += 4;
  }
 }
}
