
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
typedef int zend_object ;
struct TYPE_4__ {scalar_t__ kind; int type; int addr; scalar_t__ is_const; } ;
typedef TYPE_1__ zend_ffi_symbol ;
struct TYPE_5__ {scalar_t__ symbols; } ;
typedef TYPE_2__ zend_ffi ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int *) ;
 TYPE_1__* FUNC_3 (scalar_t__,int *) ;
 int FUNC_4 (int ,char*,int ) ;

__attribute__((used)) static zval *FUNC_5(zend_object *VAR_2, zend_string *VAR_3, zval *VAR_4, void **VAR_5)
{
 zend_ffi *VAR_6 = (zend_ffi*)VAR_2;
 zend_ffi_symbol *VAR_7 = ((void*)0);

 if (VAR_6->symbols) {
  VAR_7 = FUNC_3(VAR_6->symbols, VAR_3);
  if (VAR_7 && VAR_7->kind != VAR_0) {
   VAR_7 = ((void*)0);
  }
 }
 if (!VAR_7) {
  FUNC_4(VAR_1, "Attempt to assign undefined C variable '%s'", FUNC_1(VAR_3));
  return VAR_4;
 }

 if (VAR_7->is_const) {
  FUNC_4(VAR_1, "Attempt to assign read-only C variable '%s'", FUNC_1(VAR_3));
  return VAR_4;
 }

 FUNC_2(VAR_7->addr, FUNC_0(VAR_7->type), VAR_4);
 return VAR_4;
}
