
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONG ;
typedef int UINT ;
struct TYPE_4__ {int num_phrases; int hasPhrases40; scalar_t__* phrases_buffer; scalar_t__* phrases_offsets; } ;
typedef int INT ;
typedef TYPE_1__ HLPFILE ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,char*,int **,int **) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *,int *) ;
 void* FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,scalar_t__*) ;
 int VAR_1 ;
 int FUNC_8 (char*,int,int,int,int,int,int,int,int) ;
 int FUNC_9 (char*,int,int) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (scalar_t__*,int *,int) ;

__attribute__((used)) static BOOL FUNC_13(HLPFILE* VAR_2)
{
    UINT VAR_3;
    INT VAR_4, VAR_5;
    BYTE *VAR_6, *VAR_7;
    BYTE *VAR_8, *VAR_9;
    ULONG* VAR_10, VAR_11 = 0;
    unsigned int VAR_12;
    unsigned short VAR_13, VAR_14;

    if (!FUNC_3(VAR_2, "|PhrIndex", &VAR_6, &VAR_7) ||
        !FUNC_3(VAR_2, "|PhrImage", &VAR_8, &VAR_9)) return VAR_0;

    VAR_10 = (ULONG*)(VAR_6 + 9 + 28);
    VAR_13 = FUNC_1(VAR_6, 9 + 24) & 0x0F;
    VAR_3 = VAR_2->num_phrases = FUNC_1(VAR_6, 9 + 4);

    FUNC_8("Index: Magic=%08x #entries=%u CpsdSize=%u PhrImgSize=%u\n"
               "\tPhrImgCprsdSize=%u 0=%u bc=%x ukn=%x\n",
               FUNC_0(VAR_6, 9 + 0),
               FUNC_0(VAR_6, 9 + 4),
               FUNC_0(VAR_6, 9 + 8),
               FUNC_0(VAR_6, 9 + 12),
               FUNC_0(VAR_6, 9 + 16),
               FUNC_0(VAR_6, 9 + 20),
               FUNC_1(VAR_6, 9 + 24),
               FUNC_1(VAR_6, 9 + 26));

    VAR_4 = FUNC_0(VAR_6, 9 + 12);
    VAR_5 = FUNC_0(VAR_6, 9 + 16);

    if (VAR_4 != VAR_5 &&
        VAR_4 != FUNC_5(VAR_8 + 9, VAR_9))
    {
        FUNC_9("size mismatch %u %u\n",
                  VAR_4, FUNC_5(VAR_8 + 9, VAR_9));
        VAR_4 = FUNC_11(VAR_4, FUNC_5(VAR_8 + 9, VAR_9));
    }

    VAR_2->phrases_offsets = FUNC_6(FUNC_2(), 0, sizeof(unsigned) * (VAR_3 + 1));
    VAR_2->phrases_buffer = FUNC_6(FUNC_2(), 0, VAR_4);
    if (!VAR_2->phrases_offsets || !VAR_2->phrases_buffer)
    {
        FUNC_7(FUNC_2(), 0, VAR_2->phrases_offsets);
        FUNC_7(FUNC_2(), 0, VAR_2->phrases_buffer);
        return VAR_0;
    }



    VAR_2->phrases_offsets[0] = 0;
    VAR_10--;
    for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++)
    {
        for (VAR_14 = 1; ((VAR_11 <<= 1) ? (*VAR_10 & VAR_11) != 0: (*++VAR_10 & (VAR_11=1)) != 0); VAR_14 += 1 << VAR_13);
        if (((VAR_11 <<= 1) ? (*VAR_10 & VAR_11) != 0: (*++VAR_10 & (VAR_11=1)) != 0)) VAR_14++;
        if (VAR_13 > 1 && ((VAR_11 <<= 1) ? (*VAR_10 & VAR_11) != 0: (*++VAR_10 & (VAR_11=1)) != 0)) VAR_14 += 2;
        if (VAR_13 > 2 && ((VAR_11 <<= 1) ? (*VAR_10 & VAR_11) != 0: (*++VAR_10 & (VAR_11=1)) != 0)) VAR_14 += 4;
        if (VAR_13 > 3 && ((VAR_11 <<= 1) ? (*VAR_10 & VAR_11) != 0: (*++VAR_10 & (VAR_11=1)) != 0)) VAR_14 += 8;
        if (VAR_13 > 4 && ((VAR_11 <<= 1) ? (*VAR_10 & VAR_11) != 0: (*++VAR_10 & (VAR_11=1)) != 0)) VAR_14 += 16;
        VAR_2->phrases_offsets[VAR_12 + 1] = VAR_2->phrases_offsets[VAR_12] + VAR_14;
    }


    if (VAR_4 == VAR_5)
        FUNC_12(VAR_2->phrases_buffer, VAR_8 + 9, VAR_4);
    else
        FUNC_4(VAR_8 + 9, VAR_9, (BYTE*)VAR_2->phrases_buffer);

    VAR_2->hasPhrases40 = VAR_1;
    return VAR_1;
}
