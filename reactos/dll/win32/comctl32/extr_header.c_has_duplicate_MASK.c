
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t INT ;



__attribute__((used)) static INT FUNC_0(const INT *VAR_0, INT VAR_1, INT VAR_2)
{
    INT VAR_3;
    for(VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
        if (VAR_0[VAR_3] == VAR_2) return VAR_3;
    return -1;
}
