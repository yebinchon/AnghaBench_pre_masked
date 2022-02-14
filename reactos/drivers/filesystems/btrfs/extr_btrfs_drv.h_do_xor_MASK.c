
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int __m128i ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static __inline void FUNC_3(uint8_t* VAR_1, uint8_t* VAR_2, uint32_t VAR_3) {
    uint32_t VAR_4;

    __m128i VAR_5, VAR_6;



    if (VAR_0 && ((uintptr_t)VAR_1 & 0xf) == 0 && ((uintptr_t)VAR_2 & 0xf) == 0) {
        while (VAR_3 >= 16) {
            VAR_5 = FUNC_0((__m128i*)VAR_1);
            VAR_6 = FUNC_0((__m128i*)VAR_2);
            VAR_5 = FUNC_2(VAR_5, VAR_6);
            FUNC_1((__m128i*)VAR_1, VAR_5);

            VAR_1 += 16;
            VAR_2 += 16;
            VAR_3 -= 16;
        }
    }


    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        *VAR_1 ^= *VAR_2;
        VAR_1++;
        VAR_2++;
    }
}
