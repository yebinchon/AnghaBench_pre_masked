
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int main_op_array; int function_table; int class_table; int filename; } ;
struct TYPE_7__ {int arena_mem; TYPE_1__ script; void* mem; } ;
typedef TYPE_2__ zend_persistent_script ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,TYPE_2__*,void*,int ,int ) ;
 int FUNC_3 (int *,TYPE_2__*,void*) ;

__attribute__((used)) static void FUNC_4(zend_persistent_script *VAR_4,
                                        void *VAR_5)
{
 VAR_4->mem = VAR_5;

 FUNC_1(VAR_4->script.filename);

 FUNC_2(&VAR_4->script.class_table,
   VAR_4, VAR_5, VAR_2, VAR_0);
 FUNC_2(&VAR_4->script.function_table,
   VAR_4, VAR_5, VAR_3, VAR_1);
 FUNC_3(&VAR_4->script.main_op_array, VAR_4, VAR_5);

 FUNC_0(VAR_4->arena_mem);
}
