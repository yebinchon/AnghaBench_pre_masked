
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int version; int dsize; unsigned int topic_maplen; int** topic_map; int* topic_end; } ;
typedef int OFSTRUCT ;
typedef int LPCSTR ;
typedef TYPE_1__ HLPFILE ;
typedef scalar_t__ HFILE ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_1__*,int*,int*,int,unsigned int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,scalar_t__) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int*,int*,unsigned int*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;




 int VAR_2 ;
 scalar_t__ FUNC_13 (int ,int *,int ) ;
 int VAR_3 ;
 int FUNC_14 (char*,int) ;
 int FUNC_15 (char*,int,unsigned int,unsigned int) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (scalar_t__) ;
 int* FUNC_18 (int*,int*) ;

__attribute__((used)) static BOOL FUNC_19(HLPFILE *VAR_4, LPCSTR VAR_5)
{
    BOOL VAR_6;
    HFILE VAR_7;
    OFSTRUCT VAR_8;
    BYTE* VAR_9;
    DWORD VAR_10 = 0x0C;
    unsigned VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;

    VAR_7 = FUNC_13(VAR_5, &VAR_8, VAR_2);
    if (VAR_7 == VAR_1) return VAR_0;

    VAR_6 = FUNC_6(VAR_4, VAR_7);
    FUNC_17(VAR_7);
    if (!VAR_6) return VAR_0;

    if (!FUNC_9(VAR_4)) return VAR_0;

    if (VAR_4->version <= 16 && !FUNC_5(VAR_4)) return VAR_0;


    if (!FUNC_10(VAR_4))
        FUNC_11(VAR_4);

    if (!FUNC_12(VAR_4)) return VAR_0;
    if (!FUNC_7(VAR_4)) return VAR_0;

    VAR_12 = -1;
    VAR_15 = 0;
    do
    {
        BYTE* VAR_17;

        if (VAR_4->version <= 16)
        {
            VAR_11 = (VAR_10 - 0x0C) / VAR_4->dsize;
            VAR_13 = (VAR_10 - 0x0C) % VAR_4->dsize;
        }
        else
        {
            VAR_11 = (VAR_10 - 0x0C) >> 14;
            VAR_13 = (VAR_10 - 0x0C) & 0x3FFF;
        }

        if (VAR_4->version <= 16 && VAR_11 != VAR_12 && VAR_12 != -1)
        {

            VAR_10 -= 12;
            VAR_13 -= 12;
        }

        FUNC_15("ref=%08x => [%u/%u]\n", VAR_10, VAR_11, VAR_13);

        if (VAR_11 >= VAR_4->topic_maplen) {FUNC_16("maplen\n"); break;}
        VAR_9 = VAR_4->topic_map[VAR_11] + VAR_13;
        if (VAR_9 + 0x15 >= VAR_4->topic_end) {FUNC_16("extra\n"); break;}
        VAR_17 = FUNC_18(VAR_9 + FUNC_0(VAR_9, 0), VAR_4->topic_end);
        if (VAR_11 != VAR_12) {VAR_15 = 0; VAR_12 = VAR_11;}

        switch (VAR_9[0x14])
 {
 case 128:
            if (VAR_4->version <= 16)
                VAR_16 = VAR_10 + VAR_11 * 12;
            else
                VAR_16 = VAR_11 * 0x8000 + VAR_15;
            if (!FUNC_1(VAR_4, VAR_9, VAR_17, VAR_10, VAR_16)) return VAR_0;
            break;

 case 130:
 case 131:
 case 129:
            if (!FUNC_8(VAR_4, VAR_9, VAR_17, &VAR_14)) return VAR_0;
            VAR_15 += VAR_14;
            break;

 default:
            FUNC_14("buf[0x14] = %x\n", VAR_9[0x14]);
 }

        if (VAR_4->version <= 16)
        {
            VAR_10 += FUNC_0(VAR_9, 0xc);
            if (FUNC_0(VAR_9, 0xc) == 0)
                break;
        }
        else
            VAR_10 = FUNC_0(VAR_9, 0xc);
    } while (VAR_10 != 0xffffffff);

    FUNC_3(VAR_4);
    FUNC_4(VAR_4);
    if (VAR_4->version <= 16) return VAR_3;
    return FUNC_2(VAR_4);
}
