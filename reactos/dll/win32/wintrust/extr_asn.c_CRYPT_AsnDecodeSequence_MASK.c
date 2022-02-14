
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct AsnDecodeSequenceItem {int size; int minSize; } ;
typedef int DWORD ;
typedef scalar_t__ BYTE ;
typedef int BOOL ;


 scalar_t__ const VAR_0 ;
 int FUNC_0 (int,struct AsnDecodeSequenceItem*,int,scalar_t__ const*,int,int,void*,scalar_t__*,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__ const*,int,int*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__ const) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (void*,int ,int) ;

__attribute__((used)) static BOOL FUNC_7(DWORD VAR_5,
 struct AsnDecodeSequenceItem VAR_6[], DWORD VAR_7, const BYTE *VAR_8,
 DWORD VAR_9, DWORD VAR_10, void *VAR_11, DWORD *VAR_12,
 void *VAR_13)
{
    BOOL VAR_14;

    FUNC_5("%p, %d, %p, %d, %08x, %p, %d, %p\n", VAR_6, VAR_7, VAR_8,
     VAR_9, VAR_10, VAR_11, *VAR_12, VAR_13);

    if (VAR_8[0] == VAR_0)
    {
        DWORD VAR_15;

        if ((VAR_14 = FUNC_1(VAR_8, VAR_9, &VAR_15)))
        {
            DWORD VAR_16 = FUNC_2(VAR_8[1]), VAR_17;
            const BYTE *VAR_18 = VAR_8 + 1 + VAR_16;

            VAR_9 -= 1 + VAR_16;
            if (VAR_9 < VAR_15)
            {
                FUNC_5("dataLen %d exceeds cbEncoded %d, failing\n", VAR_15,
                 VAR_9);
                FUNC_4(VAR_2);
                VAR_14 = VAR_4;
            }
            else
                VAR_14 = FUNC_0(VAR_10, VAR_6, VAR_7, VAR_18,
                 VAR_9, VAR_10, ((void*)0), ((void*)0), &VAR_17);
            if (VAR_14 && VAR_17 != VAR_15)
            {
                FUNC_5("expected %d decoded, got %d, failing\n", VAR_15,
                 VAR_17);
                FUNC_4(VAR_2);
                VAR_14 = VAR_4;
            }
            if (VAR_14)
            {
                DWORD VAR_19, VAR_20 = 0, VAR_21 = 0;

                for (VAR_19 = 0; VAR_19 < VAR_7; VAR_19++)
                {
                    VAR_20 += VAR_6[VAR_19].size;
                    VAR_21 += VAR_6[VAR_19].minSize;
                }
                if (!VAR_11)
                    *VAR_12 = VAR_20;
                else if (*VAR_12 < VAR_20)
                {
                    FUNC_4(VAR_3);
                    *VAR_12 = VAR_20;
                    VAR_14 = VAR_4;
                }
                else
                {
                    BYTE *VAR_22;

                    *VAR_12 = VAR_20;
                    if (VAR_13)
                        VAR_22 = VAR_13;
                    else
                        VAR_22 = (BYTE *)VAR_11 + VAR_21;
                    FUNC_6(VAR_11, 0, VAR_21);
                    VAR_14 = FUNC_0(VAR_10, VAR_6, VAR_7,
                     VAR_18, VAR_9, VAR_10, VAR_11, VAR_22,
                     &VAR_17);
                }
            }
        }
    }
    else
    {
        FUNC_4(VAR_1);
        VAR_14 = VAR_4;
    }
    FUNC_5("returning %d (%08x)\n", VAR_14, FUNC_3());
    return VAR_14;
}
