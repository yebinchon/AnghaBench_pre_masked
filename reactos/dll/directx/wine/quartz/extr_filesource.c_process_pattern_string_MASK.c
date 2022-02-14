
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef char* LPCWSTR ;
typedef int IAsyncReader ;
typedef scalar_t__ HRESULT ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int*) ;
 scalar_t__ FUNC_3 (int *,int,int,int*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char) ;
 int FUNC_8 (int*,int,int) ;
 char* FUNC_9 (char*,char) ;
 int FUNC_10 (char*,int *,int) ;

__attribute__((used)) static HRESULT FUNC_11(LPCWSTR VAR_4, IAsyncReader * VAR_5)
{
    ULONG VAR_6;
    ULONG VAR_7;
    BYTE * VAR_8;
    BYTE * VAR_9;
    BYTE * VAR_10;
    HRESULT VAR_11 = VAR_3;
    ULONG VAR_12;

    FUNC_4("\t\tPattern string: %s\n", FUNC_6(VAR_4));



    VAR_6 = FUNC_10(VAR_4, ((void*)0), 10);

    if (!(VAR_4 = FUNC_9(VAR_4, ',')))
        return VAR_0;

    VAR_4++;

    VAR_7 = FUNC_10(VAR_4, ((void*)0), 10);

    VAR_8 = FUNC_1(FUNC_0(), 0, VAR_7);
    VAR_9 = FUNC_1(FUNC_0(), VAR_1, VAR_7);
    VAR_10 = FUNC_1(FUNC_0(), 0, VAR_7);


    FUNC_8(VAR_8, 0xFF, VAR_7);

    if (!(VAR_4 = FUNC_9(VAR_4, ',')))
        VAR_11 = VAR_0;

    if (VAR_11 == VAR_3)
    {
        VAR_4++;
        while (!FUNC_7(*VAR_4) && (*VAR_4 != ',')) VAR_4++;

        for (VAR_12 = 0; FUNC_7(*VAR_4) && (VAR_12/2 < VAR_7); VAR_4++, VAR_12++)
        {
            if ((VAR_12 % 2) == 1)
                VAR_8[VAR_12 / 2] |= FUNC_5(*VAR_4);
            else
                VAR_8[VAR_12 / 2] = FUNC_5(*VAR_4) << 4;
        }

        if (!(VAR_4 = FUNC_9(VAR_4, ',')))
            VAR_11 = VAR_0;
        else
            VAR_4++;
    }

    if (VAR_11 == VAR_3)
    {
        for ( ; !FUNC_7(*VAR_4) && (*VAR_4 != ','); VAR_4++)
            ;

        for (VAR_12 = 0; FUNC_7(*VAR_4) && (VAR_12/2 < VAR_7); VAR_4++, VAR_12++)
        {
            if ((VAR_12 % 2) == 1)
                VAR_9[VAR_12 / 2] |= FUNC_5(*VAR_4);
            else
                VAR_9[VAR_12 / 2] = FUNC_5(*VAR_4) << 4;
        }
    }

    if (VAR_11 == VAR_3)
        VAR_11 = FUNC_3(VAR_5, VAR_6, VAR_7, VAR_10);

    if (VAR_11 == VAR_3)
    {
        ULONG VAR_13;
        for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++)
            if ((VAR_10[VAR_13] & VAR_8[VAR_13]) != VAR_9[VAR_13])
            {
                VAR_11 = VAR_2;
                break;
            }
    }

    FUNC_2(FUNC_0(), 0, VAR_8);
    FUNC_2(FUNC_0(), 0, VAR_9);
    FUNC_2(FUNC_0(), 0, VAR_10);



    if ((VAR_11 == VAR_3) && (VAR_4 = FUNC_9(VAR_4, ',')))
        return FUNC_11(VAR_4 + 1, VAR_5);
    else
        return VAR_11;
}
