
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
typedef int u_int32_t ;


 char FUNC_0 (int) ;

__attribute__((used)) static inline char FUNC_1 (u_int64_t VAR_0)
{
    u_int32_t VAR_1;
    if ((VAR_1 = VAR_0 >> 32))
        return 32 + FUNC_0 (VAR_1);
    else
        return FUNC_0 ((u_int32_t) VAR_0);
}
