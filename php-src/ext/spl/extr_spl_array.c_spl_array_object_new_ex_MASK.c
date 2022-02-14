
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_65__ TYPE_9__ ;
typedef struct TYPE_64__ TYPE_8__ ;
typedef struct TYPE_63__ TYPE_7__ ;
typedef struct TYPE_62__ TYPE_6__ ;
typedef struct TYPE_61__ TYPE_5__ ;
typedef struct TYPE_60__ TYPE_4__ ;
typedef struct TYPE_59__ TYPE_3__ ;
typedef struct TYPE_58__ TYPE_2__ ;
typedef struct TYPE_57__ TYPE_24__ ;
typedef struct TYPE_56__ TYPE_23__ ;
typedef struct TYPE_55__ TYPE_22__ ;
typedef struct TYPE_54__ TYPE_21__ ;
typedef struct TYPE_53__ TYPE_20__ ;
typedef struct TYPE_52__ TYPE_1__ ;
typedef struct TYPE_51__ TYPE_19__ ;
typedef struct TYPE_50__ TYPE_18__ ;
typedef struct TYPE_49__ TYPE_17__ ;
typedef struct TYPE_48__ TYPE_16__ ;
typedef struct TYPE_47__ TYPE_15__ ;
typedef struct TYPE_46__ TYPE_14__ ;
typedef struct TYPE_45__ TYPE_13__ ;
typedef struct TYPE_44__ TYPE_12__ ;
typedef struct TYPE_43__ TYPE_11__ ;
typedef struct TYPE_42__ TYPE_10__ ;


struct TYPE_54__ {int * handlers; } ;
typedef TYPE_21__ zend_object ;
struct TYPE_55__ {TYPE_6__* zf_next; TYPE_20__* zf_current; TYPE_19__* zf_key; TYPE_18__* zf_valid; TYPE_17__* zf_rewind; } ;
typedef TYPE_22__ zend_class_iterator_funcs ;
struct TYPE_56__ {int function_table; TYPE_22__* iterator_funcs_ptr; struct TYPE_56__* parent; } ;
typedef TYPE_23__ zend_class_entry ;
typedef scalar_t__ uint32_t ;
struct TYPE_57__ {int ar_flags; TYPE_21__ std; scalar_t__ ht_iter; TYPE_16__* fptr_count; TYPE_14__* fptr_offset_del; TYPE_12__* fptr_offset_has; TYPE_10__* fptr_offset_set; TYPE_8__* fptr_offset_get; int array; TYPE_23__* ce_get_iterator; } ;
typedef TYPE_24__ spl_array_object ;
struct TYPE_65__ {TYPE_23__* scope; } ;
struct TYPE_63__ {TYPE_23__* scope; } ;
struct TYPE_64__ {TYPE_7__ common; } ;
struct TYPE_61__ {TYPE_23__* scope; } ;
struct TYPE_62__ {TYPE_5__ common; } ;
struct TYPE_60__ {TYPE_23__* scope; } ;
struct TYPE_59__ {TYPE_23__* scope; } ;
struct TYPE_58__ {TYPE_23__* scope; } ;
struct TYPE_53__ {TYPE_4__ common; } ;
struct TYPE_52__ {TYPE_23__* scope; } ;
struct TYPE_51__ {TYPE_3__ common; } ;
struct TYPE_50__ {TYPE_2__ common; } ;
struct TYPE_49__ {TYPE_1__ common; } ;
struct TYPE_47__ {TYPE_23__* scope; } ;
struct TYPE_48__ {TYPE_15__ common; } ;
struct TYPE_45__ {TYPE_23__* scope; } ;
struct TYPE_46__ {TYPE_13__ common; } ;
struct TYPE_43__ {TYPE_23__* scope; } ;
struct TYPE_44__ {TYPE_11__ common; } ;
struct TYPE_42__ {TYPE_9__ common; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_21__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,TYPE_21__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_21__*,TYPE_23__*) ;
 int FUNC_7 (int *,int ,char*) ;
 TYPE_24__* FUNC_8 (TYPE_21__*) ;
 int FUNC_9 (TYPE_24__*) ;
 TYPE_23__* VAR_9 ;
 TYPE_23__* VAR_10 ;
 TYPE_23__* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_10 (int ) ;
 void* FUNC_11 (int *,char*,int) ;
 TYPE_24__* FUNC_12 (int,TYPE_23__*) ;
 int FUNC_13 (TYPE_21__*,TYPE_23__*) ;

__attribute__((used)) static zend_object *FUNC_14(zend_class_entry *VAR_14, zend_object *VAR_15, int VAR_16)
{
 spl_array_object *VAR_17;
 zend_class_entry *VAR_18 = VAR_14;
 int VAR_19 = 0;

 VAR_17 = FUNC_12(sizeof(spl_array_object), VAR_18);

 FUNC_13(&VAR_17->std, VAR_14);
 FUNC_6(&VAR_17->std, VAR_14);

 VAR_17->ar_flags = 0;
 VAR_17->ce_get_iterator = VAR_9;
 if (VAR_15) {
  spl_array_object *VAR_20 = FUNC_8(VAR_15);

  VAR_17->ar_flags &= ~ VAR_1;
  VAR_17->ar_flags |= (VAR_20->ar_flags & VAR_1);
  VAR_17->ce_get_iterator = VAR_20->ce_get_iterator;
  if (VAR_16) {
   if (VAR_20->ar_flags & VAR_2) {
    FUNC_4(&VAR_17->array);
   } else if (VAR_15->handlers == &VAR_13) {
    FUNC_2(&VAR_17->array,
     FUNC_10(FUNC_9(VAR_20)));
   } else {
    FUNC_1(VAR_15->handlers == &VAR_12);
    FUNC_0(VAR_15);
    FUNC_3(&VAR_17->array, VAR_15);
    VAR_17->ar_flags |= VAR_8;
   }
  } else {
   FUNC_0(VAR_15);
   FUNC_3(&VAR_17->array, VAR_15);
   VAR_17->ar_flags |= VAR_8;
  }
 } else {
  FUNC_5(&VAR_17->array);
 }

 while (VAR_18) {
  if (VAR_18 == VAR_9 || VAR_18 == VAR_11) {
   VAR_17->std.handlers = &VAR_12;
   break;
  } else if (VAR_18 == VAR_10) {
   VAR_17->std.handlers = &VAR_13;
   break;
  }
  VAR_18 = VAR_18->parent;
  VAR_19 = 1;
 }
 if (!VAR_18) {
  FUNC_7(((void*)0), VAR_0, "Internal compiler error, Class is not child of ArrayObject or ArrayIterator");
 }
 if (VAR_19) {
  VAR_17->fptr_offset_get = FUNC_11(&VAR_14->function_table, "offsetget", sizeof("offsetget") - 1);
  if (VAR_17->fptr_offset_get->common.scope == VAR_18) {
   VAR_17->fptr_offset_get = ((void*)0);
  }
  VAR_17->fptr_offset_set = FUNC_11(&VAR_14->function_table, "offsetset", sizeof("offsetset") - 1);
  if (VAR_17->fptr_offset_set->common.scope == VAR_18) {
   VAR_17->fptr_offset_set = ((void*)0);
  }
  VAR_17->fptr_offset_has = FUNC_11(&VAR_14->function_table, "offsetexists", sizeof("offsetexists") - 1);
  if (VAR_17->fptr_offset_has->common.scope == VAR_18) {
   VAR_17->fptr_offset_has = ((void*)0);
  }
  VAR_17->fptr_offset_del = FUNC_11(&VAR_14->function_table, "offsetunset", sizeof("offsetunset") - 1);
  if (VAR_17->fptr_offset_del->common.scope == VAR_18) {
   VAR_17->fptr_offset_del = ((void*)0);
  }
  VAR_17->fptr_count = FUNC_11(&VAR_14->function_table, "count", sizeof("count") - 1);
  if (VAR_17->fptr_count->common.scope == VAR_18) {
   VAR_17->fptr_count = ((void*)0);
  }
 }


 if (VAR_17->std.handlers == &VAR_12) {
  zend_class_iterator_funcs *VAR_21 = VAR_14->iterator_funcs_ptr;

  if (!VAR_21->zf_current) {
   VAR_21->zf_rewind = FUNC_11(&VAR_14->function_table, "rewind", sizeof("rewind") - 1);
   VAR_21->zf_valid = FUNC_11(&VAR_14->function_table, "valid", sizeof("valid") - 1);
   VAR_21->zf_key = FUNC_11(&VAR_14->function_table, "key", sizeof("key") - 1);
   VAR_21->zf_current = FUNC_11(&VAR_14->function_table, "current", sizeof("current") - 1);
   VAR_21->zf_next = FUNC_11(&VAR_14->function_table, "next", sizeof("next") - 1);
  }
  if (VAR_19) {
   if (VAR_21->zf_rewind->common.scope != VAR_18) VAR_17->ar_flags |= VAR_6;
   if (VAR_21->zf_valid->common.scope != VAR_18) VAR_17->ar_flags |= VAR_7;
   if (VAR_21->zf_key->common.scope != VAR_18) VAR_17->ar_flags |= VAR_4;
   if (VAR_21->zf_current->common.scope != VAR_18) VAR_17->ar_flags |= VAR_3;
   if (VAR_21->zf_next->common.scope != VAR_18) VAR_17->ar_flags |= VAR_5;
  }
 }

 VAR_17->ht_iter = (uint32_t)-1;
 return &VAR_17->std;
}
