
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int block ;
typedef int ENGINE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 () ;
 int VAR_0 ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (char*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ) ;
 int FUNC_16 () ;
 int FUNC_17 (int **,int ,int) ;
 int FUNC_18 (char*,char*,int) ;
 int FUNC_19 (char*,int,int ,int ) ;

__attribute__((used)) static int FUNC_20(void)
{
    ENGINE *VAR_1[VAR_0];
    char *VAR_2[VAR_0];
    char *VAR_3[VAR_0];
    char VAR_4[256];
    ENGINE *VAR_5;
    int VAR_6;
    int VAR_7 = 0;
    ENGINE *VAR_8 = ((void*)0);
    ENGINE *VAR_9 = ((void*)0);
    ENGINE *VAR_10 = ((void*)0);
    ENGINE *VAR_11 = ((void*)0);

    FUNC_17(VAR_1, 0, sizeof(VAR_1));
    if (!FUNC_14(VAR_8 = FUNC_5())
            || !FUNC_15(FUNC_7(VAR_8, "test_id0"))
            || !FUNC_15(FUNC_8(VAR_8, "First test item"))
            || !FUNC_14(VAR_9 = FUNC_5())
            || !FUNC_15(FUNC_7(VAR_9, "test_id1"))
            || !FUNC_15(FUNC_8(VAR_9, "Second test item"))
            || !FUNC_14(VAR_10 = FUNC_5())
            || !FUNC_15(FUNC_7(VAR_10, "test_id2"))
            || !FUNC_15(FUNC_8(VAR_10, "Third test item"))
            || !FUNC_14(VAR_11 = FUNC_5())
            || !FUNC_15(FUNC_7(VAR_11, "test_id3"))
            || !FUNC_15(FUNC_8(VAR_11, "Fourth test item")))
        goto end;
    FUNC_13("Engines:");
    FUNC_16();

    if (!FUNC_15(FUNC_0(VAR_8)))
        goto end;
    FUNC_13("Engines:");
    FUNC_16();

    VAR_5 = FUNC_2();
    if (!FUNC_15(FUNC_6(VAR_5)))
        goto end;
    FUNC_1(VAR_5);
    FUNC_13("Engines:");
    FUNC_16();

    if (!FUNC_15(FUNC_0(VAR_10))
            || !FUNC_15(FUNC_0(VAR_9)))
        goto end;
    FUNC_13("Engines:");
    FUNC_16();

    if (!FUNC_15(FUNC_6(VAR_9)))
        goto end;
    FUNC_13("Engines:");
    FUNC_16();

    if (!FUNC_15(FUNC_0(VAR_11)))
        goto end;
    FUNC_13("Engines:");
    FUNC_16();


    if (!FUNC_12(FUNC_0(VAR_10)))
        goto end;
    FUNC_9();


    if (!FUNC_12(FUNC_6(VAR_9)))
        goto end;
    FUNC_9();

    if (!FUNC_15(FUNC_6(VAR_10)))
        goto end;
    FUNC_13("Engines:");
    FUNC_16();

    if (!FUNC_15(FUNC_6(VAR_11)))
        goto end;
    FUNC_13("Engines:");
    FUNC_16();
    if ((VAR_5 = FUNC_2()) != ((void*)0)) {
        if (!FUNC_6(VAR_5))
            FUNC_13("Remove failed - probably no hardware support present");
    }
    FUNC_1(VAR_5);
    FUNC_13("Engines:");
    FUNC_16();

    if (!FUNC_15(FUNC_0(VAR_8))
            || !FUNC_15(FUNC_6(VAR_8)))
        goto end;

    FUNC_13("About to beef up the engine-type list");
    for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
        FUNC_18(VAR_4, "id%d", VAR_6);
        VAR_2[VAR_6] = FUNC_11(VAR_4);
        FUNC_18(VAR_4, "Fake engine type %d", VAR_6);
        VAR_3[VAR_6] = FUNC_11(VAR_4);
        if (!FUNC_14(VAR_1[VAR_6] = FUNC_5())
                || !FUNC_15(FUNC_7(VAR_1[VAR_6], VAR_2[VAR_6]))
                || !FUNC_15(FUNC_8(VAR_1[VAR_6], VAR_3[VAR_6])))
            goto end;
    }
    for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
        if (!FUNC_15(FUNC_0(VAR_1[VAR_6]))) {
            FUNC_19("Adding stopped at %d, (%s,%s)",
                      VAR_6, FUNC_3(VAR_1[VAR_6]),
                      FUNC_4(VAR_1[VAR_6]));
            goto cleanup_loop;
        }
    }
 cleanup_loop:
    FUNC_13("About to empty the engine-type list");
    while ((VAR_5 = FUNC_2()) != ((void*)0)) {
        if (!FUNC_15(FUNC_6(VAR_5)))
            goto end;
        FUNC_1(VAR_5);
    }
    for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
        FUNC_10(VAR_2[VAR_6]);
        FUNC_10(VAR_3[VAR_6]);
    }
    VAR_7 = 1;

 end:
    FUNC_1(VAR_8);
    FUNC_1(VAR_9);
    FUNC_1(VAR_10);
    FUNC_1(VAR_11);
    for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
        FUNC_1(VAR_1[VAR_6]);
    return VAR_7;
}
