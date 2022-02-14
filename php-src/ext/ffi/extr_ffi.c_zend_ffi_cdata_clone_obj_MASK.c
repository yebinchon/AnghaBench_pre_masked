
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * handlers; } ;
typedef TYPE_1__ zend_object ;
struct TYPE_9__ {scalar_t__ kind; int size; } ;
typedef TYPE_2__ zend_ffi_type ;
struct TYPE_10__ {TYPE_1__ std; int flags; int ptr; TYPE_2__* type; } ;
typedef TYPE_3__ zend_ffi_cdata ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_3 ;

__attribute__((used)) static zend_object *FUNC_4(zend_object *VAR_4)
{
 zend_ffi_cdata *VAR_5 = (zend_ffi_cdata*)VAR_4;
 zend_ffi_type *VAR_6 = FUNC_0(VAR_5->type);
 zend_ffi_cdata *VAR_7;

 VAR_7 = (zend_ffi_cdata*)FUNC_3(VAR_2);
 if (VAR_6->kind < VAR_1) {
  VAR_7->std.handlers = &VAR_3;
 }
 VAR_7->type = VAR_6;
 VAR_7->ptr = FUNC_1(VAR_6->size);
 FUNC_2(VAR_7->ptr, VAR_5->ptr, VAR_6->size);
 VAR_7->flags |= VAR_0;

 return &VAR_7->std;
}
