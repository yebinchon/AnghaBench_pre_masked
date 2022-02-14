
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ulong32 ;
struct TYPE_3__ {int Nr; int* dK; } ;
typedef TYPE_1__ aes_key ;


 int FUNC_0 (int,unsigned char const*) ;
 int FUNC_1 (int,unsigned char*) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (size_t) ;
 int* VAR_0 ;
 size_t FUNC_6 (int,int) ;

void FUNC_7(const unsigned char *VAR_1, unsigned char *VAR_2, aes_key *VAR_3)
{
    ulong32 VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, *VAR_12;
    int VAR_13, VAR_14;

    VAR_13 = VAR_3->Nr;
    VAR_12 = VAR_3->dK;

    FUNC_0(VAR_4, VAR_1 ); VAR_4 ^= VAR_12[0];
    FUNC_0(VAR_5, VAR_1 + 4); VAR_5 ^= VAR_12[1];
    FUNC_0(VAR_6, VAR_1 + 8); VAR_6 ^= VAR_12[2];
    FUNC_0(VAR_7, VAR_1 + 12); VAR_7 ^= VAR_12[3];

    VAR_14 = VAR_13 >> 1;
    for (;;) {

        VAR_8 =
            FUNC_2(FUNC_6(VAR_4, 3)) ^
            FUNC_3(FUNC_6(VAR_7, 2)) ^
            FUNC_4(FUNC_6(VAR_6, 1)) ^
            FUNC_5(FUNC_6(VAR_5, 0)) ^
            VAR_12[4];
        VAR_9 =
            FUNC_2(FUNC_6(VAR_5, 3)) ^
            FUNC_3(FUNC_6(VAR_4, 2)) ^
            FUNC_4(FUNC_6(VAR_7, 1)) ^
            FUNC_5(FUNC_6(VAR_6, 0)) ^
            VAR_12[5];
        VAR_10 =
            FUNC_2(FUNC_6(VAR_6, 3)) ^
            FUNC_3(FUNC_6(VAR_5, 2)) ^
            FUNC_4(FUNC_6(VAR_4, 1)) ^
            FUNC_5(FUNC_6(VAR_7, 0)) ^
            VAR_12[6];
        VAR_11 =
            FUNC_2(FUNC_6(VAR_7, 3)) ^
            FUNC_3(FUNC_6(VAR_6, 2)) ^
            FUNC_4(FUNC_6(VAR_5, 1)) ^
            FUNC_5(FUNC_6(VAR_4, 0)) ^
            VAR_12[7];

        VAR_12 += 8;
        if (--VAR_14 == 0) {
            break;
        }


        VAR_4 =
            FUNC_2(FUNC_6(VAR_8, 3)) ^
            FUNC_3(FUNC_6(VAR_11, 2)) ^
            FUNC_4(FUNC_6(VAR_10, 1)) ^
            FUNC_5(FUNC_6(VAR_9, 0)) ^
            VAR_12[0];
        VAR_5 =
            FUNC_2(FUNC_6(VAR_9, 3)) ^
            FUNC_3(FUNC_6(VAR_8, 2)) ^
            FUNC_4(FUNC_6(VAR_11, 1)) ^
            FUNC_5(FUNC_6(VAR_10, 0)) ^
            VAR_12[1];
        VAR_6 =
            FUNC_2(FUNC_6(VAR_10, 3)) ^
            FUNC_3(FUNC_6(VAR_9, 2)) ^
            FUNC_4(FUNC_6(VAR_8, 1)) ^
            FUNC_5(FUNC_6(VAR_11, 0)) ^
            VAR_12[2];
        VAR_7 =
            FUNC_2(FUNC_6(VAR_11, 3)) ^
            FUNC_3(FUNC_6(VAR_10, 2)) ^
            FUNC_4(FUNC_6(VAR_9, 1)) ^
            FUNC_5(FUNC_6(VAR_8, 0)) ^
            VAR_12[3];
    }

    VAR_4 =
        (VAR_0[FUNC_6(VAR_8, 3)] & 0xff000000) ^
        (VAR_0[FUNC_6(VAR_11, 2)] & 0x00ff0000) ^
        (VAR_0[FUNC_6(VAR_10, 1)] & 0x0000ff00) ^
        (VAR_0[FUNC_6(VAR_9, 0)] & 0x000000ff) ^
        VAR_12[0];
    FUNC_1(VAR_4, VAR_2);
    VAR_5 =
        (VAR_0[FUNC_6(VAR_9, 3)] & 0xff000000) ^
        (VAR_0[FUNC_6(VAR_8, 2)] & 0x00ff0000) ^
        (VAR_0[FUNC_6(VAR_11, 1)] & 0x0000ff00) ^
        (VAR_0[FUNC_6(VAR_10, 0)] & 0x000000ff) ^
        VAR_12[1];
    FUNC_1(VAR_5, VAR_2+4);
    VAR_6 =
        (VAR_0[FUNC_6(VAR_10, 3)] & 0xff000000) ^
        (VAR_0[FUNC_6(VAR_9, 2)] & 0x00ff0000) ^
        (VAR_0[FUNC_6(VAR_8, 1)] & 0x0000ff00) ^
        (VAR_0[FUNC_6(VAR_11, 0)] & 0x000000ff) ^
        VAR_12[2];
    FUNC_1(VAR_6, VAR_2+8);
    VAR_7 =
        (VAR_0[FUNC_6(VAR_11, 3)] & 0xff000000) ^
        (VAR_0[FUNC_6(VAR_10, 2)] & 0x00ff0000) ^
        (VAR_0[FUNC_6(VAR_9, 1)] & 0x0000ff00) ^
        (VAR_0[FUNC_6(VAR_8, 0)] & 0x000000ff) ^
        VAR_12[3];
    FUNC_1(VAR_7, VAR_2+12);
}
