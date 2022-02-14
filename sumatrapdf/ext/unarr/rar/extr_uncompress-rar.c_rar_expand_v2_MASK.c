
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct ar_archive_rar_uncomp_v2 {size_t channel; size_t numchannels; int lastoffset; int lastlength; int* oldoffset; int oldoffsetindex; int offsetcode; int lengthcode; int maincode; int channeldelta; int * audiostate; int * audiocode; scalar_t__ audioblock; } ;
typedef int offsetbits ;
typedef int offsetbases ;
typedef int lengthbits ;
typedef int lengthbases ;
typedef int int8_t ;
typedef scalar_t__ int64_t ;
typedef int int32_t ;
struct TYPE_10__ {struct ar_archive_rar_uncomp_v2 v2; } ;
struct TYPE_13__ {int start_new_table; int lzss; TYPE_1__ state; } ;
struct TYPE_12__ {scalar_t__ size_total; } ;
struct TYPE_11__ {scalar_t__ entry_size_uncompressed; } ;
struct TYPE_14__ {TYPE_4__ uncomp; TYPE_3__ solid; TYPE_2__ super; } ;
typedef TYPE_5__ ar_archive_rar ;
typedef int LZSS ;


 scalar_t__ FUNC_0 (TYPE_5__*,int const) ;
 int FUNC_1 (TYPE_5__*,int const) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (TYPE_5__*,int *) ;
 int FUNC_7 (char*) ;

int64_t FUNC_8(ar_archive_rar *VAR_0, int64_t VAR_1)
{
    static const uint8_t VAR_2[] =
        { 0, 1, 2, 3, 4, 5, 6,
            7, 8, 10, 12, 14, 16, 20,
           24, 28, 32, 40, 48, 56, 64,
           80, 96, 112, 128, 160, 192, 224 };
    static const uint8_t VAR_3[] =
        { 0, 0, 0, 0, 0, 0, 0,
          0, 1, 1, 1, 1, 2, 2,
          2, 2, 3, 3, 3, 3, 4,
          4, 4, 4, 5, 5, 5, 5 };
    static const int32_t VAR_4[] =
        { 0, 1, 2, 3, 4, 6,
                8, 12, 16, 24, 32, 48,
               64, 96, 128, 192, 256, 384,
              512, 768, 1024, 1536, 2048, 3072,
             4096, 6144, 8192, 12288, 16384, 24576,
            32768, 49152, 65536, 98304, 131072, 196608,
           262144, 327680, 393216, 458752, 524288, 589824,
           655360, 720896, 786432, 851968, 917504, 983040 };
    static const uint8_t VAR_5[] =
        { 0, 0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4,
           5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10,
          11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16,
          16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16 };
    static const uint8_t VAR_6[] =
        { 0, 4, 8, 16, 32, 64, 128, 192 };
    static const uint8_t VAR_7[] =
        { 2, 2, 3, 4, 5, 6, 6, 6 };

    struct ar_archive_rar_uncomp_v2 *VAR_8 = &VAR_0->uncomp.state.v2;
    LZSS *VAR_9 = &VAR_0->uncomp.lzss;
    int VAR_10, VAR_11, VAR_12;

    if ((uint64_t)VAR_1 > VAR_0->super.entry_size_uncompressed + VAR_0->solid.size_total)
        VAR_1 = VAR_0->super.entry_size_uncompressed + VAR_0->solid.size_total;

    for (;;) {
        if (FUNC_4(VAR_9) >= VAR_1)
            return VAR_1;

        if (VAR_8->audioblock) {
            uint8_t VAR_13;
            VAR_10 = FUNC_6(VAR_0, &VAR_8->audiocode[VAR_8->channel]);
            if (VAR_10 < 0)
                return -1;
            if (VAR_10 == 256) {
                VAR_0->uncomp.start_new_table = 1;
                return FUNC_4(VAR_9);
            }
            VAR_13 = FUNC_5(&VAR_8->audiostate[VAR_8->channel], &VAR_8->channeldelta, (int8_t)(uint8_t)VAR_10);
            VAR_8->channel++;
            if (VAR_8->channel == VAR_8->numchannels)
                VAR_8->channel = 0;
            FUNC_2(VAR_9, VAR_13);
            continue;
        }

        VAR_10 = FUNC_6(VAR_0, &VAR_8->maincode);
        if (VAR_10 < 0)
            return -1;
        if (VAR_10 < 256) {
            FUNC_2(VAR_9, (uint8_t)VAR_10);
            continue;
        }
        if (VAR_10 == 256) {
            VAR_11 = VAR_8->lastoffset;
            VAR_12 = VAR_8->lastlength;
        }
        else if (VAR_10 <= 260) {
            int VAR_14 = VAR_10 - 256;
            int VAR_15 = FUNC_6(VAR_0, &VAR_8->lengthcode);
            VAR_11 = VAR_8->oldoffset[(VAR_8->oldoffsetindex - VAR_14) & 0x03];
            if (VAR_15 < 0 || VAR_15 > (int)(sizeof(VAR_2) / sizeof(VAR_2[0])) || VAR_15 > (int)(sizeof(VAR_3) / sizeof(VAR_3[0]))) {
                FUNC_7("Invalid data in bitstream");
                return -1;
            }
            VAR_12 = VAR_2[VAR_15] + 2;
            if (VAR_3[VAR_15] > 0) {
                if (!FUNC_1(VAR_0, VAR_3[VAR_15]))
                    return -1;
                VAR_12 += (uint8_t)FUNC_0(VAR_0, VAR_3[VAR_15]);
            }
            if (VAR_11 >= 0x40000)
                VAR_12++;
            if (VAR_11 >= 0x2000)
                VAR_12++;
            if (VAR_11 >= 0x101)
                VAR_12++;
        }
        else if (VAR_10 <= 268) {
            int VAR_16 = VAR_10 - 261;
            VAR_11 = VAR_6[VAR_16] + 1;
            if (VAR_7[VAR_16] > 0) {
                if (!FUNC_1(VAR_0, VAR_7[VAR_16]))
                    return -1;
                VAR_11 += (uint8_t)FUNC_0(VAR_0, VAR_7[VAR_16]);
            }
            VAR_12 = 2;
        }
        else if (VAR_10 == 269) {
            VAR_0->uncomp.start_new_table = 1;
            return FUNC_4(VAR_9);
        }
        else {
            int VAR_17 = VAR_10 - 270;
            int VAR_18;
            if (VAR_17 > (int)(sizeof(VAR_2) / sizeof(VAR_2[0])) || VAR_17 > (int)(sizeof(VAR_3) / sizeof(VAR_3[0]))) {
                FUNC_7("Invalid data in bitstream");
                return -1;
            }
            VAR_12 = VAR_2[VAR_17] + 3;
            if (VAR_3[VAR_17] > 0) {
                if (!FUNC_1(VAR_0, VAR_3[VAR_17]))
                    return -1;
                VAR_12 += (uint8_t)FUNC_0(VAR_0, VAR_3[VAR_17]);
            }
            VAR_18 = FUNC_6(VAR_0, &VAR_8->offsetcode);
            if (VAR_18 < 0 || VAR_18 > (int)(sizeof(VAR_4) / sizeof(VAR_4[0])) || VAR_18 > (int)(sizeof(VAR_5) / sizeof(VAR_5[0]))) {
                FUNC_7("Invalid data in bitstream");
                return -1;
            }
            VAR_11 = VAR_4[VAR_18] + 1;
            if (VAR_5[VAR_18] > 0) {
                if (!FUNC_1(VAR_0, VAR_5[VAR_18]))
                    return -1;
                VAR_11 += (int)FUNC_0(VAR_0, VAR_5[VAR_18]);
            }
            if (VAR_11 >= 0x40000)
                VAR_12++;
            if (VAR_11 >= 0x2000)
                VAR_12++;
        }

        VAR_8->lastoffset = VAR_8->oldoffset[VAR_8->oldoffsetindex++ & 0x03] = VAR_11;
        VAR_8->lastlength = VAR_12;

        FUNC_3(VAR_9, VAR_11, VAR_12);
    }
}
