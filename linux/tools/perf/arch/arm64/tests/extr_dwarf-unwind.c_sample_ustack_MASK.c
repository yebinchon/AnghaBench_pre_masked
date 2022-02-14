
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct thread {int mg; } ;
struct stack_dump {char* data; scalar_t__ size; } ;
struct perf_sample {struct stack_dump user_stack; } ;
struct map {scalar_t__ end; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__*) ;
 scalar_t__* FUNC_1 (scalar_t__) ;
 struct map* FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (scalar_t__*,void*,scalar_t__) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct perf_sample *VAR_2,
  struct thread *VAR_3, u64 *VAR_4)
{
 struct stack_dump *VAR_5 = &VAR_2->user_stack;
 struct map *VAR_6;
 unsigned long VAR_7;
 u64 VAR_8, *VAR_9;

 VAR_9 = FUNC_1(VAR_1);
 if (!VAR_9) {
  FUNC_4("failed to allocate sample uregs data\n");
  return -1;
 }

 VAR_7 = (unsigned long) VAR_4[VAR_0];

 VAR_6 = FUNC_2(VAR_3->mg, (u64)VAR_7);
 if (!VAR_6) {
  FUNC_4("failed to get stack map\n");
  FUNC_0(VAR_9);
  return -1;
 }

 VAR_8 = VAR_6->end - VAR_7;
 VAR_8 = VAR_8 > VAR_1 ? VAR_1 : VAR_8;

 FUNC_3(VAR_9, (void *) VAR_7, VAR_8);
 VAR_5->data = (char *) VAR_9;
 VAR_5->size = VAR_8;
 return 0;
}
