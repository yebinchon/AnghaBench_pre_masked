
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 int ** VAR_0 ;
 size_t FUNC_0 (int const* const) ;
 scalar_t__ FUNC_1 (int const*,int const* const,size_t) ;

__attribute__((used)) static int FUNC_2(const WCHAR* VAR_1, size_t VAR_2)
{
    const WCHAR* const *VAR_3;
    size_t VAR_4;

    for (VAR_3 = VAR_0; *VAR_3; VAR_3++)
    {
        VAR_4 = FUNC_0(*VAR_3);
        if (VAR_4 >= VAR_2) return 0;
        if (FUNC_1(&VAR_1[VAR_2 - VAR_4], *VAR_3, VAR_4)) continue;
        return VAR_4;
    }
    return 0;
}
