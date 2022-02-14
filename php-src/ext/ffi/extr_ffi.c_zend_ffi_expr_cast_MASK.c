
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {void* kind; int ch; int u64; int d; int i64; } ;
typedef TYPE_1__ zend_ffi_val ;
struct TYPE_8__ {int type; } ;
typedef TYPE_2__ zend_ffi_dcl ;
struct TYPE_9__ {int kind; } ;


 TYPE_6__* FUNC_0 (int ) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;

void FUNC_3(zend_ffi_val *VAR_9, zend_ffi_dcl *VAR_10)
{
 FUNC_1(VAR_10);
 switch (FUNC_0(VAR_10->type)->kind) {
  case 137:
   if (VAR_9->kind == VAR_7 || VAR_9->kind == VAR_8) {
    VAR_9->kind = VAR_3;
    VAR_9->d = VAR_9->u64;
   } else if (VAR_9->kind == VAR_4 || VAR_9->kind == VAR_5) {
    VAR_9->kind = VAR_3;
    VAR_9->d = VAR_9->i64;
   } else if (VAR_9->kind == VAR_3 || VAR_9->kind == VAR_1 || VAR_9->kind == VAR_6) {
    VAR_9->kind = VAR_3;
   } else if (VAR_9->kind == VAR_0) {
    VAR_9->kind = VAR_3;
    VAR_9->d = VAR_9->ch;
   } else {
    VAR_9->kind = VAR_2;
   }
   break;
  case 138:
   if (VAR_9->kind == VAR_7 || VAR_9->kind == VAR_8) {
    VAR_9->kind = VAR_1;
    VAR_9->d = VAR_9->u64;
   } else if (VAR_9->kind == VAR_4 || VAR_9->kind == VAR_5) {
    VAR_9->kind = VAR_1;
    VAR_9->d = VAR_9->i64;
   } else if (VAR_9->kind == VAR_3 || VAR_9->kind == VAR_1 || VAR_9->kind == VAR_6) {
    VAR_9->kind = VAR_1;
   } else if (VAR_9->kind == VAR_0) {
    VAR_9->kind = VAR_1;
    VAR_9->d = VAR_9->ch;
   } else {
    VAR_9->kind = VAR_2;
   }
   break;
  case 128:
  case 131:
  case 130:
  case 140:
   if (VAR_9->kind == VAR_7 || VAR_9->kind == VAR_8 || VAR_9->kind == VAR_4 || VAR_9->kind == VAR_5) {
    VAR_9->kind = VAR_7;
   } else if (VAR_9->kind == VAR_3 || VAR_9->kind == VAR_1 || VAR_9->kind == VAR_6) {
    VAR_9->kind = VAR_7;
    VAR_9->u64 = VAR_9->d;
   } else if (VAR_9->kind == VAR_0) {
    VAR_9->kind = VAR_7;
    VAR_9->u64 = VAR_9->ch;
   } else {
    VAR_9->kind = VAR_2;
   }
   break;
  case 132:
  case 135:
  case 134:
   if (VAR_9->kind == VAR_7 || VAR_9->kind == VAR_8 || VAR_9->kind == VAR_4 || VAR_9->kind == VAR_5) {
    VAR_9->kind = VAR_4;
   } else if (VAR_9->kind == VAR_3 || VAR_9->kind == VAR_1 || VAR_9->kind == VAR_6) {
    VAR_9->kind = VAR_4;
    VAR_9->i64 = VAR_9->d;
   } else if (VAR_9->kind == VAR_0) {
    VAR_9->kind = VAR_4;
    VAR_9->i64 = VAR_9->ch;
   } else {
    VAR_9->kind = VAR_2;
   }
   break;
  case 129:
   if (VAR_9->kind == VAR_7 || VAR_9->kind == VAR_8 || VAR_9->kind == VAR_4 || VAR_9->kind == VAR_5) {
    VAR_9->kind = VAR_8;
   } else if (VAR_9->kind == VAR_3 || VAR_9->kind == VAR_1 || VAR_9->kind == VAR_6) {
    VAR_9->kind = VAR_8;
    VAR_9->u64 = VAR_9->d;
   } else if (VAR_9->kind == VAR_0) {
    VAR_9->kind = VAR_8;
    VAR_9->u64 = VAR_9->ch;
   } else {
    VAR_9->kind = VAR_2;
   }
   break;
  case 133:
   if (VAR_9->kind == VAR_7 || VAR_9->kind == VAR_8) {
    VAR_9->kind = VAR_0;
    VAR_9->ch = VAR_9->u64;
   } else if (VAR_9->kind == VAR_4 || VAR_9->kind == VAR_5) {
    VAR_9->kind = VAR_0;
    VAR_9->ch = VAR_9->i64;
   } else if (VAR_9->kind == VAR_3 || VAR_9->kind == VAR_1 || VAR_9->kind == VAR_6) {
    VAR_9->kind = VAR_0;
    VAR_9->ch = VAR_9->d;
   } else if (VAR_9->kind == VAR_0) {
   } else {
    VAR_9->kind = VAR_2;
   }
   break;
  case 139:
   if (VAR_9->kind == VAR_7 || VAR_9->kind == VAR_8 || VAR_9->kind == VAR_4 || VAR_9->kind == VAR_5) {
    VAR_9->kind = VAR_7;
   } else if (VAR_9->kind == VAR_3 || VAR_9->kind == VAR_1 || VAR_9->kind == VAR_6) {
    VAR_9->kind = VAR_7;
    VAR_9->u64 = VAR_9->d;
   } else if (VAR_9->kind == VAR_0) {
    VAR_9->kind = VAR_7;
    VAR_9->u64 = VAR_9->ch;
   } else {
    VAR_9->kind = VAR_2;
   }
   break;
  default:
   VAR_9->kind = VAR_2;
   break;
 }
 FUNC_2(VAR_10->type);
}
