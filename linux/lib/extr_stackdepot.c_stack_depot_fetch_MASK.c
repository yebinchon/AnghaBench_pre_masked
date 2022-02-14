
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union handle_parts {size_t slabindex; size_t offset; int handle; } ;
struct stack_record {unsigned long* entries; unsigned int size; } ;
typedef int depot_stack_handle_t ;


 size_t VAR_0 ;
 void** VAR_1 ;

unsigned int FUNC_0(depot_stack_handle_t VAR_2,
          unsigned long **VAR_3)
{
 union handle_parts VAR_4 = { .handle = VAR_2 };
 void *VAR_5 = VAR_1[VAR_4.slabindex];
 size_t VAR_6 = VAR_4.offset << VAR_0;
 struct stack_record *VAR_7 = VAR_5 + VAR_6;

 *VAR_3 = VAR_7->entries;
 return VAR_7->size;
}
