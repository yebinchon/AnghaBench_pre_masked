
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int kind; int * tag_name; } ;
struct TYPE_10__ {int attr; TYPE_1__ enumeration; int align; int size; int kind; } ;
typedef TYPE_2__ zend_ffi_type ;
struct TYPE_11__ {int attr; int type; } ;
typedef TYPE_3__ zend_ffi_dcl ;
struct TYPE_13__ {int align; int size; } ;
struct TYPE_12__ {int align; int size; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_2 (int,int) ;
 int VAR_6 ;
 TYPE_5__ VAR_7 ;
 TYPE_4__ VAR_8 ;

void FUNC_3(zend_ffi_dcl *VAR_9)
{
 zend_ffi_type *VAR_10 = FUNC_2(sizeof(zend_ffi_type), FUNC_0(VAR_6));
 VAR_10->kind = VAR_2;
 VAR_10->attr = FUNC_0(VAR_5) | (VAR_9->attr & VAR_1);
 VAR_10->enumeration.tag_name = ((void*)0);
 if (VAR_10->attr & VAR_0) {
  VAR_10->size = VAR_8;
  VAR_10->align = VAR_8;
  VAR_10->enumeration.kind = VAR_4;
 } else {
  VAR_10->size = VAR_7;
  VAR_10->align = VAR_7;
  VAR_10->enumeration.kind = VAR_3;
 }
 VAR_9->type = FUNC_1(VAR_10);
 VAR_9->attr &= ~VAR_1;
}
