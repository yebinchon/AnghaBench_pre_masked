
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 () ;

__attribute__((used)) static inline size_t FUNC_1(size_t VAR_0)
{
 const size_t VAR_1 = FUNC_0();
 return (VAR_0 + VAR_1 - 1) & ~(VAR_1 - 1);
}
