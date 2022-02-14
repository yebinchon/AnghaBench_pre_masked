
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef void BYTE ;


 unsigned long long FUNC_0 (int ) ;
 int FUNC_1 (void const*) ;
 unsigned long long VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 size_t FUNC_2 (void const*,size_t) ;
 size_t VAR_3 ;
 unsigned long long FUNC_3 (void const*,size_t) ;
 scalar_t__ FUNC_4 (size_t const) ;
 size_t VAR_4 ;
 int VAR_5 ;

unsigned long long FUNC_5(const void* VAR_6, size_t VAR_7)
{
    unsigned long long VAR_8 = 0;

    while (VAR_7 >= VAR_3) {
        U32 const VAR_9 = FUNC_1(VAR_6);

        if ((VAR_9 & 0xFFFFFFF0U) == VAR_2) {
            size_t VAR_10;
            if (VAR_7 < VAR_4)
                return FUNC_0(VAR_5);
            VAR_10 = FUNC_1((const BYTE *)VAR_6 + VAR_1)
                          + VAR_4;
            if (VAR_7 < VAR_10) {
                return VAR_0;
            }

            VAR_6 = (const BYTE *)VAR_6 + VAR_10;
            VAR_7 -= VAR_10;
            continue;
        }

        { unsigned long long const VAR_11 = FUNC_3(VAR_6, VAR_7);
            if (VAR_11 >= VAR_0) return VAR_11;


            if (VAR_8 + VAR_11 < VAR_8) return VAR_0;
            VAR_8 += VAR_11;
        }
        { size_t const VAR_12 = FUNC_2(VAR_6, VAR_7);
            if (FUNC_4(VAR_12)) {
                return VAR_0;
            }

            VAR_6 = (const BYTE *)VAR_6 + VAR_12;
            VAR_7 -= VAR_12;
        }
    }

    if (VAR_7) return VAR_0;

    return VAR_8;
}
