
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct syscall {int args_size; } ;
struct perf_sample {int raw_size; void* raw_data; } ;



__attribute__((used)) static void *FUNC_0(struct syscall *VAR_0, struct perf_sample *VAR_1, int *VAR_2, int VAR_3)
{
 void *VAR_4 = ((void*)0);
 int VAR_5 = VAR_3 ?: VAR_0->args_size;

 *VAR_2 = VAR_1->raw_size - VAR_5;
 if (*VAR_2 > 0)
  VAR_4 = VAR_1->raw_data + VAR_5;

 return VAR_4;
}
