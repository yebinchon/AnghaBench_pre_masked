
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union smc_host_cursor {scalar_t__ wrap; scalar_t__ count; } ;


 int FUNC_0 (unsigned int,union smc_host_cursor*,union smc_host_cursor*) ;

__attribute__((used)) static inline int FUNC_1(unsigned int VAR_0,
    union smc_host_cursor *VAR_1,
    union smc_host_cursor *VAR_2)
{
 if (VAR_1->wrap > VAR_2->wrap ||
     (VAR_1->wrap == VAR_2->wrap && VAR_1->count > VAR_2->count))
  return -FUNC_0(VAR_0, VAR_2, VAR_1);
 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
