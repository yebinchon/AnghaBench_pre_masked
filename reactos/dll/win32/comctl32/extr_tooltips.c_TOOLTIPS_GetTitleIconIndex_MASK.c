
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT_PTR ;
typedef size_t UINT ;
typedef scalar_t__ HICON ;


 size_t VAR_0 ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static inline UINT_PTR
FUNC_0(HICON VAR_2)
{
    UINT VAR_3;
    for (VAR_3 = 0; VAR_3 <= VAR_0; VAR_3++)
        if (VAR_1[VAR_3] == VAR_2)
            return VAR_3;
    return (UINT_PTR)VAR_2;
}
