
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int msg ;
typedef int msec ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (char const*) ;
 int FUNC_1 (int ,char*,char*) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (int *,unsigned int*,int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int,char const*) ;
 int FUNC_7 () ;
 int FUNC_8 (int,int **,int,int ) ;
 scalar_t__ FUNC_9 (int,int *,int,int ) ;
 int FUNC_10 (int ,int ) ;
 char* FUNC_11 (int ) ;
 int FUNC_12 (char*,int) ;
 int VAR_2 ;

int FUNC_13 (const char *VAR_3, const char *VAR_4)
{
    int VAR_5;
    int VAR_6;
    char *VAR_7;
    uint8_t VAR_8[sizeof (uint32_t)];
    uint64_t VAR_9;
    uint64_t VAR_10;
    unsigned VAR_11;

    VAR_11 = FUNC_0(VAR_4);

    VAR_5 = FUNC_10 (VAR_0, VAR_1);
    if (VAR_5 < 0) {
        FUNC_1 (VAR_2, "nn_socket: %s\n", FUNC_11 (FUNC_7 ()));
        return (-1);
    }

    if (FUNC_6 (VAR_5, VAR_3) < 0) {
        FUNC_1 (VAR_2, "nn_socket: %s\n", FUNC_11 (FUNC_7 ()));
        FUNC_5 (VAR_5);
        return (-1);
    }

    VAR_11 = FUNC_2(VAR_11);
    FUNC_3 (VAR_8, &VAR_11, sizeof (VAR_11));

    VAR_9 = FUNC_4 ();

    if (FUNC_9 (VAR_5, VAR_8, sizeof (VAR_8), 0) < 0) {
        FUNC_1 (VAR_2, "nn_send: %s\n", FUNC_11 (FUNC_7 ()));
        FUNC_5 (VAR_5);
        return (-1);
    }

    VAR_6 = FUNC_8 (VAR_5, &VAR_8, sizeof (VAR_8), 0);
    if (VAR_6 < 0) {
        FUNC_1 (VAR_2, "nn_recv: %s\n", FUNC_11 (FUNC_7 ()));
        FUNC_5 (VAR_5);
        return (-1);
    }

    FUNC_5 (VAR_5);

    VAR_10 = FUNC_4 ();

    FUNC_12 ("Request took %u milliseconds.\n", (uint32_t)(VAR_10 - VAR_9));
    return (0);
}
