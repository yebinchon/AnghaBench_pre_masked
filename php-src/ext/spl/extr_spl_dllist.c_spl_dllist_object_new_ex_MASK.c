
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_44__ TYPE_9__ ;
typedef struct TYPE_43__ TYPE_8__ ;
typedef struct TYPE_42__ TYPE_7__ ;
typedef struct TYPE_41__ TYPE_6__ ;
typedef struct TYPE_40__ TYPE_5__ ;
typedef struct TYPE_39__ TYPE_4__ ;
typedef struct TYPE_38__ TYPE_3__ ;
typedef struct TYPE_37__ TYPE_2__ ;
typedef struct TYPE_36__ TYPE_1__ ;
typedef struct TYPE_35__ TYPE_14__ ;
typedef struct TYPE_34__ TYPE_13__ ;
typedef struct TYPE_33__ TYPE_12__ ;
typedef struct TYPE_32__ TYPE_11__ ;
typedef struct TYPE_31__ TYPE_10__ ;


struct TYPE_32__ {int * handlers; } ;
typedef TYPE_11__ zend_object ;
struct TYPE_33__ {int function_table; struct TYPE_33__* parent; } ;
typedef TYPE_12__ zend_class_entry ;
struct TYPE_34__ {int head; int dtor; int ctor; } ;
typedef TYPE_13__ spl_ptr_llist ;
struct TYPE_35__ {int flags; TYPE_11__ std; TYPE_10__* fptr_count; TYPE_8__* fptr_offset_del; TYPE_6__* fptr_offset_has; TYPE_4__* fptr_offset_set; TYPE_2__* fptr_offset_get; int traverse_pointer; TYPE_13__* llist; int ce_get_iterator; scalar_t__ traverse_position; } ;
typedef TYPE_14__ spl_dllist_object ;
struct TYPE_44__ {TYPE_12__* scope; } ;
struct TYPE_42__ {TYPE_12__* scope; } ;
struct TYPE_43__ {TYPE_7__ common; } ;
struct TYPE_40__ {TYPE_12__* scope; } ;
struct TYPE_41__ {TYPE_5__ common; } ;
struct TYPE_38__ {TYPE_12__* scope; } ;
struct TYPE_39__ {TYPE_3__ common; } ;
struct TYPE_36__ {TYPE_12__* scope; } ;
struct TYPE_37__ {TYPE_1__ common; } ;
struct TYPE_31__ {TYPE_9__ common; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_11__*,TYPE_12__*) ;
 int FUNC_2 (int *,int ,char*) ;
 TYPE_12__* VAR_3 ;
 TYPE_12__* VAR_4 ;
 TYPE_12__* VAR_5 ;
 TYPE_14__* FUNC_3 (TYPE_11__*) ;
 int VAR_6 ;
 int FUNC_4 (TYPE_13__*,TYPE_13__*) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_6 (int *,char*,int) ;
 TYPE_14__* FUNC_7 (int,TYPE_12__*) ;
 int FUNC_8 (TYPE_11__*,TYPE_12__*) ;

__attribute__((used)) static zend_object *FUNC_9(zend_class_entry *VAR_9, zend_object *VAR_10, int VAR_11)
{
 spl_dllist_object *VAR_12;
 zend_class_entry *VAR_13 = VAR_9;
 int VAR_14 = 0;

 VAR_12 = FUNC_7(sizeof(spl_dllist_object), VAR_13);

 FUNC_8(&VAR_12->std, VAR_9);
 FUNC_1(&VAR_12->std, VAR_9);

 VAR_12->flags = 0;
 VAR_12->traverse_position = 0;

 if (VAR_10) {
  spl_dllist_object *VAR_15 = FUNC_3(VAR_10);
  VAR_12->ce_get_iterator = VAR_15->ce_get_iterator;

  if (VAR_11) {
   VAR_12->llist = (spl_ptr_llist *)FUNC_5(VAR_15->llist->ctor, VAR_15->llist->dtor);
   FUNC_4(VAR_15->llist, VAR_12->llist);
   VAR_12->traverse_pointer = VAR_12->llist->head;
   FUNC_0(VAR_12->traverse_pointer);
  } else {
   VAR_12->llist = VAR_15->llist;
   VAR_12->traverse_pointer = VAR_12->llist->head;
   FUNC_0(VAR_12->traverse_pointer);
  }

  VAR_12->flags = VAR_15->flags;
 } else {
  VAR_12->llist = (spl_ptr_llist *)FUNC_5(VAR_7, VAR_8);
  VAR_12->traverse_pointer = VAR_12->llist->head;
  FUNC_0(VAR_12->traverse_pointer);
 }

 while (VAR_13) {
  if (VAR_13 == VAR_5) {
   VAR_12->flags |= (VAR_1 | VAR_2);
   VAR_12->std.handlers = &VAR_6;
  } else if (VAR_13 == VAR_4) {
   VAR_12->flags |= VAR_1;
   VAR_12->std.handlers = &VAR_6;
  }

  if (VAR_13 == VAR_3) {
   VAR_12->std.handlers = &VAR_6;
   break;
  }

  VAR_13 = VAR_13->parent;
  VAR_14 = 1;
 }

 if (!VAR_13) {
  FUNC_2(((void*)0), VAR_0, "Internal compiler error, Class is not child of SplDoublyLinkedList");
 }
 if (VAR_14) {
  VAR_12->fptr_offset_get = FUNC_6(&VAR_9->function_table, "offsetget", sizeof("offsetget") - 1);
  if (VAR_12->fptr_offset_get->common.scope == VAR_13) {
   VAR_12->fptr_offset_get = ((void*)0);
  }
  VAR_12->fptr_offset_set = FUNC_6(&VAR_9->function_table, "offsetset", sizeof("offsetset") - 1);
  if (VAR_12->fptr_offset_set->common.scope == VAR_13) {
   VAR_12->fptr_offset_set = ((void*)0);
  }
  VAR_12->fptr_offset_has = FUNC_6(&VAR_9->function_table, "offsetexists", sizeof("offsetexists") - 1);
  if (VAR_12->fptr_offset_has->common.scope == VAR_13) {
   VAR_12->fptr_offset_has = ((void*)0);
  }
  VAR_12->fptr_offset_del = FUNC_6(&VAR_9->function_table, "offsetunset", sizeof("offsetunset") - 1);
  if (VAR_12->fptr_offset_del->common.scope == VAR_13) {
   VAR_12->fptr_offset_del = ((void*)0);
  }
  VAR_12->fptr_count = FUNC_6(&VAR_9->function_table, "count", sizeof("count") - 1);
  if (VAR_12->fptr_count->common.scope == VAR_13) {
   VAR_12->fptr_count = ((void*)0);
  }
 }

 return &VAR_12->std;
}
