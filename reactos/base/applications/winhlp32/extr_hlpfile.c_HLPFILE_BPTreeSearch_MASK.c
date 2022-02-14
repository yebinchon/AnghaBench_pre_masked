
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* HLPFILE_BPTreeCompare ) (void*,void const*,int,void**) ;
typedef void BYTE ;


 int FUNC_0 (void*,int) ;
 unsigned int FUNC_1 (void*,int) ;
 int FUNC_2 (char*,unsigned int) ;

__attribute__((used)) static void* FUNC_3(BYTE* VAR_0, const void* VAR_1,
                           HLPFILE_BPTreeCompare VAR_2)
{
    unsigned VAR_3;
    unsigned VAR_4;
    unsigned VAR_5;
    unsigned VAR_6;
    BYTE *VAR_7, *VAR_8, *VAR_9;
    int VAR_10, VAR_11;
    int VAR_12;

    VAR_3 = FUNC_1(VAR_0, 9);
    if (VAR_3 != 0x293B)
    {
        FUNC_2("Invalid magic in B+ tree: 0x%x\n", VAR_3);
        return ((void*)0);
    }
    VAR_4 = FUNC_1(VAR_0, 9+4);
    VAR_5 = FUNC_1(VAR_0, 9+26);
    VAR_6 = FUNC_1(VAR_0, 9+32);
    VAR_7 = VAR_0 + 9 + 38;
    while (--VAR_6 > 0)
    {
        VAR_8 = VAR_7 + VAR_5*VAR_4;
        VAR_11 = FUNC_0(VAR_8, 2);
        VAR_8 += 6;
        for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
        {
            if (VAR_2(VAR_8, VAR_1, 0, (void **)&VAR_9) > 0) break;
            VAR_8 = VAR_9;
        }
        VAR_5 = FUNC_1(VAR_8-2, 0);
    }
    VAR_8 = VAR_7 + VAR_5*VAR_4;
    VAR_11 = FUNC_0(VAR_8, 2);
    VAR_8 += 8;
    for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
    {
        VAR_12 = VAR_2(VAR_8, VAR_1, 1, (void **)&VAR_9);
        if (VAR_12 == 0) return VAR_8;
        if (VAR_12 > 0) return ((void*)0);
        VAR_8 = VAR_9;
    }
    return ((void*)0);
}
