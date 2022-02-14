
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ulong32 ;
struct TYPE_3__ {int Nr; int* eK; } ;
typedef TYPE_1__ aes_key ;


 int FUNC_0 (int,unsigned char const*) ;
 int FUNC_1 (int,unsigned char*) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (size_t) ;
 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 size_t FUNC_6 (int,int) ;

void FUNC_7(const unsigned char *VAR_4, unsigned char *VAR_5, aes_key *VAR_6)
{
    ulong32 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, *VAR_15;
    int VAR_16, VAR_17;

    VAR_16 = VAR_6->Nr;
    VAR_15 = VAR_6->eK;

    FUNC_0(VAR_7, VAR_4 ); VAR_7 ^= VAR_15[0];
    FUNC_0(VAR_8, VAR_4 + 4); VAR_8 ^= VAR_15[1];
    FUNC_0(VAR_9, VAR_4 + 8); VAR_9 ^= VAR_15[2];
    FUNC_0(VAR_10, VAR_4 + 12); VAR_10 ^= VAR_15[3];

    VAR_17 = VAR_16 >> 1;
    for (;;) {
        VAR_11 =
            FUNC_2(FUNC_6(VAR_7, 3)) ^
            FUNC_3(FUNC_6(VAR_8, 2)) ^
            FUNC_4(FUNC_6(VAR_9, 1)) ^
            FUNC_5(FUNC_6(VAR_10, 0)) ^
            VAR_15[4];
        VAR_12 =
            FUNC_2(FUNC_6(VAR_8, 3)) ^
            FUNC_3(FUNC_6(VAR_9, 2)) ^
            FUNC_4(FUNC_6(VAR_10, 1)) ^
            FUNC_5(FUNC_6(VAR_7, 0)) ^
            VAR_15[5];
        VAR_13 =
            FUNC_2(FUNC_6(VAR_9, 3)) ^
            FUNC_3(FUNC_6(VAR_10, 2)) ^
            FUNC_4(FUNC_6(VAR_7, 1)) ^
            FUNC_5(FUNC_6(VAR_8, 0)) ^
            VAR_15[6];
        VAR_14 =
            FUNC_2(FUNC_6(VAR_10, 3)) ^
            FUNC_3(FUNC_6(VAR_7, 2)) ^
            FUNC_4(FUNC_6(VAR_8, 1)) ^
            FUNC_5(FUNC_6(VAR_9, 0)) ^
            VAR_15[7];

        VAR_15 += 8;
        if (--VAR_17 == 0) {
            break;
        }

        VAR_7 =
            FUNC_2(FUNC_6(VAR_11, 3)) ^
            FUNC_3(FUNC_6(VAR_12, 2)) ^
            FUNC_4(FUNC_6(VAR_13, 1)) ^
            FUNC_5(FUNC_6(VAR_14, 0)) ^
            VAR_15[0];
        VAR_8 =
            FUNC_2(FUNC_6(VAR_12, 3)) ^
            FUNC_3(FUNC_6(VAR_13, 2)) ^
            FUNC_4(FUNC_6(VAR_14, 1)) ^
            FUNC_5(FUNC_6(VAR_11, 0)) ^
            VAR_15[1];
        VAR_9 =
            FUNC_2(FUNC_6(VAR_13, 3)) ^
            FUNC_3(FUNC_6(VAR_14, 2)) ^
            FUNC_4(FUNC_6(VAR_11, 1)) ^
            FUNC_5(FUNC_6(VAR_12, 0)) ^
            VAR_15[2];
        VAR_10 =
            FUNC_2(FUNC_6(VAR_14, 3)) ^
            FUNC_3(FUNC_6(VAR_11, 2)) ^
            FUNC_4(FUNC_6(VAR_12, 1)) ^
            FUNC_5(FUNC_6(VAR_13, 0)) ^
            VAR_15[3];
    }

    VAR_7 =
        (VAR_3[FUNC_6(VAR_11, 3)]) ^
        (VAR_2[FUNC_6(VAR_12, 2)]) ^
        (VAR_1[FUNC_6(VAR_13, 1)]) ^
        (VAR_0[FUNC_6(VAR_14, 0)]) ^
        VAR_15[0];
    FUNC_1(VAR_7, VAR_5);
    VAR_8 =
        (VAR_3[FUNC_6(VAR_12, 3)]) ^
        (VAR_2[FUNC_6(VAR_13, 2)]) ^
        (VAR_1[FUNC_6(VAR_14, 1)]) ^
        (VAR_0[FUNC_6(VAR_11, 0)]) ^
        VAR_15[1];
    FUNC_1(VAR_8, VAR_5+4);
    VAR_9 =
        (VAR_3[FUNC_6(VAR_13, 3)]) ^
        (VAR_2[FUNC_6(VAR_14, 2)]) ^
        (VAR_1[FUNC_6(VAR_11, 1)]) ^
        (VAR_0[FUNC_6(VAR_12, 0)]) ^
        VAR_15[2];
    FUNC_1(VAR_9, VAR_5+8);
    VAR_10 =
        (VAR_3[FUNC_6(VAR_14, 3)]) ^
        (VAR_2[FUNC_6(VAR_11, 2)]) ^
        (VAR_1[FUNC_6(VAR_12, 1)]) ^
        (VAR_0[FUNC_6(VAR_13, 0)]) ^
        VAR_15[3];
    FUNC_1(VAR_10, VAR_5+12);
}
