
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int kind; } ;
typedef TYPE_1__ zend_ffi_val ;
struct TYPE_12__ {int align; } ;
typedef TYPE_2__ zend_ffi_dcl ;
struct TYPE_18__ {int align; } ;
struct TYPE_17__ {int align; } ;
struct TYPE_16__ {int align; } ;
struct TYPE_15__ {int align; } ;
struct TYPE_14__ {int align; } ;
struct TYPE_13__ {int align; } ;
 TYPE_8__ VAR_0 ;
 TYPE_7__ VAR_1 ;
 TYPE_6__ VAR_2 ;
 TYPE_5__ VAR_3 ;
 TYPE_4__ VAR_4 ;
 TYPE_3__ VAR_5 ;

void FUNC_0(zend_ffi_dcl *VAR_6, zend_ffi_val *VAR_7)
{
 switch (VAR_7->kind) {
  case 133:
  case 129:
   VAR_6->align = VAR_4;
   break;
  case 132:
  case 128:
   VAR_6->align = VAR_5;
   break;
  case 134:
   VAR_6->align = VAR_2.align;
   break;
  case 135:
   VAR_6->align = VAR_1.align;
   break;





  case 136:
  case 130:
   VAR_6->align = VAR_0.align;
   break;
  default:
   break;
 }
}
