
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef size_t T ;


 size_t FUNC_0 (int,int) ;
 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;

__attribute__((used)) static inline uint64_t
FUNC_1(uint64_t VAR_9, uint64_t VAR_10, uint64_t VAR_11)
{




    uint64_t VAR_12, VAR_13;

    VAR_12 = VAR_10 ^ ((VAR_11>>VAR_9) | (VAR_11<<(64-VAR_9)));


    if (VAR_9 & 1) {
        VAR_13 = VAR_7[ (VAR_12 ) & 0x3F ] ^ VAR_5[ (VAR_12 >> 8) & 0x3F ] ^ VAR_3[ (VAR_12 >> 16) & 0x3F ] ^ VAR_1[ (VAR_12 >> 24) & 0x3F ]; } else {




        VAR_13 = VAR_6[ (VAR_12 ) & 0x3F ] ^ VAR_4[ (VAR_12 >> 8) & 0x3F ] ^ VAR_2[ (VAR_12 >> 16) & 0x3F ] ^ VAR_0[ (VAR_12 >> 24) & 0x3F ];



    }
    return VAR_13;
}
