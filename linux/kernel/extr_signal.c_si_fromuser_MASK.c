
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_siginfo {int dummy; } ;


 struct kernel_siginfo const* VAR_0 ;
 scalar_t__ FUNC_0 (struct kernel_siginfo const*) ;
 int FUNC_1 (struct kernel_siginfo const*) ;

__attribute__((used)) static inline bool FUNC_2(const struct kernel_siginfo *VAR_1)
{
 return VAR_1 == VAR_0 ||
  (!FUNC_1(VAR_1) && FUNC_0(VAR_1));
}
