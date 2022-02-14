
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int byte ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int const*,scalar_t__) ;

__attribute__((used)) static uint32_t
FUNC_1(const byte *VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
    int VAR_4, VAR_5;

    if (VAR_1 == ((void*)0))
        return VAR_3;

    if (VAR_2 == VAR_0) {
        VAR_4 = 0;
        VAR_2 = 0;
    } else if (VAR_2 < VAR_3) {
        VAR_4 = FUNC_0(VAR_1, VAR_2);
        VAR_2++;
    } else {
        return VAR_2;
    }

    while (VAR_2 < VAR_3) {
        VAR_5 = FUNC_0(VAR_1, VAR_2);
        if (VAR_4 != VAR_5)
            break;
        VAR_2++;
    }

    return VAR_2;
}
