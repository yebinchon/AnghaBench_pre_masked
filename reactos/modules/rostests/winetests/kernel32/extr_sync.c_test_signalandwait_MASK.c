
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HANDLE ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int,int,int *) ;
 int * FUNC_2 (char*,int,int ,int *,int ,int,int *) ;
 int * FUNC_3 (int *,int,int,int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int *,int,int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int *,int ,scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_8 (int *,int ) ;
 int FUNC_9 (int,char*) ;

__attribute__((used)) static void FUNC_10(void)
{
    DWORD VAR_11;
    HANDLE VAR_12[2], VAR_13[2], VAR_14;
    int VAR_15;


    VAR_11 = FUNC_7(((void*)0), ((void*)0), 0, 0);
    FUNC_9( VAR_11 == VAR_8, "should fail\n");

    VAR_12[0] = FUNC_1(((void*)0), 0, 0, ((void*)0));
    VAR_12[1] = FUNC_1(((void*)0), 1, 1, ((void*)0));

    FUNC_9( VAR_12[0] && VAR_12[1], "failed to create event flags\n");

    VAR_11 = FUNC_7(VAR_12[0], ((void*)0), 0, VAR_2);
    FUNC_9( VAR_11 == VAR_8, "should fail\n");

    VAR_11 = FUNC_7(((void*)0), VAR_12[0], 0, VAR_2);
    FUNC_9( VAR_11 == VAR_8, "should fail\n");



    VAR_11 = FUNC_7(VAR_12[0], VAR_12[1], 0, VAR_2);
    FUNC_9( VAR_11 == VAR_9, "should succeed\n");



    for (VAR_15 = 0; VAR_15 < 10000; VAR_15++)
    {
        VAR_11 = FUNC_7(VAR_12[0], VAR_12[0], 0, VAR_2);
        FUNC_9(VAR_11 == VAR_9, "should succeed\n");
    }


    VAR_11 = FUNC_8(VAR_12[0], 0);
    FUNC_9( VAR_11 == VAR_10, "event was signalled\n");

    VAR_11 = FUNC_7(VAR_12[0], VAR_12[0], 0, VAR_2);
    FUNC_9( VAR_11 == VAR_9, "should succeed\n");


    FUNC_9(FUNC_6(VAR_12[1]), "failed to clear event[1]\n");
    VAR_11 = FUNC_7(VAR_12[0], VAR_12[1], 0, VAR_2);
    FUNC_9( VAR_11 == VAR_10, "should timeout\n");

    FUNC_0(VAR_12[0]);
    FUNC_0(VAR_12[1]);


    VAR_13[0] = FUNC_3( ((void*)0), 0, 1, ((void*)0) );
    VAR_13[1] = FUNC_3( ((void*)0), 1, 1, ((void*)0) );
    FUNC_9( VAR_13[0] && VAR_13[1], "failed to create semaphore\n");

    VAR_11 = FUNC_7(VAR_13[0], VAR_13[1], 0, VAR_2);
    FUNC_9( VAR_11 == VAR_9, "should succeed\n");

    VAR_11 = FUNC_7(VAR_13[0], VAR_13[1], 0, VAR_2);
    FUNC_9( VAR_11 == VAR_8, "should fail\n");

    VAR_11 = FUNC_5(VAR_13[0],1,((void*)0));
    FUNC_9( VAR_11 == VAR_2, "should fail\n");

    VAR_11 = FUNC_5(VAR_13[1],1,((void*)0));
    FUNC_9( VAR_11 == VAR_7, "should succeed\n");

    FUNC_0(VAR_13[0]);
    FUNC_0(VAR_13[1]);


    VAR_14 = FUNC_2("x", VAR_5|VAR_6, 0, ((void*)0), VAR_0,
        VAR_3 | VAR_4, ((void*)0));
    VAR_11 = FUNC_7(VAR_14, VAR_14, 0, VAR_2);
    FUNC_9( VAR_11 == VAR_8, "should fail\n");
    FUNC_9( VAR_1 == FUNC_4(), "should return invalid handle error\n");
    FUNC_0(VAR_14);
}
