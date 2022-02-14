
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ zend_uchar ;
struct TYPE_7__ {scalar_t__ opcode; } ;
typedef TYPE_1__ zend_op ;
struct TYPE_8__ {int flags; TYPE_3__* blocks; } ;
typedef TYPE_2__ zend_cfg ;
struct TYPE_9__ {int flags; int successors_count; int* successors; int len; int start; } ;
typedef TYPE_3__ zend_basic_block ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;

__attribute__((used)) static void FUNC_1(zend_op *VAR_21, zend_cfg *VAR_22, zend_basic_block *VAR_23)
{
 zend_basic_block *VAR_24 = VAR_22->blocks;

 while (1) {
  int VAR_25;

  VAR_23->flags |= VAR_3;
  if (VAR_23->successors_count == 0) {
   VAR_23->flags |= VAR_1;
   return;
  }

  for (VAR_25 = 0; VAR_25 < VAR_23->successors_count; VAR_25++) {
   zend_basic_block *VAR_26 = VAR_24 + VAR_23->successors[VAR_25];

   if (VAR_23->len != 0) {
    zend_uchar VAR_27 = VAR_21[VAR_23->start + VAR_23->len - 1].opcode;
    if (VAR_23->successors_count == 1) {
     if (VAR_27 == VAR_13) {
      VAR_26->flags |= VAR_5;
     } else {
      VAR_26->flags |= VAR_2;

      if ((VAR_22->flags & VAR_7)) {
       if (VAR_27 == VAR_12 ||
        VAR_27 == VAR_11 ||
        VAR_27 == VAR_19 ||
        VAR_27 == VAR_20 ||
        VAR_27 == VAR_8 ||
        VAR_27 == VAR_10 ||
        VAR_27 == VAR_9) {
        VAR_26->flags |= VAR_0;
       }
      }
      if ((VAR_22->flags & VAR_6)) {
       if (VAR_27 == VAR_15 ||
        VAR_27 == VAR_16) {
        VAR_26->flags |= VAR_4;
       }
      }
     }
    } else if (VAR_23->successors_count == 2) {
     if (VAR_25 == 0 || VAR_27 == VAR_14) {
      VAR_26->flags |= VAR_5;
     } else {
      VAR_26->flags |= VAR_2;
     }
    } else {
     FUNC_0(VAR_27 == VAR_17 || VAR_27 == VAR_18);
     if (VAR_25 == VAR_23->successors_count - 1) {
      VAR_26->flags |= VAR_2 | VAR_5;
     } else {
      VAR_26->flags |= VAR_5;
     }
    }
   } else {
    VAR_26->flags |= VAR_2;
   }

   if (VAR_25 == VAR_23->successors_count - 1) {

    if (VAR_26->flags & VAR_3) {
     return;
    }

    VAR_23 = VAR_26;
    break;
   } else {

    if (!(VAR_26->flags & VAR_3)) {
     FUNC_1(VAR_21, VAR_22, VAR_26);
    }
   }
  }
 }
}
