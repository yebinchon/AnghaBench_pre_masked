
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int IStream ;
typedef int IStorage ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,char const*,int,int ,int ,int **) ;
 scalar_t__ FUNC_2 (int *,char const*,int,int ,int ,int **) ;
 scalar_t__ FUNC_3 (int *,char const*) ;
 scalar_t__ FUNC_4 (int *,char const*,int *,int,int *,int ,int **) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_8 (char const*,int,int ,int **) ;
 scalar_t__ FUNC_9 (char const*,int *,int,int *,int ,int **) ;
 int FUNC_10 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_11(void)
{
    IStorage *VAR_9, *VAR_10, *VAR_11;
    IStream *VAR_12;
    HRESULT VAR_13;
    static const WCHAR VAR_14[] = {'w','i','n','e','t','e','s','t',0};
    static const WCHAR VAR_15[] = {'s','t','o','r','a','g','e',0};
    static const WCHAR VAR_16[] = {'s','t','r','e','a','m',0};

    VAR_13 = FUNC_8( VAR_14, VAR_0 | VAR_4 | VAR_2, 0, &VAR_9);
    FUNC_10(VAR_13 == VAR_8, "should succeed, res=%x\n", VAR_13);
    if (FUNC_7(VAR_13))
    {
        VAR_13 = FUNC_1( VAR_9, VAR_15, VAR_0 | VAR_4 | VAR_2, 0, 0, &VAR_10 );
        FUNC_10(VAR_13 == VAR_8, "should succeed, res=%x\n", VAR_13);
        if (FUNC_7(VAR_13))
        {
            VAR_13 = FUNC_2( VAR_10, VAR_16, VAR_0 | VAR_4 | VAR_2, 0, 0, &VAR_12 );
            FUNC_10(VAR_13 == VAR_8, "should succeed, res=%x\n", VAR_13);
            if (FUNC_7(VAR_13))
                FUNC_6(VAR_12);
            FUNC_5(VAR_10);
        }
        FUNC_5(VAR_9);
    }


    VAR_13 = FUNC_9( VAR_14, ((void*)0), VAR_5 | VAR_3 | VAR_1, ((void*)0), 0, &VAR_9);
    FUNC_10(VAR_13 == VAR_8, "should succeed, res=%x\n", VAR_13);
    if (FUNC_7(VAR_13))
    {
        VAR_13 = FUNC_4( VAR_9, VAR_15, ((void*)0), VAR_4 | VAR_1, ((void*)0), 0, &VAR_10 );
        FUNC_10(VAR_13 == VAR_8, "should succeed, res=%x\n", VAR_13);
        if (FUNC_7(VAR_13))
        {

            VAR_13 = FUNC_2( VAR_10, VAR_16, VAR_0 | VAR_4 | VAR_1, 0, 0, &VAR_12 );
            FUNC_10(VAR_13 == VAR_6, "should fail, res=%x\n", VAR_13);
            if (FUNC_7(VAR_13))
                FUNC_6(VAR_12);


            VAR_13 = FUNC_2( VAR_10, VAR_15, VAR_0 | VAR_4 | VAR_1, 0, 0, &VAR_12 );
            FUNC_10(VAR_13 == VAR_6, "should fail, res=%x\n", VAR_13);
            if (FUNC_7(VAR_13))
                FUNC_6(VAR_12);


            VAR_13 = FUNC_1( VAR_10, VAR_16, VAR_0 | VAR_4 | VAR_1, 0, 0, &VAR_11 );
            FUNC_10(VAR_13 == VAR_7, "should fail, res=%x\n", VAR_13);
            if (FUNC_7(VAR_13))
                FUNC_5(VAR_11);


            VAR_13 = FUNC_1( VAR_10, VAR_15, VAR_0 | VAR_4 | VAR_1, 0, 0, &VAR_11 );
            FUNC_10(VAR_13 == VAR_6, "should fail, res=%x\n", VAR_13);
            if (FUNC_7(VAR_13))
                FUNC_5(VAR_11);


            VAR_13 = FUNC_3( VAR_10, VAR_16 );
            FUNC_10(VAR_13 == VAR_6, "should fail, res=%x\n", VAR_13);


            VAR_13 = FUNC_3( VAR_10, VAR_15 );
            FUNC_10(VAR_13 == VAR_6, "should fail, res=%x\n", VAR_13);

            FUNC_5(VAR_10);
        }

        FUNC_5(VAR_9);
    }

    FUNC_0("winetest");
}
