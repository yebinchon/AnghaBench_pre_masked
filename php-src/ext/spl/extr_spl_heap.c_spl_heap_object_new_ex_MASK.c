
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int zval ;
struct TYPE_27__ {int * handlers; } ;
typedef TYPE_5__ zend_object ;
struct TYPE_28__ {int function_table; struct TYPE_28__* parent; } ;
typedef TYPE_6__ zend_class_entry ;
typedef int spl_pqueue_elem ;
struct TYPE_29__ {TYPE_5__ std; TYPE_4__* fptr_count; TYPE_2__* fptr_cmp; void* heap; int flags; int ce_get_iterator; } ;
typedef TYPE_7__ spl_heap_object ;
struct TYPE_25__ {TYPE_6__* scope; } ;
struct TYPE_26__ {TYPE_3__ common; } ;
struct TYPE_23__ {TYPE_6__* scope; } ;
struct TYPE_24__ {TYPE_1__ common; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_1 (int *,int ,char*) ;
 TYPE_6__* VAR_2 ;
 TYPE_6__* VAR_3 ;
 TYPE_6__* VAR_4 ;
 TYPE_6__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_7__* FUNC_2 (TYPE_5__*) ;
 void* FUNC_3 (void*) ;
 void* FUNC_4 (int ,int ,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* FUNC_5 (int *,char*,int) ;
 TYPE_7__* FUNC_6 (int,TYPE_6__*) ;
 int FUNC_7 (TYPE_5__*,TYPE_6__*) ;

__attribute__((used)) static zend_object *FUNC_8(zend_class_entry *VAR_15, zend_object *VAR_16, int VAR_17)
{
 spl_heap_object *VAR_18;
 zend_class_entry *VAR_19 = VAR_15;
 int VAR_20 = 0;

 VAR_18 = FUNC_6(sizeof(spl_heap_object), VAR_19);

 FUNC_7(&VAR_18->std, VAR_15);
 FUNC_0(&VAR_18->std, VAR_15);

 if (VAR_16) {
  spl_heap_object *VAR_21 = FUNC_2(VAR_16);
  VAR_18->std.handlers = VAR_21->std.handlers;
  VAR_18->ce_get_iterator = VAR_21->ce_get_iterator;

  if (VAR_17) {
   VAR_18->heap = FUNC_3(VAR_21->heap);
  } else {
   VAR_18->heap = VAR_21->heap;
  }

  VAR_18->flags = VAR_21->flags;
  VAR_18->fptr_cmp = VAR_21->fptr_cmp;
  VAR_18->fptr_count = VAR_21->fptr_count;
  return &VAR_18->std;
 }

 while (VAR_19) {
  if (VAR_19 == VAR_5) {
   VAR_18->heap = FUNC_4(VAR_14, VAR_8, VAR_9, sizeof(spl_pqueue_elem));
   VAR_18->std.handlers = &VAR_7;
   VAR_18->flags = VAR_1;
   break;
  }

  if (VAR_19 == VAR_4 || VAR_19 == VAR_3
    || VAR_19 == VAR_2) {
   VAR_18->heap = FUNC_4(
    VAR_19 == VAR_4 ? VAR_13 : VAR_12,
    VAR_10, VAR_11, sizeof(zval));
   VAR_18->std.handlers = &VAR_6;
   break;
  }

  VAR_19 = VAR_19->parent;
  VAR_20 = 1;
 }

 if (!VAR_19) {
  FUNC_1(((void*)0), VAR_0, "Internal compiler error, Class is not child of SplHeap");
 }

 if (VAR_20) {
  VAR_18->fptr_cmp = FUNC_5(&VAR_15->function_table, "compare", sizeof("compare") - 1);
  if (VAR_18->fptr_cmp->common.scope == VAR_19) {
   VAR_18->fptr_cmp = ((void*)0);
  }
  VAR_18->fptr_count = FUNC_5(&VAR_15->function_table, "count", sizeof("count") - 1);
  if (VAR_18->fptr_count->common.scope == VAR_19) {
   VAR_18->fptr_count = ((void*)0);
  }
 }

 return &VAR_18->std;
}
