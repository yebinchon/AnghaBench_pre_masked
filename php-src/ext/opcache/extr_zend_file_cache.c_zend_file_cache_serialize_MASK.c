
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int main_op_array; int function_table; int class_table; int filename; } ;
struct TYPE_11__ {int size; char* mem; int arena_mem; TYPE_1__ script; int timestamp; } ;
typedef TYPE_2__ zend_persistent_script ;
struct TYPE_12__ {void* magic; void* system_id; int mem_size; int script_offset; int timestamp; scalar_t__ str_size; } ;
typedef TYPE_3__ zend_file_cache_metainfo ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 char* VAR_0 ;
 int FUNC_2 (void*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,TYPE_2__*,TYPE_3__*,void*,int ) ;
 int FUNC_4 (int *,TYPE_2__*,TYPE_3__*,void*) ;

__attribute__((used)) static void FUNC_5(zend_persistent_script *VAR_3,
                                      zend_file_cache_metainfo *VAR_4,
                                      void *VAR_5)
{
 zend_persistent_script *VAR_6;

 FUNC_2(VAR_4->magic, "OPCACHE", 8);
 FUNC_2(VAR_4->system_id, VAR_0, 32);
 VAR_4->mem_size = VAR_3->size;
 VAR_4->str_size = 0;
 VAR_4->script_offset = (char*)VAR_3 - (char*)VAR_3->mem;
 VAR_4->timestamp = VAR_3->timestamp;

 FUNC_2(VAR_5, VAR_3->mem, VAR_3->size);

 VAR_6 = (zend_persistent_script*)((char*)VAR_5 + VAR_4->script_offset);
 FUNC_1(VAR_6->script.filename);

 FUNC_3(&VAR_6->script.class_table, VAR_3, VAR_4, VAR_5, VAR_1);
 FUNC_3(&VAR_6->script.function_table, VAR_3, VAR_4, VAR_5, VAR_2);
 FUNC_4(&VAR_6->script.main_op_array, VAR_3, VAR_4, VAR_5);

 FUNC_0(VAR_6->arena_mem);
 VAR_6->mem = ((void*)0);
}
