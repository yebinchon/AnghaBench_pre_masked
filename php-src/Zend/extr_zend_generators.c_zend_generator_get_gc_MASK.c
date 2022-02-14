
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int zval ;
struct TYPE_14__ {scalar_t__ last_var; scalar_t__ T; int num_args; scalar_t__ opcodes; scalar_t__ last_live_range; TYPE_3__* live_range; } ;
typedef TYPE_2__ zend_op_array ;
typedef int zend_object ;
struct TYPE_15__ {scalar_t__ start; scalar_t__ end; scalar_t__ var; } ;
typedef TYPE_3__ zend_live_range ;
struct TYPE_13__ {TYPE_4__* root; } ;
struct TYPE_18__ {scalar_t__ children; TYPE_1__ ptr; } ;
struct TYPE_16__ {scalar_t__ gc_buffer_size; TYPE_7__ node; int std; int values; int retval; int key; int value; int * gc_buffer; TYPE_5__* execute_data; } ;
typedef TYPE_4__ zend_generator ;
struct TYPE_17__ {scalar_t__ opline; int * symbol_table; int This; } ;
typedef TYPE_5__ zend_execute_data ;
typedef scalar_t__ uint32_t ;
struct TYPE_12__ {TYPE_2__ op_array; } ;
typedef int HashTable ;


 TYPE_10__* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int * FUNC_3 (scalar_t__) ;
 int * FUNC_4 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_5 (TYPE_10__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;
 int * FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (TYPE_4__*) ;
 int VAR_7 ;
 int * FUNC_10 (int *,int,scalar_t__,int ) ;
 TYPE_4__* FUNC_11 (TYPE_7__*,TYPE_4__*) ;

__attribute__((used)) static HashTable *FUNC_12(zend_object *VAR_8, zval **VAR_9, int *VAR_10)
{
 zend_generator *VAR_11 = (zend_generator*)VAR_8;
 zend_execute_data *VAR_12 = VAR_11->execute_data;
 zend_op_array *VAR_13;
 zval *VAR_14;
 uint32_t VAR_15;

 if (!VAR_12) {


  *VAR_9 = &VAR_11->value;
  *VAR_10 = 3;
  return ((void*)0);
 }

 VAR_13 = &FUNC_0(VAR_7)->op_array;
 VAR_15 = FUNC_9(VAR_11);
 if (VAR_11->gc_buffer_size < VAR_15) {
  VAR_11->gc_buffer = FUNC_10(VAR_11->gc_buffer, sizeof(zval), VAR_15, 0);
  VAR_11->gc_buffer_size = VAR_15;
 }

 *VAR_10 = VAR_15;
 *VAR_9 = VAR_14 = VAR_11->gc_buffer;

 FUNC_6(VAR_14++, &VAR_11->value);
 FUNC_6(VAR_14++, &VAR_11->key);
 FUNC_6(VAR_14++, &VAR_11->retval);
 FUNC_6(VAR_14++, &VAR_11->values);

 if (!(FUNC_1() & VAR_2)) {
  uint32_t VAR_16, VAR_17 = FUNC_0(VAR_7)->op_array.last_var;
  for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++) {
   FUNC_6(VAR_14++, FUNC_4(VAR_16));
  }
 }

 if (FUNC_1() & VAR_1) {
  zval *VAR_18 = FUNC_4(VAR_13->last_var + VAR_13->T);
  zval *VAR_19 = VAR_18 + (FUNC_2() - VAR_13->num_args);
  while (VAR_18 != VAR_19) {
   FUNC_6(VAR_14++, VAR_18++);
  }
 }

 if (FUNC_1() & VAR_3) {
  FUNC_7(VAR_14++, FUNC_8(VAR_12->This));
 }
 if (FUNC_1() & VAR_0) {
  FUNC_7(VAR_14++, FUNC_5(FUNC_0(VAR_7)));
 }

 if (VAR_12->opline != VAR_13->opcodes) {
  uint32_t VAR_20, VAR_21 = VAR_12->opline - VAR_13->opcodes - 1;
  for (VAR_20 = 0; VAR_20 < VAR_13->last_live_range; VAR_20++) {
   const zend_live_range *VAR_22 = &VAR_13->live_range[VAR_20];
   if (VAR_22->start > VAR_21) {
    break;
   } else if (VAR_21 < VAR_22->end) {
    uint32_t VAR_23 = VAR_22->var & VAR_5;
    uint32_t VAR_24 = VAR_22->var & ~VAR_5;
    zval *VAR_25 = FUNC_3(VAR_24);
    if (VAR_23 == VAR_6 || VAR_23 == VAR_4) {
     FUNC_6(VAR_14++, VAR_25);
    }
   }
  }
 }

 if (VAR_11->node.children == 0) {
  zend_generator *VAR_26 = VAR_11->node.ptr.root;
  while (VAR_26 != VAR_11) {
   FUNC_7(VAR_14++, &VAR_26->std);
   VAR_26 = FUNC_11(&VAR_26->node, VAR_11);
  }
 }

 if (FUNC_1() & VAR_2) {
  return VAR_12->symbol_table;
 } else {
  return ((void*)0);
 }
}
