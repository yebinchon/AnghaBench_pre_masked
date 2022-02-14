
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const time_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool
FUNC_0(time_t VAR_1, unsigned int VAR_2)
{
    unsigned int VAR_3;
    const time_t VAR_4 = VAR_0;

    if (VAR_4 >= VAR_1)
    {
        VAR_3 = VAR_4 - VAR_1;
    }
    else
    {
        VAR_3 = VAR_1 - VAR_4;
    }
    return VAR_3 <= VAR_2;
}
