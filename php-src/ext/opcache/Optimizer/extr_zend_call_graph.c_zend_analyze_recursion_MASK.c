
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_ulong ;
typedef int zend_op_array ;
struct TYPE_5__ {int flags; TYPE_2__* caller_info; } ;
typedef TYPE_1__ zend_func_info ;
struct TYPE_6__ {int recursive; struct TYPE_6__* next_caller; int * caller_op_array; } ;
typedef TYPE_2__ zend_call_info ;
struct TYPE_7__ {int op_arrays_count; TYPE_1__* func_infos; int ** op_arrays; } ;
typedef TYPE_3__ zend_call_graph ;
typedef int zend_bitset ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_6(zend_call_graph *VAR_4)
{
 zend_op_array *VAR_5;
 zend_func_info *VAR_6;
 zend_call_info *VAR_7;
 int VAR_8;
 int VAR_9 = FUNC_4(VAR_4->op_arrays_count);
 zend_bitset VAR_10;
 FUNC_0(VAR_3);

 VAR_10 = FUNC_1(VAR_9, VAR_3);
 for (VAR_8 = 0; VAR_8 < VAR_4->op_arrays_count; VAR_8++) {
  VAR_5 = VAR_4->op_arrays[VAR_8];
  VAR_6 = VAR_4->func_infos + VAR_8;
  VAR_7 = VAR_6->caller_info;
  while (VAR_7) {
   if (VAR_7->caller_op_array == VAR_5) {
    VAR_7->recursive = 1;
    VAR_6->flags |= VAR_0 | VAR_1;
   } else {
    FUNC_3(VAR_10, 0, sizeof(zend_ulong) * VAR_9);
    if (FUNC_5(VAR_5, VAR_7->caller_op_array, VAR_10)) {
     VAR_7->recursive = 1;
     VAR_6->flags |= VAR_0 | VAR_2;
    }
   }
   VAR_7 = VAR_7->next_caller;
  }
 }

 FUNC_2(VAR_10, VAR_3);
}
