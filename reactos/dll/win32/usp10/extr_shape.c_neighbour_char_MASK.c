
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const WCHAR ;
typedef int INT ;



__attribute__((used)) static WCHAR FUNC_0(int VAR_0, int VAR_1, const WCHAR* VAR_2, INT VAR_3)
{
    if (VAR_0 + VAR_1 < 0)
        return 0;
    if ( VAR_0+ VAR_1 >= VAR_3)
        return 0;

    VAR_0 += VAR_1;

    return VAR_2[VAR_0];
}
