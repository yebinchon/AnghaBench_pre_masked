
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WORD ;


 scalar_t__ const VAR_0 ;

__attribute__((used)) static inline int FUNC_0(const WORD *VAR_1, int VAR_2, int VAR_3)
{
    if (VAR_2 == VAR_3) return VAR_2;
    VAR_2 ++;
    while (VAR_2 < VAR_3 && VAR_1[VAR_2] == VAR_0) VAR_2 ++;
    return VAR_2;
}
