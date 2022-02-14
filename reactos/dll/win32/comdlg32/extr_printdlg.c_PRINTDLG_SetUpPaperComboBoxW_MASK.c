
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ WORD ;
typedef scalar_t__ WCHAR ;
struct TYPE_6__ {scalar_t__ dmPaperSize; scalar_t__ dmDefaultSource; } ;
struct TYPE_7__ {TYPE_1__ s1; } ;
struct TYPE_8__ {TYPE_2__ u1; } ;
typedef TYPE_3__* LPDEVMODEW ;
typedef scalar_t__ LPARAM ;
typedef int HWND ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
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
 scalar_t__ VAR_11 ;
 int FUNC_0 (scalar_t__ const*,scalar_t__ const*,int,scalar_t__*,TYPE_3__*) ;
 int FUNC_1 (char*) ;
 int VAR_12 ;
 int FUNC_2 () ;
 scalar_t__* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_5 (int ,int,int ,int,int ) ;
 scalar_t__ FUNC_6 (int ,int,int ,int,scalar_t__) ;
 int FUNC_7 (char*,int ,int ,int) ;
 int VAR_13 ;
 int FUNC_8 (char*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_9 (scalar_t__ const*) ;

__attribute__((used)) static BOOL FUNC_10(HWND VAR_16,
     int VAR_17,
     const WCHAR* VAR_18,
     const WCHAR* VAR_19,
     LPDEVMODEW VAR_20)
{
    int VAR_21;
    int VAR_22;
    WCHAR* VAR_23;
    WORD* VAR_24;
    DWORD VAR_25, VAR_26;
    WORD VAR_27 = 0, VAR_28 = 0;
    int VAR_29;
    int VAR_30;
    int VAR_31;

    FUNC_7(" Printer: %s, Port: %s, ComboID: %d\n",FUNC_9(VAR_18),FUNC_9(VAR_19),VAR_17);


    VAR_25 = FUNC_6(VAR_16, VAR_17, VAR_2, 0, 0);
    if(VAR_25 != VAR_1) {




        VAR_27 = FUNC_6(VAR_16, VAR_17, VAR_3,
                                      VAR_25, 0);

        if(VAR_27 >= VAR_11)
            VAR_27 = 0;

    }

    if (VAR_20)
        VAR_28 = (VAR_17 == VAR_14) ? VAR_20->u1.s1.dmPaperSize : VAR_20->u1.s1.dmDefaultSource;

    if (VAR_17 == VAR_14) {
         VAR_29 = 64;
         VAR_30 = VAR_9;
         VAR_31 = VAR_10;
    } else {
         VAR_17 = VAR_15;
         VAR_29 = 24;
         VAR_30 = VAR_7;
         VAR_31 = VAR_8;
    }

    VAR_22 = FUNC_0(VAR_18, VAR_19,
                                      VAR_30, ((void*)0), VAR_20);
    if (VAR_22 == 0)
         FUNC_8("no Name Entries found!\n");
    else if (VAR_22 < 0)
         return VAR_12;

    if(FUNC_0(VAR_18, VAR_19, VAR_31, ((void*)0), VAR_20)
       != VAR_22) {
        FUNC_1("Number of caps is different\n");
 VAR_22 = 0;
    }

    VAR_23 = FUNC_3(FUNC_2(),0, VAR_22*sizeof(WCHAR)*VAR_29);
    VAR_24 = FUNC_3(FUNC_2(),0, VAR_22*sizeof(WORD));
    FUNC_0(VAR_18, VAR_19, VAR_30, VAR_23, VAR_20);
    VAR_22 = FUNC_0(VAR_18, VAR_19,
                                      VAR_31, VAR_24, VAR_20);


    FUNC_6(VAR_16, VAR_17, VAR_4, 0, 0);


    for (VAR_21 = 0; VAR_21 < VAR_22; VAR_21++) {
        DWORD VAR_32 = FUNC_6(VAR_16, VAR_17, VAR_0, 0,
     (LPARAM)(&VAR_23[VAR_21*VAR_29]) );
 FUNC_6(VAR_16, VAR_17, VAR_6, VAR_32,
       VAR_24[VAR_21]);
    }



    VAR_25 = 0;
    VAR_26 = VAR_22;
    for (VAR_21 = 0; VAR_21 < VAR_22; VAR_21++) {
        if(FUNC_6(VAR_16, VAR_17, VAR_3, VAR_21, 0) ==
    VAR_27) {
     VAR_26 = VAR_21;
     break;
 }
        if(FUNC_5(VAR_16, VAR_17, VAR_3, VAR_21, 0) == VAR_28)
            VAR_25 = VAR_21;
    }

    if(VAR_26 < VAR_22)
    {
        if (VAR_20)
        {
            if(VAR_17 == VAR_14)
                VAR_20->u1.s1.dmPaperSize = VAR_27;
            else
                VAR_20->u1.s1.dmDefaultSource = VAR_27;
        }
        VAR_25 = VAR_26;
    }

    FUNC_6(VAR_16, VAR_17, VAR_5, VAR_25, 0);

    FUNC_4(FUNC_2(),0,VAR_24);
    FUNC_4(FUNC_2(),0,VAR_23);
    return VAR_13;
}
