
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;


typedef int zval ;
struct TYPE_21__ {TYPE_1__* funcs; } ;
typedef TYPE_2__ zend_object_iterator ;
struct TYPE_22__ {TYPE_2__* (* get_iterator ) (TYPE_3__*,int *,int ) ;} ;
typedef TYPE_3__ zend_class_entry ;
typedef int spl_sub_iterator ;
struct TYPE_23__ {size_t level; int flags; int max_depth; int const mode; TYPE_14__* iterators; scalar_t__ endChildren; TYPE_3__* ce; scalar_t__ beginChildren; scalar_t__ callGetChildren; scalar_t__ nextElement; scalar_t__ callHasChildren; } ;
typedef TYPE_4__ spl_recursive_it_object ;
struct TYPE_20__ {int (* rewind ) (TYPE_2__*) ;int (* valid ) (TYPE_2__*) ;int (* move_forward ) (TYPE_2__*) ;} ;
struct TYPE_19__ {int state; int zobject; TYPE_3__* ce; TYPE_2__* iterator; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 TYPE_3__* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 TYPE_14__* FUNC_7 (TYPE_14__*,int) ;
 int VAR_4 ;
 int FUNC_8 (TYPE_3__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 TYPE_2__* FUNC_11 (TYPE_3__*,int *,int ) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (int ,TYPE_3__*,scalar_t__*,char*,int *) ;
 int FUNC_14 () ;
 int FUNC_15 (int *) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (int ,char*,int ) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static void FUNC_19(spl_recursive_it_object *VAR_7, zval *VAR_8)
{
 zend_object_iterator *VAR_9;
 zval *VAR_10;
 zend_class_entry *VAR_11;
 zval VAR_12, VAR_13;
 zend_object_iterator *VAR_14;
 int VAR_15;

 FUNC_1(VAR_9, VAR_7);

 while (!FUNC_0(VAR_4)) {
next_step:
  VAR_9 = VAR_7->iterators[VAR_7->level].iterator;
  switch (VAR_7->iterators[VAR_7->level].state) {
   case 131:
    VAR_9->funcs->move_forward(VAR_9);
    if (FUNC_0(VAR_4)) {
     if (!(VAR_7->flags & VAR_3)) {
      return;
     } else {
      FUNC_14();
     }
    }

   case 129:
    if (VAR_9->funcs->valid(VAR_9) == VAR_0) {
     break;
    }
    VAR_7->iterators[VAR_7->level].state = 128;

   case 128:
    VAR_11 = VAR_7->iterators[VAR_7->level].ce;
    VAR_10 = &VAR_7->iterators[VAR_7->level].zobject;
    if (VAR_7->callHasChildren) {
     FUNC_13(FUNC_5(VAR_8), VAR_7->ce, &VAR_7->callHasChildren, "callHasChildren", &VAR_12);
    } else {
     FUNC_13(FUNC_5(VAR_10), VAR_11, ((void*)0), "haschildren", &VAR_12);
    }
    if (FUNC_0(VAR_4)) {
     if (!(VAR_7->flags & VAR_3)) {
      VAR_7->iterators[VAR_7->level].state = 131;
      return;
     } else {
      FUNC_14();
     }
    }
    if (FUNC_6(VAR_12) != VAR_2) {
     VAR_15 = FUNC_15(&VAR_12);
     FUNC_18(&VAR_12);
     if (VAR_15) {
      if (VAR_7->max_depth == -1 || VAR_7->max_depth > VAR_7->level) {
       switch (VAR_7->mode) {
       case 134:
       case 135:
        VAR_7->iterators[VAR_7->level].state = 132;
        goto next_step;
       case 133:
        VAR_7->iterators[VAR_7->level].state = 130;
        goto next_step;
       }
      } else {

       if (VAR_7->mode == 134) {

        VAR_7->iterators[VAR_7->level].state = 131;
        goto next_step;
       }
      }
     }
    }
    if (VAR_7->nextElement) {
     FUNC_13(FUNC_5(VAR_8), VAR_7->ce, &VAR_7->nextElement, "nextelement", ((void*)0));
    }
    VAR_7->iterators[VAR_7->level].state = 131;
    if (FUNC_0(VAR_4)) {
     if (!(VAR_7->flags & VAR_3)) {
      return;
     } else {
      FUNC_14();
     }
    }
    return ;
   case 130:
    if (VAR_7->nextElement && (VAR_7->mode == 133 || VAR_7->mode == 135)) {
     FUNC_13(FUNC_5(VAR_8), VAR_7->ce, &VAR_7->nextElement, "nextelement", ((void*)0));
    }
    if (VAR_7->mode == 133) {
     VAR_7->iterators[VAR_7->level].state = 132;
    } else {
     VAR_7->iterators[VAR_7->level].state = 131;
    }
    return ;
   case 132:
    VAR_11 = VAR_7->iterators[VAR_7->level].ce;
    VAR_10 = &VAR_7->iterators[VAR_7->level].zobject;
    if (VAR_7->callGetChildren) {
     FUNC_13(FUNC_5(VAR_8), VAR_7->ce, &VAR_7->callGetChildren, "callGetChildren", &VAR_13);
    } else {
     FUNC_13(FUNC_5(VAR_10), VAR_11, ((void*)0), "getchildren", &VAR_13);
    }

    if (FUNC_0(VAR_4)) {
     if (!(VAR_7->flags & VAR_3)) {
      return;
     } else {
      FUNC_14();
      FUNC_18(&VAR_13);
      VAR_7->iterators[VAR_7->level].state = 131;
      goto next_step;
     }
    }

    if (FUNC_6(VAR_13) == VAR_2 || FUNC_6(VAR_13) != VAR_1 ||
      !((VAR_11 = FUNC_4(VAR_13)) && FUNC_8(VAR_11, VAR_5))) {
     FUNC_18(&VAR_13);
     FUNC_17(VAR_6, "Objects returned by RecursiveIterator::getChildren() must implement RecursiveIterator", 0);
     return;
    }

    if (VAR_7->mode == 135) {
     VAR_7->iterators[VAR_7->level].state = 130;
    } else {
     VAR_7->iterators[VAR_7->level].state = 131;
    }
    VAR_7->iterators = FUNC_7(VAR_7->iterators, sizeof(spl_sub_iterator) * (++VAR_7->level+1));
    VAR_14 = VAR_11->get_iterator(VAR_11, &VAR_13, 0);
    FUNC_2(&VAR_7->iterators[VAR_7->level].zobject, &VAR_13);
    VAR_7->iterators[VAR_7->level].iterator = VAR_14;
    VAR_7->iterators[VAR_7->level].ce = VAR_11;
    VAR_7->iterators[VAR_7->level].state = 129;
    if (VAR_14->funcs->rewind) {
     VAR_14->funcs->rewind(VAR_14);
    }
    if (VAR_7->beginChildren) {
     FUNC_13(FUNC_5(VAR_8), VAR_7->ce, &VAR_7->beginChildren, "beginchildren", ((void*)0));
     if (FUNC_0(VAR_4)) {
      if (!(VAR_7->flags & VAR_3)) {
       return;
      } else {
       FUNC_14();
      }
     }
    }
    goto next_step;
  }

  if (VAR_7->level > 0) {
   if (VAR_7->endChildren) {
    FUNC_13(FUNC_5(VAR_8), VAR_7->ce, &VAR_7->endChildren, "endchildren", ((void*)0));
    if (FUNC_0(VAR_4)) {
     if (!(VAR_7->flags & VAR_3)) {
      return;
     } else {
      FUNC_14();
     }
    }
   }
   if (VAR_7->level > 0) {
    zval VAR_16;
    FUNC_2(&VAR_16, &VAR_7->iterators[VAR_7->level].zobject);
    FUNC_3(&VAR_7->iterators[VAR_7->level].zobject);
    FUNC_18(&VAR_16);
    FUNC_16(VAR_9);
    VAR_7->level--;
   }
  } else {
   return;
  }
 }
}
