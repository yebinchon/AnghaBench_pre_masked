
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int blocks_count; int edges_count; int* predecessors; TYPE_2__* blocks; } ;
typedef TYPE_1__ zend_cfg ;
struct TYPE_5__ {size_t predecessors_count; int flags; int successors_count; size_t* successors; int predecessor_offset; } ;
typedef TYPE_2__ zend_basic_block ;
typedef int zend_arena ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int **,int,int) ;

int FUNC_1(zend_arena **VAR_2, zend_cfg *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 zend_basic_block *VAR_7;
 zend_basic_block *VAR_8 = VAR_3->blocks;
 zend_basic_block *VAR_9 = VAR_8 + VAR_3->blocks_count;
 int *VAR_10;

 VAR_6 = 0;
 for (VAR_7 = VAR_8; VAR_7 < VAR_9; VAR_7++) {
  VAR_7->predecessors_count = 0;
 }
 for (VAR_7 = VAR_8; VAR_7 < VAR_9; VAR_7++) {
  if (!(VAR_7->flags & VAR_1)) {
   VAR_7->successors_count = 0;
   VAR_7->predecessors_count = 0;
  } else {
   for (VAR_5 = 0; VAR_5 < VAR_7->successors_count; VAR_5++) {
    VAR_6++;
    VAR_8[VAR_7->successors[VAR_5]].predecessors_count++;
   }
  }
 }

 VAR_3->edges_count = VAR_6;
 VAR_3->predecessors = VAR_10 = (int*)FUNC_0(VAR_2, sizeof(int), VAR_6);

 VAR_6 = 0;
 for (VAR_7 = VAR_8; VAR_7 < VAR_9; VAR_7++) {
  if (VAR_7->flags & VAR_1) {
   VAR_7->predecessor_offset = VAR_6;
   VAR_6 += VAR_7->predecessors_count;
   VAR_7->predecessors_count = 0;
  }
 }

 for (VAR_4 = 0; VAR_4 < VAR_3->blocks_count; VAR_4++) {
  if (VAR_8[VAR_4].flags & VAR_1) {

   for (VAR_5 = 0; VAR_5 < VAR_8[VAR_4].successors_count; VAR_5++) {
    int VAR_11 = 0;
    int VAR_12;

    for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
     if (VAR_8[VAR_4].successors[VAR_12] == VAR_8[VAR_4].successors[VAR_5]) {
      VAR_11 = 1;
      break;
     }
    }
    if (!VAR_11) {
     zend_basic_block *VAR_13 = VAR_8 + VAR_8[VAR_4].successors[VAR_5];

     VAR_10[VAR_13->predecessor_offset + VAR_13->predecessors_count] = VAR_4;
     VAR_13->predecessors_count++;
    }
   }
  }
 }

 return VAR_0;
}
