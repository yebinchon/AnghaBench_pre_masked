
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
typedef int WCHAR ;
struct TYPE_4__ {int Length; int Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef int SIZE_T ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int*) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;
 int* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int*) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int const*,TYPE_1__*,int *,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_7 (int*,int**) ;
 int FUNC_8 (char*,int const*,int) ;
 int FUNC_9 (int*,int const*) ;
 int FUNC_10 (int*,...) ;
 int FUNC_11 (int const*) ;
 int FUNC_12 (int*,int ,int) ;

DWORD
FUNC_13(DWORD VAR_5,
                        const wchar_t *VAR_6,
                        wchar_t **VAR_7)
{
    DWORD VAR_8;
    SIZE_T VAR_9;
    UNICODE_STRING VAR_10;
    WCHAR *VAR_11;
    const WCHAR *VAR_12 = VAR_6;


    VAR_9 = FUNC_11(VAR_6);


    if (VAR_9 > 12 &&
        !FUNC_8(L"\\SystemRoot\\", VAR_6, 12))
    {

        *VAR_7 = FUNC_3(FUNC_2(),
                                 VAR_2,
                                 (VAR_9 + 1) * sizeof(WCHAR));

        if (*VAR_7 == ((void*)0))
        {
            FUNC_1("Error allocating memory for canonized service name!\n");
            return VAR_1;
        }


        if (VAR_5 == VAR_4)
            VAR_12 += 12;


        FUNC_10(*VAR_7, VAR_12);

        FUNC_1("Canonicalized name %S\n", *VAR_7);
        return VAR_3;
    }


    if (VAR_9 > 13 &&
        !FUNC_8(L"%SystemRoot%\\", VAR_6, 13))
    {

        *VAR_7 = FUNC_3(FUNC_2(),
                                 VAR_2,
                                 (VAR_9 + 1) * sizeof(WCHAR));

        if (*VAR_7 == ((void*)0))
        {
            FUNC_1("Error allocating memory for canonized service name!\n");
            return VAR_1;
        }


        if (VAR_5 == VAR_4)
            FUNC_10(*VAR_7, L"\\SystemRoot\\");

        FUNC_9(*VAR_7, VAR_6 + 13);

        FUNC_1("Canonicalized name %S\n", *VAR_7);
        return VAR_3;
    }


    if (VAR_6[0] != L'\\' && VAR_6[1] != L':')
    {
        *VAR_7 = FUNC_3(FUNC_2(),
                                 VAR_2,
                                 (VAR_9 + 1) * sizeof(WCHAR));

        if (*VAR_7 == ((void*)0))
        {
            FUNC_1("Error allocating memory for canonized service name!\n");
            return VAR_1;
        }


        FUNC_10(*VAR_7, VAR_6);

        return VAR_3;
    }


    if (!FUNC_5(VAR_6, &VAR_10, ((void*)0), ((void*)0)))
    {
        FUNC_1("RtlDosPathNameToNtPathName_U() failed!\n");
        return VAR_0;
    }

    *VAR_7 = FUNC_3(FUNC_2(),
                             VAR_2,
                             VAR_10.Length + sizeof(WCHAR));

    if (*VAR_7 == ((void*)0))
    {
        FUNC_1("Error allocating memory for canonized service name!\n");
        FUNC_6(&VAR_10);
        return VAR_1;
    }


    FUNC_12(*VAR_7, VAR_10.Buffer, VAR_10.Length / sizeof(WCHAR));


    FUNC_6(&VAR_10);

    if (VAR_5 != VAR_4)
    {
        FUNC_1("Canonicalized name %S\n", *VAR_7);
        return VAR_3;
    }


    VAR_8 = FUNC_7(*VAR_7, &VAR_11);
    if (VAR_8)
    {

        FUNC_4(FUNC_2(), 0, *VAR_7);
        FUNC_1("Error converting named!\n");
        return VAR_8;
    }

    FUNC_0(VAR_11);


    FUNC_10(*VAR_7, VAR_11 + 12);


    FUNC_4(FUNC_2(), 0, VAR_11);

    FUNC_1("Canonicalized name %S\n", *VAR_7);


    return VAR_3;
}
