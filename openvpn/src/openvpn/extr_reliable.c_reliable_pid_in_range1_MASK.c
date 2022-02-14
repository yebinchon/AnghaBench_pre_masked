
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ packet_id_type ;



__attribute__((used)) static inline bool
FUNC_0(const packet_id_type VAR_0,
                       const packet_id_type VAR_1,
                       const unsigned int VAR_2)
{
    if (VAR_0 >= VAR_1)
    {
        if (VAR_0 - VAR_1 < VAR_2)
        {
            return 1;
        }
    }
    else
    {
        if ((VAR_0+0x80000000u) - (VAR_1+0x80000000u) < VAR_2)
        {
            return 1;
        }
    }

    return 0;
}
