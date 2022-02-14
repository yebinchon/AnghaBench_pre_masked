
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WORD ;



__attribute__((used)) static inline int FUNC_0( WORD *VAR_0, int VAR_1, WORD VAR_2 )
{
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) if (VAR_0[VAR_3] == VAR_2) return VAR_1;
    VAR_0[VAR_1++] = VAR_2;
    return VAR_1;
}
