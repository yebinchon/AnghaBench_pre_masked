
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_sample {void* raw_data; } ;



__attribute__((used)) static inline void *FUNC_0(struct perf_sample *VAR_0)
{
 return VAR_0->raw_data - 4;
}
