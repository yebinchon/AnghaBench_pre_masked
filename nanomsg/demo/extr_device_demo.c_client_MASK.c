
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int,int) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int,char const*) ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int,char**,int ,int ) ;
 scalar_t__ FUNC_9 (int,char const*,int ,int ) ;
 int FUNC_10 (int ,int ) ;
 char* FUNC_11 (int ) ;
 int FUNC_12 (char*,char*) ;
 int VAR_4 ;
 char* FUNC_13 (int ) ;
 int FUNC_14 (char const*) ;
 int FUNC_15 (int) ;

int FUNC_16 (const char *VAR_5, const char *VAR_6)
{
    int VAR_7;
    int VAR_8;
    char *VAR_9;
    char *VAR_10;

    VAR_7 = FUNC_10 (VAR_0, VAR_2);
    if (VAR_7 < 0) {
        FUNC_1 (VAR_4, "nn_socket: %s\n", FUNC_11 (FUNC_6 ()));
        return (-1);
    }

    if (FUNC_5 (VAR_7, VAR_5) < 0) {
        FUNC_1 (VAR_4, "nn_socket: %s\n", FUNC_11 (FUNC_6 ()));
        FUNC_4 (VAR_7);
        return (-1);
    }

    FUNC_15(1000);

    if (FUNC_9 (VAR_7, VAR_6, FUNC_14 (VAR_6), 0) < 0) {
        FUNC_1 (VAR_4, "nn_send: %s\n", FUNC_11 (FUNC_6 ()));
        FUNC_4 (VAR_7);
        return (-1);
    }


    VAR_8 = FUNC_8 (VAR_7, &VAR_10, VAR_1, 0);
    if (VAR_8 < 0) {
        FUNC_1 (VAR_4, "nn_recv: %s\n", FUNC_11 (FUNC_6 ()));
        FUNC_4 (VAR_7);
        return (-1);
    }

    FUNC_4 (VAR_7);


    VAR_9 = FUNC_0 (VAR_8 + 1, 1);
    if (VAR_9 == ((void*)0)) {
        FUNC_1 (VAR_4, "calloc: %s\n", FUNC_13 (VAR_3));
        return (-1);
    }
    FUNC_3(VAR_9, VAR_10, VAR_8);

    FUNC_7 (VAR_10);
    FUNC_12 ("%s\n", VAR_9);
    FUNC_2 (VAR_9);
    return (0);
}
