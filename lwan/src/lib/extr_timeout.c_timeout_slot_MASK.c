
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timeout_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(int VAR_2, timeout_t VAR_3)
{
    const timeout_t VAR_4 = (timeout_t)VAR_1;
    const timeout_t VAR_5 =
        VAR_4 & ((VAR_3 >> (VAR_2 * VAR_0)) - !!VAR_2);

    return (int)VAR_5;
}
