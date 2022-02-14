
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int opj_sparse_array_int32_t ;
typedef int buffer ;
typedef int OPJ_UINT32 ;
typedef int OPJ_INT32 ;
typedef int OPJ_BOOL ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int,int) ;
 int * FUNC_2 (int,int,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int,int,int,int*,int,int,int ) ;
 int FUNC_5 (int *,int,int,int,int,int*,int,int,int ) ;

int FUNC_6()
{
    OPJ_UINT32 VAR_1, VAR_2, VAR_3, VAR_4;
    OPJ_INT32 VAR_5[ 99 * 101 ];
    OPJ_BOOL VAR_6;
    opj_sparse_array_int32_t* VAR_7;

    VAR_7 = FUNC_2(0, 1, 1, 1);
    FUNC_0(VAR_7 == ((void*)0));
    FUNC_3(VAR_7);

    VAR_7 = FUNC_2(1, 0, 1, 1);
    FUNC_0(VAR_7 == ((void*)0));

    VAR_7 = FUNC_2(1, 1, 0, 1);
    FUNC_0(VAR_7 == ((void*)0));

    VAR_7 = FUNC_2(1, 1, 1, 0);
    FUNC_0(VAR_7 == ((void*)0));

    VAR_7 = FUNC_2(99, 101, ~0U, ~0U);
    FUNC_0(VAR_7 == ((void*)0));

    VAR_7 = FUNC_2(99, 101, 15, 17);
    FUNC_3(VAR_7);

    VAR_7 = FUNC_2(99, 101, 15, 17);
    VAR_6 = FUNC_4(VAR_7, 0, 0, 0, 1, VAR_5, 1, 1, VAR_0);
    FUNC_0(!VAR_6);
    VAR_6 = FUNC_4(VAR_7, 0, 0, 1, 0, VAR_5, 1, 1, VAR_0);
    FUNC_0(!VAR_6);
    VAR_6 = FUNC_4(VAR_7, 0, 0, 100, 1, VAR_5, 1, 1, VAR_0);
    FUNC_0(!VAR_6);
    VAR_6 = FUNC_4(VAR_7, 0, 0, 1, 102, VAR_5, 1, 1, VAR_0);
    FUNC_0(!VAR_6);
    VAR_6 = FUNC_4(VAR_7, 1, 0, 0, 1, VAR_5, 1, 1, VAR_0);
    FUNC_0(!VAR_6);
    VAR_6 = FUNC_4(VAR_7, 0, 1, 1, 0, VAR_5, 1, 1, VAR_0);
    FUNC_0(!VAR_6);
    VAR_6 = FUNC_4(VAR_7, 99, 101, 99, 101, VAR_5, 1, 1,
                                      VAR_0);
    FUNC_0(!VAR_6);

    VAR_5[0] = 1;
    VAR_6 = FUNC_4(VAR_7, 0, 0, 1, 1, VAR_5, 1, 1, VAR_0);
    FUNC_0(VAR_6);
    FUNC_0(VAR_5[0] == 0);

    FUNC_1(VAR_5, 0xFF, sizeof(VAR_5));
    VAR_6 = FUNC_4(VAR_7, 0, 0, 99, 101, VAR_5, 1, 99, VAR_0);
    FUNC_0(VAR_6);
    for (VAR_1 = 0; VAR_1 < 99 * 101; VAR_1++) {
        FUNC_0(VAR_5[VAR_1] == 0);
    }

    VAR_5[0] = 1;
    VAR_6 = FUNC_5(VAR_7, 4, 5, 4 + 1, 5 + 1, VAR_5, 1, 1,
                                       VAR_0);
    FUNC_0(VAR_6);

    VAR_5[0] = 2;
    VAR_6 = FUNC_5(VAR_7, 4, 5, 4 + 1, 5 + 1, VAR_5, 1, 1,
                                       VAR_0);
    FUNC_0(VAR_6);

    VAR_5[0] = 0;
    VAR_5[1] = 0xFF;
    VAR_6 = FUNC_4(VAR_7, 4, 5, 4 + 1, 5 + 1, VAR_5, 1, 1,
                                      VAR_0);
    FUNC_0(VAR_6);
    FUNC_0(VAR_5[0] == 2);
    FUNC_0(VAR_5[1] == 0xFF);

    VAR_5[0] = 0xFF;
    VAR_5[1] = 0xFF;
    VAR_5[2] = 0xFF;
    VAR_6 = FUNC_4(VAR_7, 4, 5, 4 + 1, 5 + 2, VAR_5, 0, 1,
                                      VAR_0);
    FUNC_0(VAR_6);
    FUNC_0(VAR_5[0] == 2);
    FUNC_0(VAR_5[1] == 0);
    FUNC_0(VAR_5[2] == 0xFF);

    VAR_5[0] = 3;
    VAR_6 = FUNC_5(VAR_7, 4, 5, 4 + 1, 5 + 1, VAR_5, 0, 1,
                                       VAR_0);
    FUNC_0(VAR_6);

    VAR_5[0] = 0;
    VAR_5[1] = 0xFF;
    VAR_6 = FUNC_4(VAR_7, 4, 5, 4 + 1, 5 + 1, VAR_5, 1, 1,
                                      VAR_0);
    FUNC_0(VAR_6);
    FUNC_0(VAR_5[0] == 3);
    FUNC_0(VAR_5[1] == 0xFF);

    VAR_3 = 15 + 1;
    VAR_4 = 17 + 1;
    FUNC_1(VAR_5, 0xFF, sizeof(VAR_5));
    VAR_6 = FUNC_4(VAR_7, 2, 1, 2 + VAR_3, 1 + VAR_4, VAR_5, 1, VAR_3,
                                      VAR_0);
    FUNC_0(VAR_6);
    for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++) {
        for (VAR_1 = 0; VAR_1 < VAR_3; VAR_1++) {
            if (VAR_1 == 4 - 2 && VAR_2 == 5 - 1) {
                FUNC_0(VAR_5[ VAR_2 * VAR_3 + VAR_1 ] == 3);
            } else {
                FUNC_0(VAR_5[ VAR_2 * VAR_3 + VAR_1 ] == 0);
            }
        }
    }

    FUNC_3(VAR_7);


    VAR_7 = FUNC_2(99, 101, 15, 17);
    FUNC_1(VAR_5, 0xFF, sizeof(VAR_5));
    VAR_6 = FUNC_4(VAR_7, 0, 0, 2, 1, VAR_5, 2, 4, VAR_0);
    FUNC_0(VAR_6);
    FUNC_0(VAR_5[0] == 0);
    FUNC_0(VAR_5[1] == -1);
    FUNC_0(VAR_5[2] == 0);

    VAR_5[0] = 1;
    VAR_5[2] = 3;
    VAR_6 = FUNC_5(VAR_7, 0, 0, 2, 1, VAR_5, 2, 4, VAR_0);
    FUNC_0(VAR_6);

    FUNC_1(VAR_5, 0xFF, sizeof(VAR_5));
    VAR_6 = FUNC_4(VAR_7, 0, 0, 2, 1, VAR_5, 2, 4, VAR_0);
    FUNC_0(VAR_6);
    FUNC_0(VAR_5[0] == 1);
    FUNC_0(VAR_5[1] == -1);
    FUNC_0(VAR_5[2] == 3);

    FUNC_3(VAR_7);

    return 0;
}
