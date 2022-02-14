
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
typedef int UNICODE_STRING ;
struct TYPE_8__ {int LargePageMinimum; } ;
struct TYPE_6__ {int QuadPart; } ;
struct TYPE_7__ {TYPE_1__ EndOfFile; } ;
typedef int OBJECT_ATTRIBUTES ;
typedef int NTSTATUS ;
typedef TYPE_1__ LARGE_INTEGER ;
typedef int IO_STATUS_BLOCK ;
typedef int * HANDLE ;
typedef TYPE_2__ FILE_STANDARD_INFORMATION ;


 int FUNC_0 (int *,int,int *,TYPE_1__,int,int,int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int,int *,int *) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 TYPE_4__* VAR_27 ;
 int VAR_28 ;
 int FUNC_4 (int *,int *,TYPE_2__*,int,int ) ;
 int VAR_29 ;
 int FUNC_5 (int,char*) ;

__attribute__((used)) static
VOID
FUNC_6(HANDLE VAR_30, HANDLE VAR_31, HANDLE VAR_32)
{
    NTSTATUS VAR_33;
    HANDLE VAR_34 = ((void*)0);
    OBJECT_ATTRIBUTES VAR_35;
    OBJECT_ATTRIBUTES VAR_36;
    OBJECT_ATTRIBUTES VAR_37;
    IO_STATUS_BLOCK VAR_38;
    FILE_STANDARD_INFORMATION VAR_39;
    LARGE_INTEGER VAR_40;
    UNICODE_STRING VAR_41 = FUNC_3(L"\\BaseNamedObjects\\KmtTestReadSect");
    UNICODE_STRING VAR_42 = FUNC_3(L"\\BaseNamedObjects\\KmtTestWriteSect");
    UNICODE_STRING VAR_43 = FUNC_3(L"THIS/IS/INVALID");

    VAR_40.QuadPart = VAR_28;

    FUNC_1(&VAR_35, &VAR_41, VAR_2 | VAR_3, ((void*)0), ((void*)0));
    FUNC_1(&VAR_36, &VAR_42, VAR_2 | VAR_3, ((void*)0), ((void*)0));
    FUNC_1(&VAR_37, &VAR_43, VAR_2 | VAR_3, ((void*)0), ((void*)0));




    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_8, VAR_14, ((void*)0), VAR_26, VAR_26);
    FUNC_0(VAR_34, 0, ((void*)0), VAR_40, VAR_8, VAR_14, ((void*)0), VAR_26, VAR_26);
    FUNC_0(VAR_34, -1, ((void*)0), VAR_40, VAR_8, VAR_14, ((void*)0), VAR_26, VAR_26);


    FUNC_0(VAR_34, VAR_10, &VAR_35, VAR_40, VAR_8, VAR_14, ((void*)0), VAR_26, VAR_26);
    FUNC_0(VAR_34, VAR_10, &VAR_37, VAR_40, VAR_8, VAR_14, ((void*)0), VAR_24, VAR_26);


    VAR_40.QuadPart = -1;
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_8, VAR_14, ((void*)0), VAR_25, VAR_1);

    VAR_40.QuadPart = 0;
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_8, VAR_14, ((void*)0), VAR_22, VAR_1);


    if (!FUNC_5(VAR_27->LargePageMinimum > 0, "LargePageMinimum is 0\n"))
    {
        VAR_40.QuadPart = (VAR_29 / VAR_27->LargePageMinimum) * VAR_27->LargePageMinimum;
        FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_8, (VAR_16 | VAR_14), ((void*)0), VAR_26, VAR_26);
    }

    VAR_40.QuadPart = VAR_28;


    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_4, VAR_14, ((void*)0), VAR_26, VAR_26);
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_5, VAR_14, ((void*)0), VAR_26, VAR_26);
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_6, VAR_14, ((void*)0), VAR_26, VAR_26);
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_7, VAR_14, ((void*)0), VAR_26, VAR_26);
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, (VAR_4 | VAR_8), VAR_14, ((void*)0), VAR_21, VAR_1);
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, (VAR_7 | VAR_8), VAR_14, ((void*)0), VAR_21, VAR_1);
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, (VAR_9 | VAR_7), VAR_14, ((void*)0), VAR_21, VAR_1);
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, 0, VAR_14, ((void*)0), VAR_21, VAR_26);
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, -1, VAR_14, ((void*)0), VAR_21, VAR_26);


    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_8, 0, ((void*)0), VAR_23, VAR_1);
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_8, (VAR_14 | VAR_18), ((void*)0), VAR_23, VAR_1);
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_8, VAR_18, ((void*)0), VAR_26, VAR_26);
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_8, VAR_15, ((void*)0), VAR_19, VAR_1);
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_8, (VAR_15 | VAR_14), ((void*)0), VAR_23, VAR_1);
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_8, -1, ((void*)0), VAR_23, VAR_1);
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_8, VAR_16, ((void*)0), VAR_23, VAR_1);
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_8, (VAR_16 | VAR_14), ((void*)0), VAR_22, VAR_1);
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_8, VAR_17, ((void*)0), VAR_23, VAR_1);
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_8, (VAR_17 | VAR_18 | VAR_14), ((void*)0), VAR_23, VAR_1);
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_8, (VAR_17 | VAR_14), ((void*)0), VAR_26, VAR_26);
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_8, (VAR_17 | VAR_18), ((void*)0), VAR_26, VAR_26);





    FUNC_0(VAR_34, VAR_10, &VAR_35, VAR_40, VAR_7, VAR_14, VAR_30, VAR_26, VAR_26);
    FUNC_0(VAR_34, VAR_10, &VAR_36, VAR_40, VAR_9, VAR_14, VAR_31, VAR_26, VAR_26);
    FUNC_0(VAR_34, VAR_13, &VAR_35, VAR_40, VAR_7, VAR_14, VAR_30, VAR_26, VAR_26);
    FUNC_0(VAR_34, VAR_12, &VAR_36, VAR_40, VAR_9, VAR_14, VAR_31, VAR_26, VAR_26);


    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_7, VAR_14, VAR_30, VAR_26, VAR_26);
    FUNC_0(VAR_34, VAR_10, &VAR_37, VAR_40, VAR_7, VAR_14, VAR_30, VAR_24, VAR_1);


    VAR_40.QuadPart = VAR_28 - 100;
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_7, VAR_14, VAR_31, VAR_26, VAR_26);

    VAR_40.QuadPart = -1;
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_7, VAR_14, VAR_31, VAR_25, VAR_1);

    VAR_40.QuadPart = VAR_28 + 1;
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_7, VAR_14, VAR_31, VAR_25, VAR_1);

    VAR_40.QuadPart = 0;
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_7, VAR_14, VAR_31, VAR_26, VAR_26);


    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_4, VAR_14, VAR_31, VAR_26, VAR_26);
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_5, VAR_14, VAR_31, VAR_26, VAR_26);
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_6, VAR_14, VAR_31, VAR_26, VAR_26);
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_7, VAR_14, VAR_31, VAR_26, VAR_26);
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, (VAR_4 | VAR_8), VAR_14, VAR_31, VAR_21, VAR_1);
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, (VAR_7 | VAR_8), VAR_14, VAR_31, VAR_21, VAR_1);
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, (VAR_9 | VAR_7), VAR_14, VAR_31, VAR_21, VAR_1);
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, 0, VAR_14, VAR_31, VAR_21, VAR_26);
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, -1, VAR_14, VAR_31, VAR_21, VAR_26);


    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_8, 0, VAR_31, VAR_23, VAR_1);
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_8, (VAR_14 | VAR_18), VAR_31, VAR_23, VAR_1);
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_8, VAR_18, VAR_31, VAR_26, VAR_26);
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_8, (VAR_15 | VAR_14), VAR_31, VAR_23, VAR_1);
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_8, -1, VAR_31, VAR_23, VAR_1);
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_8, VAR_16, VAR_31, VAR_23, VAR_1);
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_8, (VAR_16 | VAR_14), VAR_31, VAR_23, VAR_1);
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_8, VAR_17, VAR_31, VAR_23, VAR_1);
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_8, (VAR_17 | VAR_18 | VAR_14), VAR_31, VAR_23, VAR_1);
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_8, (VAR_17 | VAR_14), VAR_31, VAR_26, VAR_26);
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_8, (VAR_17 | VAR_18), VAR_31, VAR_26, VAR_26);
    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_8, VAR_15, VAR_31, VAR_20, VAR_1);



    FUNC_0(VAR_34, VAR_12, &VAR_36, VAR_40, VAR_9, VAR_15, VAR_32, VAR_26, VAR_26);
    FUNC_0(VAR_34, VAR_11, &VAR_36, VAR_40, VAR_9, VAR_15, VAR_32, VAR_26, VAR_26);


    FUNC_0(VAR_34, VAR_10, &VAR_35, VAR_40, VAR_7, VAR_14, VAR_32, VAR_26, VAR_26);
    FUNC_0(VAR_34, VAR_10, &VAR_36, VAR_40, VAR_9, VAR_14, VAR_32, VAR_26, VAR_26);
    FUNC_0(VAR_34, VAR_13, &VAR_35, VAR_40, VAR_7, VAR_14, VAR_32, VAR_26, VAR_26);
    FUNC_0(VAR_34, VAR_12, &VAR_36, VAR_40, VAR_9, VAR_14, VAR_32, VAR_26, VAR_26);


    FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_7, VAR_14, VAR_32, VAR_26, VAR_26);
    FUNC_0(VAR_34, VAR_10, &VAR_37, VAR_40, VAR_7, VAR_14, VAR_32, VAR_24, VAR_1);


    VAR_33 = FUNC_4(VAR_32, &VAR_38, &VAR_39, sizeof(FILE_STANDARD_INFORMATION), VAR_0);
    if (!FUNC_5(FUNC_2(VAR_33), "Cannot query file information\n"))
    {

        VAR_40 = VAR_39.EndOfFile;
        FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_4, VAR_15, VAR_32, VAR_26, VAR_26);


        VAR_40.QuadPart = VAR_39.EndOfFile.QuadPart - 2;
        FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_4, VAR_15, VAR_32, VAR_26, VAR_26);


        VAR_40.QuadPart = VAR_39.EndOfFile.QuadPart + 2;
        FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_4, VAR_15, VAR_32, VAR_26, VAR_26);


        VAR_40.QuadPart = 0;
        FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_4, VAR_15, VAR_32, VAR_26, VAR_26);


        VAR_40.QuadPart = -1;
        FUNC_0(VAR_34, VAR_10, ((void*)0), VAR_40, VAR_4, VAR_15, VAR_32, VAR_25, VAR_1);
    }
}
