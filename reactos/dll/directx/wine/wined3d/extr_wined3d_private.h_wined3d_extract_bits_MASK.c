
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int DWORD ;


 int VAR_0 ;

__attribute__((used)) static inline DWORD FUNC_0(const DWORD *VAR_1,
        unsigned int VAR_2, unsigned int VAR_3)
{
    const unsigned int VAR_4 = sizeof(*VAR_1) * VAR_0;
    const unsigned int VAR_5 = VAR_2 / VAR_4;
    const unsigned int VAR_6 = VAR_2 % VAR_4;
    DWORD VAR_7 = (1u << VAR_3) - 1;
    DWORD VAR_8;

    VAR_8 = (VAR_1[VAR_5] >> VAR_6) & VAR_7;
    if (VAR_6 + VAR_3 > VAR_4)
    {
        const unsigned int VAR_9 = VAR_4 - VAR_6;
        const unsigned int VAR_10 = VAR_3 - VAR_9;
        VAR_7 = (1u << VAR_10) - 1;
        VAR_8 |= (VAR_1[VAR_5 + 1] & VAR_7) << VAR_9;
    }
    return VAR_8;
}
