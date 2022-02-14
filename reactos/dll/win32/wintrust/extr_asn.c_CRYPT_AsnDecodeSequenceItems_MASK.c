
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct AsnDecodeSequenceItem {int const tag; int pointerOffset; int (* decodeFunc ) (int,int *,int const*,int,int,int*,scalar_t__*) ;int offset; scalar_t__ size; scalar_t__ minSize; scalar_t__ optional; scalar_t__ hasPointer; } ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int const*,int,int*) ;
 int VAR_3 ;
 int FUNC_2 (int const) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,...) ;
 int VAR_5 ;
 int FUNC_6 (int,int *,int const*,int,int,int*,scalar_t__*) ;

__attribute__((used)) static BOOL FUNC_7(DWORD VAR_6,
 struct AsnDecodeSequenceItem VAR_7[], DWORD VAR_8, const BYTE *VAR_9,
 DWORD VAR_10, DWORD VAR_11, void *VAR_12, BYTE *VAR_13,
 DWORD *VAR_14)
{
    BOOL VAR_15;
    DWORD VAR_16, VAR_17 = 0;
    const BYTE *VAR_18 = VAR_9;

    FUNC_5("%p, %d, %p, %d, %08x, %p, %p, %p\n", VAR_7, VAR_8, VAR_9,
     VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);

    for (VAR_16 = 0, VAR_15 = VAR_5; VAR_15 && VAR_16 < VAR_8; VAR_16++)
    {
        if (VAR_10 - (VAR_18 - VAR_9) != 0)
        {
            DWORD VAR_19;

            if ((VAR_15 = FUNC_1(VAR_18, VAR_10 - (VAR_18 - VAR_9),
             &VAR_19)))
            {
                BYTE VAR_20 = FUNC_2(VAR_18[1]);

                if (VAR_18[0] == VAR_7[VAR_16].tag || !VAR_7[VAR_16].tag)
                {
                    if (VAR_13 && VAR_12 && VAR_7[VAR_16].hasPointer)
                    {
                        FUNC_5("Setting next pointer to %p\n",
                         VAR_13);
                        *(BYTE **)((BYTE *)VAR_12 +
                         VAR_7[VAR_16].pointerOffset) = VAR_13;
                    }
                    if (VAR_7[VAR_16].decodeFunc)
                    {
                        if (VAR_12)
                            FUNC_5("decoding item %d\n", VAR_16);
                        else
                            FUNC_5("sizing item %d\n", VAR_16);
                        VAR_15 = VAR_7[VAR_16].decodeFunc(VAR_6,
                         ((void*)0), VAR_18, 1 + VAR_20 + VAR_19,
                         VAR_11 & ~VAR_0,
                         VAR_12 ? (BYTE *)VAR_12 + VAR_7[VAR_16].offset
                         : ((void*)0), &VAR_7[VAR_16].size);
                        if (VAR_15)
                        {
                            if (VAR_7[VAR_16].size < VAR_7[VAR_16].minSize)
                                VAR_7[VAR_16].size = VAR_7[VAR_16].minSize;
                            else if (VAR_7[VAR_16].size > VAR_7[VAR_16].minSize)
                            {

                                VAR_7[VAR_16].size = FUNC_0(VAR_7[VAR_16].size);
                            }
                            FUNC_5("item %d size: %d\n", VAR_16, VAR_7[VAR_16].size);
                            if (VAR_13 && VAR_7[VAR_16].hasPointer &&
                             VAR_7[VAR_16].size > VAR_7[VAR_16].minSize)
                                VAR_13 += VAR_7[VAR_16].size - VAR_7[VAR_16].minSize;
                            VAR_18 += 1 + VAR_20 + VAR_19;
                            VAR_17 += 1 + VAR_20 + VAR_19;
                            FUNC_5("item %d: decoded %d bytes\n", VAR_16,
                             1 + VAR_20 + VAR_19);
                        }
                        else if (VAR_7[VAR_16].optional &&
                         FUNC_3() == VAR_1)
                        {
                            FUNC_5("skipping optional item %d\n", VAR_16);
                            VAR_7[VAR_16].size = VAR_7[VAR_16].minSize;
                            FUNC_4(VAR_4);
                            VAR_15 = VAR_5;
                        }
                        else
                            FUNC_5("item %d failed: %08x\n", VAR_16,
                             FUNC_3());
                    }
                    else
                    {
                        FUNC_5("item %d: decoded %d bytes\n", VAR_16,
                         1 + VAR_20 + VAR_19);
                        VAR_18 += 1 + VAR_20 + VAR_19;
                        VAR_17 += 1 + VAR_20 + VAR_19;
                        VAR_7[VAR_16].size = VAR_7[VAR_16].minSize;
                    }
                }
                else if (VAR_7[VAR_16].optional)
                {
                    FUNC_5("skipping optional item %d\n", VAR_16);
                    VAR_7[VAR_16].size = VAR_7[VAR_16].minSize;
                }
                else
                {
                    FUNC_5("item %d: tag %02x doesn't match expected %02x\n",
                     VAR_16, VAR_18[0], VAR_7[VAR_16].tag);
                    FUNC_4(VAR_1);
                    VAR_15 = VAR_3;
                }
            }
        }
        else if (VAR_7[VAR_16].optional)
        {
            FUNC_5("missing optional item %d, skipping\n", VAR_16);
            VAR_7[VAR_16].size = VAR_7[VAR_16].minSize;
        }
        else
        {
            FUNC_5("not enough bytes for item %d, failing\n", VAR_16);
            FUNC_4(VAR_2);
            VAR_15 = VAR_3;
        }
    }
    if (VAR_15)
        *VAR_14 = VAR_17;
    FUNC_5("returning %d\n", VAR_15);
    return VAR_15;
}
