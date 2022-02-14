
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_64__ TYPE_9__ ;
typedef struct TYPE_63__ TYPE_8__ ;
typedef struct TYPE_62__ TYPE_7__ ;
typedef struct TYPE_61__ TYPE_6__ ;
typedef struct TYPE_60__ TYPE_5__ ;
typedef struct TYPE_59__ TYPE_4__ ;
typedef struct TYPE_58__ TYPE_3__ ;
typedef struct TYPE_57__ TYPE_32__ ;
typedef struct TYPE_56__ TYPE_2__ ;
typedef struct TYPE_55__ TYPE_24__ ;
typedef struct TYPE_54__ TYPE_23__ ;
typedef struct TYPE_53__ TYPE_22__ ;
typedef struct TYPE_52__ TYPE_21__ ;
typedef struct TYPE_51__ TYPE_20__ ;
typedef struct TYPE_50__ TYPE_1__ ;
typedef struct TYPE_49__ TYPE_19__ ;
typedef struct TYPE_48__ TYPE_18__ ;
typedef struct TYPE_47__ TYPE_17__ ;
typedef struct TYPE_46__ TYPE_16__ ;
typedef struct TYPE_45__ TYPE_15__ ;
typedef struct TYPE_44__ TYPE_14__ ;
typedef struct TYPE_43__ TYPE_13__ ;
typedef struct TYPE_42__ TYPE_12__ ;
typedef struct TYPE_41__ TYPE_11__ ;
typedef struct TYPE_40__ TYPE_10__ ;


struct TYPE_52__ {int * handlers; } ;
typedef TYPE_21__ zend_object ;
struct TYPE_53__ {TYPE_10__* zf_next; TYPE_8__* zf_current; TYPE_6__* zf_key; TYPE_4__* zf_valid; TYPE_2__* zf_rewind; } ;
typedef TYPE_22__ zend_class_iterator_funcs ;
struct TYPE_54__ {int function_table; TYPE_22__* iterator_funcs_ptr; struct TYPE_54__* parent; } ;
typedef TYPE_23__ zend_class_entry ;
struct TYPE_57__ {int size; } ;
struct TYPE_55__ {TYPE_21__ std; TYPE_20__* fptr_count; TYPE_18__* fptr_offset_del; TYPE_16__* fptr_offset_has; TYPE_14__* fptr_offset_set; TYPE_12__* fptr_offset_get; int flags; TYPE_32__ array; int ce_get_iterator; scalar_t__ current; } ;
typedef TYPE_24__ spl_fixedarray_object ;
struct TYPE_64__ {TYPE_23__* scope; } ;
struct TYPE_62__ {TYPE_23__* scope; } ;
struct TYPE_63__ {TYPE_7__ common; } ;
struct TYPE_60__ {TYPE_23__* scope; } ;
struct TYPE_61__ {TYPE_5__ common; } ;
struct TYPE_58__ {TYPE_23__* scope; } ;
struct TYPE_59__ {TYPE_3__ common; } ;
struct TYPE_50__ {TYPE_23__* scope; } ;
struct TYPE_56__ {TYPE_1__ common; } ;
struct TYPE_49__ {TYPE_23__* scope; } ;
struct TYPE_51__ {TYPE_19__ common; } ;
struct TYPE_47__ {TYPE_23__* scope; } ;
struct TYPE_48__ {TYPE_17__ common; } ;
struct TYPE_45__ {TYPE_23__* scope; } ;
struct TYPE_46__ {TYPE_15__ common; } ;
struct TYPE_43__ {TYPE_23__* scope; } ;
struct TYPE_44__ {TYPE_13__ common; } ;
struct TYPE_41__ {TYPE_23__* scope; } ;
struct TYPE_42__ {TYPE_11__ common; } ;
struct TYPE_40__ {TYPE_9__ common; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_21__*,TYPE_23__*) ;
 int FUNC_1 (int *,int ,char*) ;
 TYPE_23__* VAR_6 ;
 TYPE_24__* FUNC_2 (TYPE_21__*) ;
 int FUNC_3 (TYPE_32__*,TYPE_32__*) ;
 int FUNC_4 (TYPE_32__*,int ) ;
 int VAR_7 ;
 void* FUNC_5 (int *,char*,int) ;
 TYPE_24__* FUNC_6 (int,TYPE_23__*) ;
 int FUNC_7 (TYPE_21__*,TYPE_23__*) ;

__attribute__((used)) static zend_object *FUNC_8(zend_class_entry *VAR_8, zend_object *VAR_9, int VAR_10)
{
 spl_fixedarray_object *VAR_11;
 zend_class_entry *VAR_12 = VAR_8;
 int VAR_13 = 0;
 zend_class_iterator_funcs *VAR_14;

 VAR_11 = FUNC_6(sizeof(spl_fixedarray_object), VAR_12);

 FUNC_7(&VAR_11->std, VAR_8);
 FUNC_0(&VAR_11->std, VAR_8);

 VAR_11->current = 0;
 VAR_11->flags = 0;

 if (VAR_9 && VAR_10) {
  spl_fixedarray_object *VAR_15 = FUNC_2(VAR_9);
  VAR_11->ce_get_iterator = VAR_15->ce_get_iterator;
  FUNC_4(&VAR_11->array, VAR_15->array.size);
  FUNC_3(&VAR_11->array, &VAR_15->array);
 }

 while (VAR_12) {
  if (VAR_12 == VAR_6) {
   VAR_11->std.handlers = &VAR_7;
   break;
  }

  VAR_12 = VAR_12->parent;
  VAR_13 = 1;
 }

 if (!VAR_12) {
  FUNC_1(((void*)0), VAR_0, "Internal compiler error, Class is not child of SplFixedArray");
 }

 VAR_14 = VAR_8->iterator_funcs_ptr;
 if (!VAR_14->zf_current) {
  VAR_14->zf_rewind = FUNC_5(&VAR_8->function_table, "rewind", sizeof("rewind") - 1);
  VAR_14->zf_valid = FUNC_5(&VAR_8->function_table, "valid", sizeof("valid") - 1);
  VAR_14->zf_key = FUNC_5(&VAR_8->function_table, "key", sizeof("key") - 1);
  VAR_14->zf_current = FUNC_5(&VAR_8->function_table, "current", sizeof("current") - 1);
  VAR_14->zf_next = FUNC_5(&VAR_8->function_table, "next", sizeof("next") - 1);
 }
 if (VAR_13) {
  if (VAR_14->zf_rewind->common.scope != VAR_12) {
   VAR_11->flags |= VAR_4;
  }
  if (VAR_14->zf_valid->common.scope != VAR_12) {
   VAR_11->flags |= VAR_5;
  }
  if (VAR_14->zf_key->common.scope != VAR_12) {
   VAR_11->flags |= VAR_2;
  }
  if (VAR_14->zf_current->common.scope != VAR_12) {
   VAR_11->flags |= VAR_1;
  }
  if (VAR_14->zf_next->common.scope != VAR_12) {
   VAR_11->flags |= VAR_3;
  }

  VAR_11->fptr_offset_get = FUNC_5(&VAR_8->function_table, "offsetget", sizeof("offsetget") - 1);
  if (VAR_11->fptr_offset_get->common.scope == VAR_12) {
   VAR_11->fptr_offset_get = ((void*)0);
  }
  VAR_11->fptr_offset_set = FUNC_5(&VAR_8->function_table, "offsetset", sizeof("offsetset") - 1);
  if (VAR_11->fptr_offset_set->common.scope == VAR_12) {
   VAR_11->fptr_offset_set = ((void*)0);
  }
  VAR_11->fptr_offset_has = FUNC_5(&VAR_8->function_table, "offsetexists", sizeof("offsetexists") - 1);
  if (VAR_11->fptr_offset_has->common.scope == VAR_12) {
   VAR_11->fptr_offset_has = ((void*)0);
  }
  VAR_11->fptr_offset_del = FUNC_5(&VAR_8->function_table, "offsetunset", sizeof("offsetunset") - 1);
  if (VAR_11->fptr_offset_del->common.scope == VAR_12) {
   VAR_11->fptr_offset_del = ((void*)0);
  }
  VAR_11->fptr_count = FUNC_5(&VAR_8->function_table, "count", sizeof("count") - 1);
  if (VAR_11->fptr_count->common.scope == VAR_12) {
   VAR_11->fptr_count = ((void*)0);
  }
 }

 return &VAR_11->std;
}
