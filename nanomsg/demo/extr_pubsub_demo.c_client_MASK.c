
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ time_t ;
typedef int subs ;
typedef int secs ;
typedef int msg ;
typedef int hhmmss ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int,char const*) ;
 int FUNC_6 () ;
 int FUNC_7 (int,int *,int,int ) ;
 scalar_t__ FUNC_8 (int,int ,int ,char*,int ) ;
 int FUNC_9 (int ,int ) ;
 char* FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (char*,char*,unsigned int,unsigned int) ;
 int VAR_3 ;
 int FUNC_13 (char*,int,char*,int ) ;

int FUNC_14 (const char *VAR_4)
{
    int VAR_5;
    int VAR_6;

    VAR_5 = FUNC_9 (VAR_0, VAR_1);
    if (VAR_5 < 0) {
        FUNC_0 (VAR_3, "nn_socket: %s\n", FUNC_10 (FUNC_6 ()));
        return (-1);
    }

    if (FUNC_5 (VAR_5, VAR_4) < 0) {
        FUNC_0 (VAR_3, "nn_socket: %s\n", FUNC_10 (FUNC_6 ()));
        FUNC_4 (VAR_5);
        return (-1);
    }


    if (FUNC_8 (VAR_5, VAR_1, VAR_2, "", 0) < 0) {
        FUNC_0 (VAR_3, "nn_setsockopt: %s\n", FUNC_10 (FUNC_6 ()));
        FUNC_4 (VAR_5);
        return (-1);
    }

    for (;;) {
        uint8_t VAR_7[2 * sizeof (uint32_t)];
        char VAR_8[9];
        uint32_t VAR_9, VAR_10;
        time_t VAR_11;

        VAR_6 = FUNC_7 (VAR_5, VAR_7, sizeof (VAR_7), 0);
        if (VAR_6 < 0) {
            FUNC_0 (VAR_3, "nn_recv: %s\n", FUNC_10 (FUNC_6 ()));
            break;
        }
        if (VAR_6 != sizeof (VAR_7)) {
            FUNC_0 (VAR_3, "nn_recv: got %d bytes, wanted %d\n",
                VAR_6, (int)sizeof (VAR_7));
             break;
        }
        FUNC_3 (&VAR_10, VAR_7, sizeof (VAR_10));
        FUNC_3 (&VAR_9, VAR_7 + sizeof (VAR_10), sizeof (VAR_9));

        VAR_11 = (time_t) FUNC_11(VAR_10);
        FUNC_13 (VAR_8, sizeof (VAR_8), "%T", FUNC_2 (&VAR_11));

        FUNC_12 ("%s <pid %u> There are %u clients connected.\n", VAR_8,
            (unsigned) FUNC_1(), (unsigned) FUNC_11(VAR_9));
    }

    FUNC_4 (VAR_5);
    return (-1);
}
