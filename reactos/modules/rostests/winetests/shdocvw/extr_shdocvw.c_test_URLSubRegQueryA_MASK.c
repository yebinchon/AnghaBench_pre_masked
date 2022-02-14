
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;
typedef char CHAR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char,int) ;
 int FUNC_3 (int,char*,scalar_t__,...) ;
 scalar_t__ FUNC_4 (int ,int ,int ,char*,int,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (char*) ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_6(void)
{
    CHAR VAR_12[VAR_1];
    HRESULT VAR_13;
    DWORD VAR_14;
    DWORD VAR_15;

    if (!&FUNC_4) {
        FUNC_5("URLSubRegQueryA not found\n");
        return;
    }

    FUNC_2(VAR_12, '#', sizeof(VAR_12)-1);
    VAR_12[sizeof(VAR_12)-1] = '\0';

    VAR_13 = FUNC_4(VAR_9, VAR_7, VAR_3, VAR_12, VAR_1, -1);
    FUNC_3(VAR_13 == VAR_0 || VAR_13 == VAR_4, "got 0x%x (expected E_FAIL or S_OK)\n", VAR_13);

    FUNC_2(VAR_12, '#', sizeof(VAR_12)-1);
    VAR_12[sizeof(VAR_12)-1] = '\0';

    VAR_13 = FUNC_4(VAR_9, VAR_11, VAR_3, VAR_12, VAR_1, -1);
    VAR_15 = FUNC_1(VAR_12);

    FUNC_3(VAR_13 == VAR_4, "got 0x%x and %d (expected S_OK)\n", VAR_13, VAR_15);


    FUNC_2(VAR_12, '#', sizeof(VAR_12)-1);
    VAR_12[sizeof(VAR_12)-1] = '\0';
    VAR_13 = FUNC_4(VAR_9, VAR_11, VAR_3, VAR_12, VAR_15+1, -1);
    VAR_14 = FUNC_1(VAR_12);

    FUNC_3((VAR_13 == VAR_4) && (VAR_14 == VAR_15),
        "got 0x%x and %d (expected S_OK and %d)\n", VAR_13, VAR_14, VAR_15);


    FUNC_2(VAR_12, '#', sizeof(VAR_12)-1);
    VAR_12[sizeof(VAR_12)-1] = '\0';
    VAR_13 = FUNC_4(VAR_9, VAR_11, VAR_3, VAR_12, VAR_15, -1);
    VAR_14 = FUNC_1(VAR_12);
    FUNC_3((VAR_13 == VAR_4) && (VAR_14 == VAR_15 - 1),
        "got 0x%x and %d (expected S_OK and %d)\n", VAR_13, VAR_14, VAR_15 - 1);


    if (VAR_15 > 1) {
        FUNC_2(VAR_12, '#', sizeof(VAR_12)-1);
        VAR_12[sizeof(VAR_12)-1] = '\0';
        VAR_13 = FUNC_4(VAR_9, VAR_11, VAR_3, VAR_12, VAR_15-1, -1);
        VAR_14 = FUNC_1(VAR_12);
        FUNC_3((VAR_13 == VAR_4) && (VAR_14 == (VAR_15 - 2)),
            "got 0x%x and %d (expected S_OK and %d)\n", VAR_13, VAR_14, VAR_15 - 2);
    }


    FUNC_2(VAR_12, '#', sizeof(VAR_12)-1);
    VAR_12[sizeof(VAR_12)-1] = '\0';
    VAR_13 = FUNC_4(VAR_9, VAR_11, VAR_3, VAR_12, 1, -1);
    VAR_14 = FUNC_1(VAR_12);
    FUNC_3((VAR_13 == VAR_4) && !VAR_14,
        "got 0x%x and %d (expected S_OK and 0)\n", VAR_13, VAR_14);



    FUNC_2(VAR_12, '#', sizeof(VAR_12)-1);
    VAR_12[sizeof(VAR_12)-1] = '\0';
    VAR_13 = FUNC_4(VAR_9, VAR_11, VAR_3, VAR_12, 0, -1);
    VAR_14 = FUNC_1(VAR_12);
    FUNC_3( (VAR_13 == VAR_4) &&
        ((VAR_14 == VAR_1 - 1) || FUNC_0(VAR_14 == 0)) ,
        "got 0x%x and %d (expected S_OK and INTERNET_MAX_URL_LENGTH - 1)\n",
        VAR_13, VAR_14);


    VAR_13 = FUNC_4(VAR_9, VAR_11, VAR_3, ((void*)0), 0, -1);
    FUNC_3(VAR_13 == VAR_4, "got 0x%x (expected S_OK)\n", VAR_13);


    VAR_13 = FUNC_4(VAR_9, VAR_11, VAR_3, ((void*)0), VAR_1, -1);
    FUNC_3(VAR_13 == VAR_4, "got 0x%x (expected S_OK)\n", VAR_13);


    FUNC_2(VAR_12, '#', sizeof(VAR_12)-1);
    VAR_12[sizeof(VAR_12)-1] = '\0';
    VAR_13 = FUNC_4(VAR_9, VAR_8, VAR_3, VAR_12, VAR_1, -1);

    FUNC_3((VAR_13 == VAR_0), "got 0x%x (expected E_FAIL)\n", VAR_13);


    FUNC_2(VAR_12, '#', sizeof(VAR_12)-1);
    VAR_12[sizeof(VAR_12)-1] = '\0';
    VAR_13 = FUNC_4(VAR_9, VAR_11, VAR_2, VAR_12, VAR_1, -1);
    VAR_14 = FUNC_1(VAR_12);
    FUNC_3((VAR_13 == VAR_4) && (VAR_14 == VAR_15),
        "got 0x%x and %d (expected S_OK and %d)\n", VAR_13, VAR_14, VAR_15);


    FUNC_2(VAR_12, '#', sizeof(VAR_12)-1);
    VAR_12[sizeof(VAR_12)-1] = '\0';
    VAR_13 = FUNC_4(VAR_10, VAR_5, VAR_3, VAR_12, VAR_1, -1);
    VAR_14 = FUNC_1(VAR_12);
    FUNC_3(VAR_13 == VAR_4, "got 0x%x and %d (expected S_OK)\n", VAR_13, VAR_14);

    FUNC_2(VAR_12, '#', sizeof(VAR_12)-1);
    VAR_12[sizeof(VAR_12)-1] = '\0';
    VAR_13 = FUNC_4(VAR_10, VAR_6, VAR_3, VAR_12, VAR_1, -1);
    VAR_14 = FUNC_1(VAR_12);
    FUNC_3(VAR_13 == VAR_4, "got 0x%x and %d (expected S_OK)\n", VAR_13, VAR_14);


}
