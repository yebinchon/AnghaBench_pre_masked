
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct AsnDecodeSequenceItem {int const tag; int pointerOffset; int (* decodeFunc ) (int const*,int,int,int*,scalar_t__*,int*) ;int offset; scalar_t__ size; scalar_t__ minSize; scalar_t__ optional; scalar_t__ hasPointer; } ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int const*,int,int*) ;
 int FUNC_2 (char*) ;
 int VAR_4 ;
 int FUNC_3 (int const) ;
 int FUNC_4 () ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,...) ;
 int VAR_6 ;
 int FUNC_7 (char*,int,int) ;
 int FUNC_8 (int const*,int,int,int*,scalar_t__*,int*) ;

__attribute__((used)) static BOOL FUNC_9(struct AsnDecodeSequenceItem VAR_7[],
 DWORD VAR_8, const BYTE *VAR_9, DWORD VAR_10, DWORD VAR_11,
 void *VAR_12, BYTE *VAR_13, DWORD *VAR_14)
{
    BOOL VAR_15;
    DWORD VAR_16, VAR_17 = 0;
    const BYTE *VAR_18 = VAR_9;

    FUNC_6("%p, %d, %p, %d, %08x, %p, %p, %p\n", VAR_7, VAR_8, VAR_9,
     VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);

    for (VAR_16 = 0, VAR_15 = VAR_6; VAR_15 && VAR_16 < VAR_8; VAR_16++)
    {
        if (VAR_10 - (VAR_18 - VAR_9) != 0)
        {
            DWORD VAR_19;

            if ((VAR_15 = FUNC_1(VAR_18,
             VAR_10 - (VAR_18 - VAR_9), &VAR_19)))
            {
                BYTE VAR_20 = FUNC_3(VAR_18[1]);

                if (VAR_18[0] == VAR_7[VAR_16].tag || !VAR_7[VAR_16].tag)
                {
                    DWORD VAR_21;

                    if (VAR_19 == VAR_0)
                        VAR_21 = VAR_10 - (VAR_18 - VAR_9);
                    else
                        VAR_21 = 1 + VAR_20 + VAR_19;
                    if (VAR_13 && VAR_12 && VAR_7[VAR_16].hasPointer)
                    {
                        FUNC_6("Setting next pointer to %p\n",
                         VAR_13);
                        *(BYTE **)((BYTE *)VAR_12 +
                         VAR_7[VAR_16].pointerOffset) = VAR_13;
                    }
                    if (VAR_7[VAR_16].decodeFunc)
                    {
                        DWORD VAR_22;

                        if (VAR_12)
                            FUNC_6("decoding item %d\n", VAR_16);
                        else
                            FUNC_6("sizing item %d\n", VAR_16);
                        VAR_15 = VAR_7[VAR_16].decodeFunc(VAR_18, VAR_21,
                         VAR_11 & ~VAR_1,
                         VAR_12 ? (BYTE *)VAR_12 + VAR_7[VAR_16].offset
                         : ((void*)0), &VAR_7[VAR_16].size, &VAR_22);
                        if (VAR_15)
                        {
                            if (VAR_7[VAR_16].size < VAR_7[VAR_16].minSize)
                                VAR_7[VAR_16].size = VAR_7[VAR_16].minSize;
                            else if (VAR_7[VAR_16].size > VAR_7[VAR_16].minSize)
                            {

                                VAR_7[VAR_16].size = FUNC_0(VAR_7[VAR_16].size);
                            }
                            FUNC_6("item %d size: %d\n", VAR_16, VAR_7[VAR_16].size);
                            if (VAR_13 && VAR_7[VAR_16].hasPointer &&
                             VAR_7[VAR_16].size > VAR_7[VAR_16].minSize)
                                VAR_13 += VAR_7[VAR_16].size - VAR_7[VAR_16].minSize;
                            if (VAR_22 > VAR_21)
                            {
                                FUNC_7("decoded length %d exceeds encoded %d\n",
                                 VAR_22, VAR_21);
                                FUNC_5(VAR_3);
                                VAR_15 = VAR_4;
                            }
                            else
                            {
                                VAR_18 += VAR_22;
                                VAR_17 += VAR_22;
                                FUNC_6("item %d: decoded %d bytes\n", VAR_16,
                                 VAR_22);
                            }
                        }
                        else if (VAR_7[VAR_16].optional &&
                         FUNC_4() == VAR_2)
                        {
                            FUNC_6("skipping optional item %d\n", VAR_16);
                            VAR_7[VAR_16].size = VAR_7[VAR_16].minSize;
                            FUNC_5(VAR_5);
                            VAR_15 = VAR_6;
                        }
                        else
                            FUNC_6("item %d failed: %08x\n", VAR_16,
                             FUNC_4());
                    }
                    else if (VAR_19 == VAR_0)
                    {
                        FUNC_2("can't use indefinite length encoding without a decoder\n");
                        FUNC_5(VAR_3);
                        VAR_15 = VAR_4;
                    }
                    else
                    {
                        FUNC_6("item %d: decoded %d bytes\n", VAR_16, VAR_21);
                        VAR_18 += VAR_21;
                        VAR_17 += VAR_21;
                        VAR_7[VAR_16].size = VAR_7[VAR_16].minSize;
                    }
                }
                else if (VAR_7[VAR_16].optional)
                {
                    FUNC_6("skipping optional item %d\n", VAR_16);
                    VAR_7[VAR_16].size = VAR_7[VAR_16].minSize;
                }
                else
                {
                    FUNC_6("item %d: tag %02x doesn't match expected %02x\n",
                     VAR_16, VAR_18[0], VAR_7[VAR_16].tag);
                    FUNC_5(VAR_2);
                    VAR_15 = VAR_4;
                }
            }
        }
        else if (VAR_7[VAR_16].optional)
        {
            FUNC_6("missing optional item %d, skipping\n", VAR_16);
            VAR_7[VAR_16].size = VAR_7[VAR_16].minSize;
        }
        else
        {
            FUNC_6("not enough bytes for item %d, failing\n", VAR_16);
            FUNC_5(VAR_3);
            VAR_15 = VAR_4;
        }
    }
    if (VAR_14)
        *VAR_14 = VAR_17;
    FUNC_6("returning %d\n", VAR_15);
    return VAR_15;
}
