
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;


 scalar_t__* VAR_0 ;

__attribute__((used)) static inline int FUNC_0( WCHAR VAR_1, int VAR_2, int VAR_3 )
{
    while (VAR_2 <= VAR_3)
    {
        int VAR_4 = (VAR_2 + VAR_3) / 2;
        if (VAR_0[2 * VAR_4] < VAR_1) VAR_2 = VAR_4 + 1;
        else if (VAR_0[2 * VAR_4] > VAR_1) VAR_3 = VAR_4 - 1;
        else return VAR_4;
    }
    return -1;
}
