
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_3__ {int hi; int lo; int member_1; int member_0; } ;
typedef TYPE_1__ u128 ;


 int FUNC_0 (long const) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (TYPE_1__) ;

__attribute__((used)) static void FUNC_4(u64 VAR_0[2], const u64 VAR_1[2])
{
    u128 VAR_2, VAR_3 = { 0, 0 };
    long VAR_4;
    int VAR_5, VAR_6;
    const long *VAR_7 = (const long *)VAR_0;
    const union {
        long one;
        char little;
    } VAR_8 = { 1 };

    VAR_2.hi = VAR_1[0];
    VAR_2.lo = VAR_1[1];

    for (VAR_6 = 0; VAR_6 < 16 / sizeof(long); ++VAR_6) {
        if (VAR_8.little) {
            if (sizeof(long) == 8) {



                const u8 *VAR_9 = (const u8 *)(VAR_7 + VAR_6);
                VAR_4 = (long)((u64)FUNC_1(VAR_9) << 32 | FUNC_1(VAR_9 + 4));

            } else {
                const u8 *VAR_10 = (const u8 *)(VAR_7 + VAR_6);
                VAR_4 = (long)FUNC_1(VAR_10);
            }
        } else
            VAR_4 = VAR_7[VAR_6];

        for (VAR_5 = 0; VAR_5 < 8 * sizeof(long); ++VAR_5, VAR_4 <<= 1) {
            u64 VAR_11 = (u64)(VAR_4 >> (8 * sizeof(long) - 1));
            VAR_3.hi ^= VAR_2.hi & VAR_11;
            VAR_3.lo ^= VAR_2.lo & VAR_11;

            FUNC_3(VAR_2);
        }
    }

    if (VAR_8.little) {




        u8 *VAR_12 = (u8 *)VAR_0;
        u32 VAR_13;
        VAR_13 = (u32)(VAR_3.hi >> 32);
        FUNC_2(VAR_12, VAR_13);
        VAR_13 = (u32)(VAR_3.hi);
        FUNC_2(VAR_12 + 4, VAR_13);
        VAR_13 = (u32)(VAR_3.lo >> 32);
        FUNC_2(VAR_12 + 8, VAR_13);
        VAR_13 = (u32)(VAR_3.lo);
        FUNC_2(VAR_12 + 12, VAR_13);

    } else {
        VAR_0[0] = VAR_3.hi;
        VAR_0[1] = VAR_3.lo;
    }
}
