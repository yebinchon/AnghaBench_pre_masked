
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int byte ;


 int FUNC_0 (int const*,scalar_t__) ;
 scalar_t__ FUNC_1 (int const*,scalar_t__,scalar_t__) ;

__attribute__((used)) static uint32_t
FUNC_2(const byte *VAR_0, uint32_t VAR_1, uint32_t VAR_2, int VAR_3)
{
    if (VAR_0 == ((void*)0))
        return VAR_2;
    VAR_1 = FUNC_1(VAR_0, VAR_1, VAR_2);
    if (VAR_1 < VAR_2 && FUNC_0(VAR_0, VAR_1) != VAR_3)
        VAR_1 = FUNC_1(VAR_0, VAR_1, VAR_2);
    return VAR_1;
}
