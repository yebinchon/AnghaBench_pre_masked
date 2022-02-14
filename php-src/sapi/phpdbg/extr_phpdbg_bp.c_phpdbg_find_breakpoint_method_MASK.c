
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zend_string ;
struct TYPE_5__ {int function_name; TYPE_1__* scope; } ;
typedef TYPE_2__ zend_op_array ;
typedef int phpdbg_breakbase_t ;
struct TYPE_4__ {int name; } ;
typedef int HashTable ;


 size_t VAR_0 ;
 int * FUNC_0 (int ) ;
 int VAR_1 ;
 void* FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;

__attribute__((used)) static inline phpdbg_breakbase_t *FUNC_4(zend_op_array *VAR_2)
{
 HashTable *VAR_3;
 phpdbg_breakbase_t *VAR_4 = ((void*)0);
 zend_string *VAR_5 = FUNC_3(VAR_2->scope->name);

 if ((VAR_3 = FUNC_1(&FUNC_0(VAR_1)[VAR_0], VAR_5))) {
  zend_string *VAR_6 = FUNC_3(VAR_2->function_name);

  VAR_4 = FUNC_1(VAR_3, VAR_6);

  FUNC_2(VAR_6);
 }

 FUNC_2(VAR_5);
 return VAR_4;
}
