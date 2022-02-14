
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u64 ;



__attribute__((used)) static inline __u64 FUNC_0(void *VAR_0)
{
 __u64 VAR_1;

 asm volatile("ld %0,0(%1)" : "=r"(VAR_1) : "b"(VAR_0));

 return VAR_1;
}
