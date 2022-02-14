
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ kind; scalar_t__ len; scalar_t__ u64; int str; } ;
typedef TYPE_1__ zend_ffi_val ;
struct TYPE_15__ {scalar_t__ size; } ;
struct TYPE_14__ {scalar_t__ size; } ;
struct TYPE_13__ {scalar_t__ size; } ;
struct TYPE_12__ {scalar_t__ size; } ;
struct TYPE_11__ {scalar_t__ size; } ;
struct TYPE_10__ {scalar_t__ size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (int ,char,scalar_t__) ;
 TYPE_7__ VAR_10 ;
 TYPE_6__ VAR_11 ;
 TYPE_5__ VAR_12 ;
 TYPE_4__ VAR_13 ;
 TYPE_3__ VAR_14 ;
 TYPE_2__ VAR_15 ;

void FUNC_1(zend_ffi_val *VAR_16)
{
 if (VAR_16->kind == VAR_8 || VAR_16->kind == VAR_4) {
  VAR_16->kind = VAR_8;
  VAR_16->u64 = VAR_14;
 } else if (VAR_16->kind == VAR_9 || VAR_16->kind == VAR_5) {
  VAR_16->kind = VAR_8;
  VAR_16->u64 = VAR_15;
 } else if (VAR_16->kind == VAR_3) {
  VAR_16->kind = VAR_8;
  VAR_16->u64 = VAR_12.size;
 } else if (VAR_16->kind == VAR_1) {
  VAR_16->kind = VAR_8;
  VAR_16->u64 = VAR_11.size;
 } else if (VAR_16->kind == VAR_6) {
  VAR_16->kind = VAR_8;



  VAR_16->u64 = VAR_13.size;

 } else if (VAR_16->kind == VAR_0) {
  VAR_16->kind = VAR_8;
  VAR_16->u64 = VAR_10.size;
 } else if (VAR_16->kind == VAR_7) {
  if (FUNC_0(VAR_16->str, '\\', VAR_16->len)) {

   VAR_16->kind = VAR_2;
  } else {
   VAR_16->kind = VAR_8;
   VAR_16->u64 = VAR_16->len + 1;
  }
 } else {
  VAR_16->kind = VAR_2;
 }
}
