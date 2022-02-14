
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int atomic64_t ;


 scalar_t__ FUNC_0 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(atomic64_t *VAR_0, u64 VAR_1)
{
 u64 VAR_2;
retry:
 VAR_2 = FUNC_1(VAR_0);
 if (VAR_1 > VAR_2) {
  if (FUNC_0(VAR_0, VAR_2, VAR_1) != VAR_2)
   goto retry;
 }
}
