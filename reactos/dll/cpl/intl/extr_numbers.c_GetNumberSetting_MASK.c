
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {void* nNumMeasure; void* nNumLeadingZero; void* nNumNegFormat; void* nNumDigits; void* nNumGrouping; int szNumListSep; int szNumNegativeSign; int szNumThousandSep; int szNumDecimalSep; } ;
typedef TYPE_1__* PGLOBALDATA ;
typedef void* INT ;
typedef int HWND ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,void**) ;
 int FUNC_1 (int ,int ,int*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int ,int*) ;

__attribute__((used)) static
BOOL
FUNC_3(
    HWND VAR_15,
    PGLOBALDATA VAR_16)
{
    WCHAR VAR_17[VAR_10];
    WCHAR VAR_18[VAR_13];
    WCHAR VAR_19[VAR_12];
    WCHAR VAR_20[VAR_11];
    INT VAR_21;
    INT VAR_22;
    INT VAR_23;
    INT VAR_24;
    INT VAR_25;


    FUNC_1(VAR_15,
                            VAR_1,
                            VAR_17,
                            VAR_10);

    if (VAR_17[0] == L'\0')
    {


        return VAR_0;
    }


    FUNC_0(VAR_15,
                             VAR_7,
                             &VAR_21);


    FUNC_1(VAR_15,
                            VAR_3,
                            VAR_18,
                            VAR_13);

    if (VAR_18[0] == L'\0')
    {


        return VAR_0;
    }


    FUNC_0(VAR_15,
                             VAR_2,
                             &VAR_22);


    FUNC_1(VAR_15,
                            VAR_9,
                            VAR_19,
                            VAR_12);

    if (VAR_19[0] == L'\0')
    {


        return VAR_0;
    }


    FUNC_0(VAR_15,
                             VAR_8,
                             &VAR_23);


    FUNC_0(VAR_15,
                             VAR_4,
                             &VAR_24);


    FUNC_1(VAR_15,
                            VAR_5,
                            VAR_20,
                            VAR_11);

    if (VAR_20[0] == L'\0')
    {


        return VAR_0;
    }


    FUNC_0(VAR_15,
                             VAR_6,
                             &VAR_25);


    FUNC_2(VAR_16->szNumDecimalSep, VAR_17);
    FUNC_2(VAR_16->szNumThousandSep, VAR_18);
    FUNC_2(VAR_16->szNumNegativeSign, VAR_19);
    FUNC_2(VAR_16->szNumListSep, VAR_20);
    VAR_16->nNumGrouping = VAR_22;
    VAR_16->nNumDigits = VAR_21;
    VAR_16->nNumNegFormat = VAR_23;
    VAR_16->nNumLeadingZero = VAR_24;
    VAR_16->nNumMeasure = VAR_25;

    return VAR_14;
}
