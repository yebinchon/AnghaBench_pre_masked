
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int topic_maplen; unsigned int tbsize; int dsize; int ** topic_map; int * topic_end; scalar_t__ compressed; } ;
typedef TYPE_1__ HLPFILE ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,char*,int **,int **) ;
 int * FUNC_2 (int *,int ,int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 void* FUNC_4 (int ,int ,int) ;
 int VAR_1 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,int *,unsigned int) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static BOOL FUNC_8(HLPFILE* VAR_2)
{
    BYTE *VAR_3, *VAR_4, *VAR_5, *VAR_6;
    unsigned int VAR_7, VAR_8 = 0;
    unsigned int VAR_9;

    if (!FUNC_1(VAR_2, "|TOPIC", &VAR_3, &VAR_5))
    {FUNC_5("topic0\n"); return VAR_0;}

    VAR_3 += 9;
    VAR_9 = VAR_5 - VAR_3;
    if (VAR_2->compressed)
    {
        VAR_2->topic_maplen = (VAR_9 - 1) / VAR_2->tbsize + 1;

        for (VAR_7 = 0; VAR_7 < VAR_2->topic_maplen; VAR_7++)
        {
            VAR_4 = VAR_3 + VAR_7 * VAR_2->tbsize;


            if (VAR_4 + 0x44 > VAR_5) VAR_4 = VAR_5 - 0x44;

            VAR_8 += FUNC_3(VAR_4 + 0xc, FUNC_7(VAR_5, VAR_4 + VAR_2->tbsize));
        }

        VAR_2->topic_map = FUNC_4(FUNC_0(), 0,
                                       VAR_2->topic_maplen * sizeof(VAR_2->topic_map[0]) + VAR_8);
        if (!VAR_2->topic_map) return VAR_0;
        VAR_6 = (BYTE*)(VAR_2->topic_map + VAR_2->topic_maplen);
        VAR_2->topic_end = VAR_6 + VAR_8;

        for (VAR_7 = 0; VAR_7 < VAR_2->topic_maplen; VAR_7++)
        {
            VAR_4 = VAR_3 + VAR_7 * VAR_2->tbsize;
            if (VAR_4 + 0x44 > VAR_5) VAR_4 = VAR_5 - 0x44;

            VAR_2->topic_map[VAR_7] = VAR_6;
            VAR_6 = FUNC_2(VAR_4 + 0xc, FUNC_7(VAR_5, VAR_4 + VAR_2->tbsize), VAR_6);
        }
    }
    else
    {



        VAR_2->topic_maplen = (VAR_9 - 1) / VAR_2->tbsize + 1;
        VAR_2->topic_map = FUNC_4(FUNC_0(), 0,
                                       VAR_2->topic_maplen * (sizeof(VAR_2->topic_map[0]) + VAR_2->dsize));
        if (!VAR_2->topic_map) return VAR_0;
        VAR_6 = (BYTE*)(VAR_2->topic_map + VAR_2->topic_maplen);
        VAR_2->topic_end = VAR_6 + VAR_9;

        for (VAR_7 = 0; VAR_7 < VAR_2->topic_maplen; VAR_7++)
        {
            VAR_2->topic_map[VAR_7] = VAR_6 + VAR_7 * VAR_2->dsize;
            FUNC_6(VAR_2->topic_map[VAR_7], VAR_3 + VAR_7 * VAR_2->tbsize + 0x0C, VAR_2->dsize);
        }
    }
    return VAR_1;
}
