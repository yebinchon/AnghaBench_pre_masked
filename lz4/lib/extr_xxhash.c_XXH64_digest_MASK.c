
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ XXH_endianess ;
typedef int XXH64_state_t ;


 unsigned long long FUNC_0 (int const*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

unsigned long long FUNC_1 (const XXH64_state_t* VAR_4)
{
    XXH_endianess VAR_5 = (XXH_endianess)VAR_0;

    if ((VAR_5==VAR_3) || VAR_1)
        return FUNC_0(VAR_4, VAR_3);
    else
        return FUNC_0(VAR_4, VAR_2);
}
