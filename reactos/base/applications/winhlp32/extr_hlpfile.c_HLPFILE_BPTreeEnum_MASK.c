
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* HLPFILE_BPTreeCallback ) (int *,void**,void*) ;
typedef int BYTE ;


 int FUNC_0 (int *,int) ;
 unsigned int FUNC_1 (int *,int) ;
 int FUNC_2 (char*,unsigned int) ;

void FUNC_3(BYTE* VAR_0, HLPFILE_BPTreeCallback VAR_1, void* VAR_2)
{
    unsigned VAR_3;
    unsigned VAR_4;
    unsigned VAR_5;
    unsigned VAR_6;
    BYTE *VAR_7, *VAR_8, *VAR_9;
    int VAR_10, VAR_11;

    VAR_3 = FUNC_1(VAR_0, 9);
    if (VAR_3 != 0x293B)
    {
        FUNC_2("Invalid magic in B+ tree: 0x%x\n", VAR_3);
        return;
    }
    VAR_4 = FUNC_1(VAR_0, 9+4);
    VAR_5 = FUNC_1(VAR_0, 9+26);
    VAR_6 = FUNC_1(VAR_0, 9+32);
    VAR_7 = VAR_0 + 9 + 38;
    while (--VAR_6 > 0)
    {
        VAR_8 = VAR_7 + VAR_5*VAR_4;
        VAR_5 = FUNC_1(VAR_8, 4);
    }
    while (VAR_5 != 0xFFFF)
    {
        VAR_8 = VAR_7 + VAR_5*VAR_4;
        VAR_11 = FUNC_0(VAR_8, 2);
        VAR_8 += 8;
        for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
        {
            VAR_1(VAR_8, (void **)&VAR_9, VAR_2);
            VAR_8 = VAR_9;
        }
        VAR_5 = FUNC_1(VAR_7+VAR_5*VAR_4, 6);
    }
}
