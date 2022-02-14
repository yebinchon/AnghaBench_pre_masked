
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int fields; int * tag_name; } ;
struct TYPE_8__ {int attr; int align; TYPE_1__ record; scalar_t__ size; int kind; } ;
typedef TYPE_2__ zend_ffi_type ;
struct TYPE_9__ {int attr; int align; int flags; int type; } ;
typedef TYPE_3__ zend_ffi_dcl ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_2 (int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *,int ,int *,int ,int) ;

void FUNC_4(zend_ffi_dcl *VAR_8)
{
 zend_ffi_type *VAR_9 = FUNC_2(sizeof(zend_ffi_type), FUNC_0(VAR_5));
 VAR_9->kind = VAR_3;
 VAR_9->attr = FUNC_0(VAR_4) | (VAR_8->attr & VAR_2);
 VAR_9->size = 0;
 VAR_9->align = VAR_8->align > 1 ? VAR_8->align : 1;
 if (VAR_8->flags & VAR_1) {
  VAR_9->attr |= VAR_0;
 }
 VAR_8->type = FUNC_1(VAR_9);
 VAR_9->record.tag_name = ((void*)0);
 FUNC_3(&VAR_9->record.fields, 0, ((void*)0), FUNC_0(VAR_5) ? VAR_7 :VAR_6, FUNC_0(VAR_5));
 VAR_8->attr &= ~VAR_2;
 VAR_8->align = 0;
}
