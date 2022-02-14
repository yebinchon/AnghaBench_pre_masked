
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int version; int num_phrases; int* phrases_offsets; int* phrases_buffer; int hasPhrases; } ;
typedef TYPE_1__ HLPFILE ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,char*,int **,int **) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *,int *) ;
 void* FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,int*) ;
 int VAR_1 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int*,int *,int) ;

__attribute__((used)) static BOOL FUNC_9(HLPFILE* VAR_2)
{
    UINT VAR_3, VAR_4, VAR_5, VAR_6;
    BYTE *VAR_7, *VAR_8;

    if (!FUNC_2(VAR_2, "|Phrases", &VAR_7, &VAR_8)) return VAR_0;

    if (VAR_2->version <= 16)
        VAR_6 = 13;
    else
        VAR_6 = 17;

    VAR_4 = VAR_2->num_phrases = FUNC_0(VAR_7, 9);
    if (VAR_7 + 2 * VAR_4 + 0x13 >= VAR_8) {FUNC_7("1a\n"); return VAR_0;};

    if (VAR_2->version <= 16)
        VAR_5 = VAR_8 - VAR_7 - 15 - 2 * VAR_4;
    else
        VAR_5 = FUNC_4(VAR_7 + 0x13 + 2 * VAR_4, VAR_8);

    VAR_2->phrases_offsets = FUNC_5(FUNC_1(), 0, sizeof(unsigned) * (VAR_4 + 1));
    VAR_2->phrases_buffer = FUNC_5(FUNC_1(), 0, VAR_5);
    if (!VAR_2->phrases_offsets || !VAR_2->phrases_buffer)
    {
        FUNC_6(FUNC_1(), 0, VAR_2->phrases_offsets);
        FUNC_6(FUNC_1(), 0, VAR_2->phrases_buffer);
        return VAR_0;
    }

    for (VAR_3 = 0; VAR_3 <= VAR_4; VAR_3++)
        VAR_2->phrases_offsets[VAR_3] = FUNC_0(VAR_7, VAR_6 + 2 * VAR_3) - 2 * VAR_4 - 2;

    if (VAR_2->version <= 16)
        FUNC_8(VAR_2->phrases_buffer, VAR_7 + 15 + 2*VAR_4, VAR_5);
    else
        FUNC_3(VAR_7 + 0x13 + 2 * VAR_4, VAR_8, (BYTE*)VAR_2->phrases_buffer);

    VAR_2->hasPhrases = VAR_1;
    return VAR_1;
}
