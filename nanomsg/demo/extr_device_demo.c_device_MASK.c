
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char const*,...) ;
 scalar_t__ FUNC_1 (int,char const*) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 char* FUNC_5 (int ) ;
 int VAR_3 ;

int FUNC_6 (const char *VAR_4, const char *VAR_5)
{
    int VAR_6, VAR_7, VAR_8;
    VAR_6 = FUNC_4 (VAR_0, VAR_2);
    if (VAR_6 < 0) {
        FUNC_0 (VAR_3, "nn_socket: %s\n", FUNC_5 (FUNC_3 ()));
        return (-1);
    }
    if (FUNC_1 (VAR_6, VAR_4) < 0) {
        FUNC_0 (VAR_3, "nn_bind1(%s): %s\n", VAR_4, FUNC_5 (FUNC_3 ()));
        return (-1);
    }
    VAR_7 = FUNC_4 (VAR_0, VAR_1);
    if (VAR_7 < 0) {
        FUNC_0 (VAR_3, "nn_socket: %s\n", FUNC_5(FUNC_3 ()));
        return (-1);
    }
    if (FUNC_1 (VAR_7, VAR_5) < 0) {
        FUNC_0 (VAR_3, "nn_bind2(%s): %s\n", VAR_5, FUNC_5 (FUNC_3 ()));
        return (-1);
    }

    if (FUNC_2 (VAR_6, VAR_7) != 0) {
        FUNC_0 (VAR_3, "nn_device: %s\n", FUNC_5 (FUNC_3 ()));
        return (-1);
    }
    return (0);
}
