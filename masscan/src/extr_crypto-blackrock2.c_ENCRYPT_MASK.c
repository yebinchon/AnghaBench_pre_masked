
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (unsigned int,int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline uint64_t
FUNC_2(unsigned VAR_0, uint64_t VAR_1, uint64_t VAR_2, uint64_t VAR_3, uint64_t VAR_4, uint64_t VAR_5, uint64_t VAR_6)
{
    uint64_t VAR_7, VAR_8;
    unsigned VAR_9 = 1;
    uint64_t VAR_10;

    FUNC_1(VAR_3);

    VAR_7 = VAR_5 & VAR_2;
    VAR_8 = VAR_5 >> VAR_1;

    for (VAR_9=1; VAR_9<=VAR_0; VAR_9++) {
        VAR_10 = (VAR_7 + FUNC_0(VAR_9, VAR_8, VAR_6)) & VAR_2;
        VAR_7 = VAR_8;
        VAR_8 = VAR_10;
        VAR_9++;

        VAR_10 = (VAR_7 + FUNC_0(VAR_9, VAR_8, VAR_6)) & VAR_4;
        VAR_7 = VAR_8;
        VAR_8 = VAR_10;
    }

    if ((VAR_9-1) & 1) {
        return (VAR_7 << (VAR_1)) + VAR_8;
    } else {
        return (VAR_8 << (VAR_1)) + VAR_7;
    }
}
