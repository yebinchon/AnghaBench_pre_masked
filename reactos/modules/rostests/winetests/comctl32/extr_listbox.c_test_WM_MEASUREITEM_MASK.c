
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LRESULT ;
typedef int LPARAM ;
typedef int HWND ;
typedef int HMENU ;


 int FUNC_0 (int ,int ,int *,int,int,int,int,int,int ,int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 () ;
 int VAR_14 ;
 int FUNC_5 (int ,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_6 (int,char*,scalar_t__,...) ;
 int FUNC_7 (int ,int ,int ,char*,int ) ;
 int VAR_17 ;
 scalar_t__* VAR_18 ;

__attribute__((used)) static void FUNC_8(void)
{
    HWND VAR_19, VAR_20;
    LRESULT VAR_21, VAR_22;

    VAR_19 = FUNC_4();
    VAR_20 = FUNC_3(VAR_11 | VAR_4, VAR_19);

    VAR_21 = FUNC_2(VAR_20, VAR_7, 0, 0);
    FUNC_6(VAR_21 == (LRESULT)VAR_18[0], "data = %08lx, expected %p\n", VAR_21, VAR_18[0]);
    FUNC_1(VAR_19);

    VAR_19 = FUNC_4();
    VAR_20 = FUNC_3(VAR_11 | VAR_4 | VAR_2, VAR_19);

    VAR_21 = FUNC_2(VAR_20, VAR_7, 0, 0);
    FUNC_6(!VAR_21, "data = %08lx\n", VAR_21);


    VAR_19 = FUNC_4();
    VAR_20 = FUNC_0(VAR_12, VAR_10, ((void*)0),
                              VAR_11 | VAR_3 | VAR_4 | VAR_2 | VAR_13,
                              10, 10, 80, 80, VAR_19, (HMENU)VAR_1, 0, ((void*)0));

    FUNC_5(VAR_17, VAR_8);

    VAR_22 = FUNC_2(VAR_20, VAR_6, 0, (LPARAM)"item 0");
    FUNC_6(VAR_22 == 0, "expected 0, got %ld\n", VAR_22);
    VAR_22 = FUNC_2(VAR_20, VAR_6, 0, (LPARAM)"item 1");
    FUNC_6(VAR_22 == 1, "expected 1, got %ld\n", VAR_22);
    VAR_22 = FUNC_2(VAR_20, VAR_6, 0, (LPARAM)"item 2");
    FUNC_6(VAR_22 == 2, "expected 2, got %ld\n", VAR_22);

    FUNC_7(VAR_17, VAR_9, VAR_15,
        "LB_ADDSTRING (LBS_HASSTRINGS, ownerdraw)", VAR_0);
    FUNC_1(VAR_20);


    VAR_20 = FUNC_0(VAR_12, VAR_10, ((void*)0),
                              VAR_11 | VAR_3 | VAR_4 | VAR_5 | VAR_13,
                              10, 10, 80, 80, VAR_19, (HMENU)VAR_1, 0, ((void*)0));

    FUNC_5(VAR_17, VAR_8);

    VAR_22 = FUNC_2(VAR_20, VAR_6, 0, (LPARAM)"item 0");
    FUNC_6(VAR_22 == 0, "expected 0, got %ld\n", VAR_22);
    VAR_22 = FUNC_2(VAR_20, VAR_6, 0, (LPARAM)"item 1");
    FUNC_6(VAR_22 == 1, "expected 1, got %ld\n", VAR_22);
    VAR_22 = FUNC_2(VAR_20, VAR_6, 0, (LPARAM)"item 2");
    FUNC_6(VAR_22 == 2, "expected 2, got %ld\n", VAR_22);

    FUNC_7(VAR_17, VAR_9, VAR_16, "LB_ADDSTRING (LBS_SORT)", VAR_0);
    FUNC_1(VAR_20);


    VAR_20 = FUNC_0(VAR_12, VAR_10, ((void*)0),
                              VAR_11 | VAR_3 | VAR_2 | VAR_13,
                              10, 10, 80, 80, VAR_19, (HMENU)VAR_1, 0, ((void*)0));

    FUNC_5(VAR_17, VAR_8);

    VAR_22 = FUNC_2(VAR_20, VAR_6, 0, (LPARAM)"item 2");
    FUNC_6(VAR_22 == 0, "expected 0, got %ld\n", VAR_22);
    VAR_22 = FUNC_2(VAR_20, VAR_6, 0, (LPARAM)"item 0");
    FUNC_6(VAR_22 == 1, "expected 1, got %ld\n", VAR_22);
    VAR_22 = FUNC_2(VAR_20, VAR_6, 0, (LPARAM)"item 1");
    FUNC_6(VAR_22 == 2, "expected 2, got %ld\n", VAR_22);

    FUNC_7(VAR_17, VAR_9, VAR_14, "LB_ADDSTRING (LBS_HASSTRINGS)", VAR_0);
    FUNC_1(VAR_20);


    VAR_20 = FUNC_0(VAR_12, VAR_10, ((void*)0),
                              VAR_11 | VAR_3 | VAR_2 | VAR_5 | VAR_13,
                              10, 10, 80, 80, VAR_19, (HMENU)VAR_1, 0, ((void*)0));

    FUNC_5(VAR_17, VAR_8);

    VAR_22 = FUNC_2(VAR_20, VAR_6, 0, (LPARAM)"item 2");
    FUNC_6(VAR_22 == 0, "expected 0, got %ld\n", VAR_22);
    VAR_22 = FUNC_2(VAR_20, VAR_6, 0, (LPARAM)"item 0");
    FUNC_6(VAR_22 == 0, "expected 0, got %ld\n", VAR_22);
    VAR_22 = FUNC_2(VAR_20, VAR_6, 0, (LPARAM)"item 1");
    FUNC_6(VAR_22 == 1, "expected 1, got %ld\n", VAR_22);

    FUNC_7(VAR_17, VAR_9, VAR_14, "LB_ADDSTRING (LBS_HASSTRINGS, LBS_SORT)", VAR_0);
    FUNC_1(VAR_20);

    FUNC_1(VAR_19);
}
