
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
struct ar_archive_rar_uncomp_v3 {int lastlength; int lastoffset; int* oldoffset; int numlowoffsetrepeats; int lastlowoffset; int lowoffsetcode; int offsetcode; int lengthcode; int maincode; scalar_t__ is_ppmd_block; } ;
typedef int offsetbits ;
typedef int offsetbases ;
typedef int lengthbits ;
typedef int lengthbases ;
typedef scalar_t__ int64_t ;
typedef int int32_t ;
struct TYPE_12__ {struct ar_archive_rar_uncomp_v3 v3; } ;
struct TYPE_13__ {int version; int start_new_table; int lzss; TYPE_1__ state; } ;
struct TYPE_14__ {TYPE_2__ uncomp; } ;
typedef TYPE_3__ ar_archive_rar ;
typedef int LZSS ;


 scalar_t__ FUNC_0 (TYPE_3__*,int const) ;
 int FUNC_1 (TYPE_3__*,int const) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (TYPE_3__*,scalar_t__) ;
 int FUNC_6 (TYPE_3__*,scalar_t__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,int ,scalar_t__*) ;
 int FUNC_9 (TYPE_3__*,int *) ;
 int FUNC_10 (char*) ;

int64_t FUNC_11(ar_archive_rar *VAR_1, int64_t VAR_2)
{
    static const uint8_t VAR_3[] =
        { 0, 1, 2, 3, 4, 5, 6,
            7, 8, 10, 12, 14, 16, 20,
           24, 28, 32, 40, 48, 56, 64,
           80, 96, 112, 128, 160, 192, 224 };
    static const uint8_t VAR_4[] =
        { 0, 0, 0, 0, 0, 0, 0,
          0, 1, 1, 1, 1, 2, 2,
          2, 2, 3, 3, 3, 3, 4,
          4, 4, 4, 5, 5, 5, 5 };
    static const int32_t VAR_5[] =
        { 0, 1, 2, 3, 4, 6,
                8, 12, 16, 24, 32, 48,
               64, 96, 128, 192, 256, 384,
              512, 768, 1024, 1536, 2048, 3072,
             4096, 6144, 8192, 12288, 16384, 24576,
            32768, 49152, 65536, 98304, 131072, 196608,
           262144, 327680, 393216, 458752, 524288, 589824,
           655360, 720896, 786432, 851968, 917504, 983040,
          1048576, 1310720, 1572864, 1835008, 2097152, 2359296,
          2621440, 2883584, 3145728, 3407872, 3670016, 3932160 };
    static const uint8_t VAR_6[] =
        { 0, 0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4,
           5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10,
          11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16,
          16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
          18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18 };
    static const uint8_t VAR_7[] =
        { 0, 4, 8, 16, 32, 64, 128, 192 };
    static const uint8_t VAR_8[] =
        { 2, 2, 3, 4, 5, 6, 6, 6 };

    struct ar_archive_rar_uncomp_v3 *VAR_9 = &VAR_1->uncomp.state.v3;
    LZSS *VAR_10 = &VAR_1->uncomp.lzss;
    int VAR_11, VAR_12, VAR_13, VAR_14;

    if (VAR_1->uncomp.version == 2)
        return FUNC_5(VAR_1, VAR_2);

    for (;;) {
        if (FUNC_4(VAR_10) >= VAR_2)
            return VAR_2;

        if (VAR_9->is_ppmd_block) {
            if (!FUNC_6(VAR_1, &VAR_2))
                return -1;
            if (VAR_1->uncomp.start_new_table)
                return FUNC_4(VAR_10);
            continue;
        }

        VAR_11 = FUNC_9(VAR_1, &VAR_9->maincode);
        if (VAR_11 < 0)
            return -1;
        if (VAR_11 < 256) {
            FUNC_2(VAR_10, (uint8_t)VAR_11);
            continue;
        }
        if (VAR_11 == 256) {
            if (!FUNC_1(VAR_1, 1))
                return -1;
            if (!FUNC_0(VAR_1, 1)) {
                if (!FUNC_1(VAR_1, 1))
                    return -1;
                VAR_1->uncomp.start_new_table = FUNC_0(VAR_1, 1) != 0;
                return FUNC_4(VAR_10);
            }
            if (!FUNC_7(VAR_1))
                return -1;
            continue;
        }
        if (VAR_11 == 257) {
            if (!FUNC_8(VAR_1, VAR_0, &VAR_2))
                return -1;
            continue;
        }
        if (VAR_11 == 258) {
            if (VAR_9->lastlength == 0)
                continue;
            VAR_12 = VAR_9->lastoffset;
            VAR_13 = VAR_9->lastlength;
        }
        else if (VAR_11 <= 262) {
            int VAR_15 = VAR_11 - 259;
            int VAR_16 = FUNC_9(VAR_1, &VAR_9->lengthcode);
            VAR_12 = VAR_9->oldoffset[VAR_15];
            if (VAR_16 < 0 || VAR_16 > (int)(sizeof(VAR_3) / sizeof(VAR_3[0])) || VAR_16 > (int)(sizeof(VAR_4) / sizeof(VAR_4[0]))) {
                FUNC_10("Invalid data in bitstream");
                return -1;
            }
            VAR_13 = VAR_3[VAR_16] + 2;
            if (VAR_4[VAR_16] > 0) {
                if (!FUNC_1(VAR_1, VAR_4[VAR_16]))
                    return -1;
                VAR_13 += (uint8_t)FUNC_0(VAR_1, VAR_4[VAR_16]);
            }
            for (VAR_14 = VAR_15; VAR_14 > 0; VAR_14--)
                VAR_9->oldoffset[VAR_14] = VAR_9->oldoffset[VAR_14 - 1];
            VAR_9->oldoffset[0] = VAR_12;
        }
        else if (VAR_11 <= 270) {
            int VAR_17 = VAR_11 - 263;
            VAR_12 = VAR_7[VAR_17] + 1;
            if (VAR_8[VAR_17] > 0) {
                if (!FUNC_1(VAR_1, VAR_8[VAR_17]))
                    return -1;
                VAR_12 += (uint8_t)FUNC_0(VAR_1, VAR_8[VAR_17]);
            }
            VAR_13 = 2;
            for (VAR_14 = 3; VAR_14 > 0; VAR_14--)
                VAR_9->oldoffset[VAR_14] = VAR_9->oldoffset[VAR_14 - 1];
            VAR_9->oldoffset[0] = VAR_12;
        }
        else {
            int VAR_18 = VAR_11 - 271;
            int VAR_19;
            if (VAR_18 > (int)(sizeof(VAR_3) / sizeof(VAR_3[0])) || VAR_18 > (int)(sizeof(VAR_4) / sizeof(VAR_4[0]))) {
                FUNC_10("Invalid data in bitstream");
                return -1;
            }
            VAR_13 = VAR_3[VAR_18] + 3;
            if (VAR_4[VAR_18] > 0) {
                if (!FUNC_1(VAR_1, VAR_4[VAR_18]))
                    return -1;
                VAR_13 += (uint8_t)FUNC_0(VAR_1, VAR_4[VAR_18]);
            }
            VAR_19 = FUNC_9(VAR_1, &VAR_9->offsetcode);
            if (VAR_19 < 0 || VAR_19 > (int)(sizeof(VAR_5) / sizeof(VAR_5[0])) || VAR_19 > (int)(sizeof(VAR_6) / sizeof(VAR_6[0]))) {
                FUNC_10("Invalid data in bitstream");
                return -1;
            }
            VAR_12 = VAR_5[VAR_19] + 1;
            if (VAR_6[VAR_19] > 0) {
                if (VAR_19 > 9) {
                    if (VAR_6[VAR_19] > 4) {
                        if (!FUNC_1(VAR_1, VAR_6[VAR_19] - 4))
                            return -1;
                        VAR_12 += (int)FUNC_0(VAR_1, VAR_6[VAR_19] - 4) << 4;
                    }
                    if (VAR_9->numlowoffsetrepeats > 0) {
                        VAR_9->numlowoffsetrepeats--;
                        VAR_12 += VAR_9->lastlowoffset;
                    }
                    else {
                        int VAR_20 = FUNC_9(VAR_1, &VAR_9->lowoffsetcode);
                        if (VAR_20 < 0)
                            return -1;
                        if (VAR_20 == 16) {
                            VAR_9->numlowoffsetrepeats = 15;
                            VAR_12 += VAR_9->lastlowoffset;
                        }
                        else {
                            VAR_12 += VAR_20;
                            VAR_9->lastlowoffset = VAR_20;
                        }
                    }
                }
                else {
                    if (!FUNC_1(VAR_1, VAR_6[VAR_19]))
                        return -1;
                    VAR_12 += (int)FUNC_0(VAR_1, VAR_6[VAR_19]);
                }
            }

            if (VAR_12 >= 0x40000)
                VAR_13++;
            if (VAR_12 >= 0x2000)
                VAR_13++;

            for (VAR_14 = 3; VAR_14 > 0; VAR_14--)
                VAR_9->oldoffset[VAR_14] = VAR_9->oldoffset[VAR_14 - 1];
            VAR_9->oldoffset[0] = VAR_12;
        }

        VAR_9->lastoffset = VAR_12;
        VAR_9->lastlength = VAR_13;

        FUNC_3(VAR_10, VAR_12, VAR_13);
    }
}
