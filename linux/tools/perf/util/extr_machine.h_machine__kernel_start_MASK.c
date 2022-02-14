
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct machine {int kernel_start; } ;


 int FUNC_0 (struct machine*) ;

__attribute__((used)) static inline u64 FUNC_1(struct machine *VAR_0)
{
 if (!VAR_0->kernel_start)
  FUNC_0(VAR_0);
 return VAR_0->kernel_start;
}
