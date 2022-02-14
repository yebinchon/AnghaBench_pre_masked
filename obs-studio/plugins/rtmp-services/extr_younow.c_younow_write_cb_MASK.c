
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct younow_mem_struct {size_t size; scalar_t__* memory; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__*,void*,size_t) ;
 scalar_t__* FUNC_2 (scalar_t__*,size_t) ;

__attribute__((used)) static size_t FUNC_3(void *VAR_1, size_t VAR_2, size_t VAR_3,
         void *VAR_4)
{
 size_t VAR_5 = VAR_2 * VAR_3;
 struct younow_mem_struct *VAR_6 = (struct younow_mem_struct *)VAR_4;

 VAR_6->memory = FUNC_2(VAR_6->memory, VAR_6->size + VAR_5 + 1);
 if (VAR_6->memory == ((void*)0)) {
  FUNC_0(VAR_0, "yyounow_write_cb: realloc returned NULL");
  return 0;
 }

 FUNC_1(&(VAR_6->memory[VAR_6->size]), VAR_1, VAR_5);
 VAR_6->size += VAR_5;
 VAR_6->memory[VAR_6->size] = 0;

 return VAR_5;
}
