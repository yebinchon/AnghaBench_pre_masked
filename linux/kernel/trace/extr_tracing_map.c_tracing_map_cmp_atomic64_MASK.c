
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int atomic64_t ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, void *VAR_1)
{
 u64 VAR_2 = FUNC_0((atomic64_t *)VAR_0);
 u64 VAR_3 = FUNC_0((atomic64_t *)VAR_1);

 return (VAR_2 > VAR_3) ? 1 : ((VAR_2 < VAR_3) ? -1 : 0);
}
