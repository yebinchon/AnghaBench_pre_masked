
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (unsigned int,int,int) ;

__attribute__((used)) static inline uint64_t
FUNC_1(unsigned VAR_0, uint64_t VAR_1, uint64_t VAR_2, uint64_t VAR_3, uint64_t VAR_4)
{
    uint64_t VAR_5, VAR_6;
    unsigned VAR_7;
    uint64_t VAR_8;

    VAR_5 = VAR_3 % VAR_1;
    VAR_6 = VAR_3 / VAR_1;

    for (VAR_7=1; VAR_7<=VAR_0; VAR_7++) {
        if (VAR_7 & 1) {
            VAR_8 = (VAR_5 + FUNC_0(VAR_7, VAR_6, VAR_4)) % VAR_1;
        } else {
            VAR_8 = (VAR_5 + FUNC_0(VAR_7, VAR_6, VAR_4)) % VAR_2;
        }
        VAR_5 = VAR_6;
        VAR_6 = VAR_8;
    }
    if (VAR_0 & 1) {
        return VAR_1 * VAR_5 + VAR_6;
    } else {
        return VAR_1 * VAR_6 + VAR_5;
    }
}
