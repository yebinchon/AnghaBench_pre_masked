
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_ffi_type_kind ;
struct TYPE_5__ {int kind; } ;
struct TYPE_6__ {int kind; int attr; TYPE_1__ enumeration; } ;
typedef TYPE_2__ zend_ffi_type ;
typedef int ffi_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int * FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static ffi_type *FUNC_1(zend_ffi_type *VAR_14)
{
 zend_ffi_type_kind VAR_15 = VAR_14->kind;

again:
    switch (VAR_15) {
  case 140:
   return &VAR_2;
  case 142:
   return &VAR_1;

  case 139:
   return &VAR_3;

  case 129:
   return &VAR_12;
  case 134:
   return &VAR_8;
  case 132:
   return &VAR_9;
  case 137:
   return &VAR_5;
  case 131:
   return &VAR_10;
  case 136:
   return &VAR_6;
  case 130:
   return &VAR_11;
  case 135:
   return &VAR_7;
  case 138:
   return &VAR_4;
  case 128:
   return &VAR_13;
  case 144:
   return &VAR_12;
  case 143:
   return &VAR_8;
  case 141:
   VAR_15 = VAR_14->enumeration.kind;
   goto again;
  case 133:
   if (!(VAR_14->attr & VAR_0)) {
    ffi_type *VAR_16 = FUNC_0(VAR_14);
    return VAR_16;
   }
   break;
  default:
   break;
 }
 return ((void*)0);
}
