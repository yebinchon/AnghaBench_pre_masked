
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(size_t VAR_2, size_t VAR_3, size_t *VAR_4)
{
    if ((VAR_2 >= VAR_0 || VAR_3 >= VAR_0) && VAR_2 > 0 &&
        VAR_1 / VAR_2 < VAR_3)
        return 1;
    *VAR_4 = VAR_2 * VAR_3;
    return 0;
}
