
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ kind; int u64; int i64; int ch; } ;
typedef TYPE_2__ zend_ffi_val ;
struct TYPE_13__ {int length; int type; } ;
struct TYPE_15__ {int attr; int size; TYPE_1__ array; int align; int kind; } ;
typedef TYPE_3__ zend_ffi_type ;
struct TYPE_16__ {int attr; scalar_t__ align; int flags; int type; } ;
typedef TYPE_4__ zend_ffi_dcl ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_3__* FUNC_4 (int,int) ;
 int VAR_14 ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (char*,int) ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;

void FUNC_9(zend_ffi_dcl *VAR_15, zend_ffi_val *VAR_16)
{
 int VAR_17 = 0;
 zend_ffi_type *VAR_18;
 zend_ffi_type *VAR_19;

 FUNC_6(VAR_15);
 VAR_18 = FUNC_2(VAR_15->type);

 if (VAR_16->kind == VAR_6) {
  VAR_17 = 0;
 } else if (VAR_16->kind == VAR_9 || VAR_16->kind == VAR_10) {
  VAR_17 = VAR_16->u64;
 } else if (VAR_16->kind == VAR_7 || VAR_16->kind == VAR_8) {
  VAR_17 = VAR_16->i64;
 } else if (VAR_16->kind == VAR_5) {
  VAR_17 = VAR_16->ch;
 } else {
  FUNC_5(VAR_15);
  FUNC_7("unsupported array index type at line %d", FUNC_0(VAR_13));
  return;
 }
 if (VAR_17 < 0) {
  FUNC_5(VAR_15);
  FUNC_7("negative array index at line %d", FUNC_0(VAR_13));
  return;
 }

 if (FUNC_8(VAR_18) != VAR_1) {
  FUNC_5(VAR_15);
  FUNC_1(FUNC_0(VAR_11), VAR_0);
 }

 VAR_19 = FUNC_4(sizeof(zend_ffi_type), FUNC_0(VAR_14));
 VAR_19->kind = VAR_4;
 VAR_19->attr = FUNC_0(VAR_12) | (VAR_15->attr & VAR_2);
 VAR_19->size = VAR_17 * VAR_18->size;
 VAR_19->align = VAR_18->align;
 VAR_19->array.type = VAR_15->type;
 VAR_19->array.length = VAR_17;
 VAR_15->type = FUNC_3(VAR_19);
 VAR_15->flags &= ~VAR_3;
 VAR_15->attr &= ~VAR_2;
 VAR_15->align = 0;
}
