
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int subs ;
typedef int secs ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,scalar_t__*,int) ;
 scalar_t__ FUNC_3 (int,char const*) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int,int ) ;
 int FUNC_7 (int,int *,int,int ) ;
 int FUNC_8 (int ,int ) ;
 char* FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_11 (int *) ;

int FUNC_12(const char *VAR_4)
{
    int VAR_5;


    VAR_5 = FUNC_8 (VAR_0, VAR_1);
    if (VAR_5 < 0) {
        FUNC_0 (VAR_3, "nn_socket: %s\n", FUNC_9 (FUNC_5 ()));
        return (-1);
    }





    if (FUNC_3 (VAR_5, VAR_4) < 0) {
        FUNC_0 (VAR_3, "nn_bind: %s\n", FUNC_9 (FUNC_5 ()));
        FUNC_4 (VAR_5);
        return (-1);
    }




    for (;;) {
        uint8_t VAR_6[2 * sizeof (uint32_t)];
        uint32_t VAR_7, VAR_8;
        int VAR_9;

        VAR_7 = (uint32_t) FUNC_11 (((void*)0));
        VAR_8 = (uint32_t) FUNC_6 (VAR_5, VAR_2);

        VAR_7 = FUNC_1 (VAR_7);
        VAR_8 = FUNC_1 (VAR_8);

        FUNC_2 (VAR_6, &VAR_7, sizeof (VAR_7));
        FUNC_2 (VAR_6 + sizeof (VAR_7), &VAR_8, sizeof (VAR_8));

        VAR_9 = FUNC_7 (VAR_5, VAR_6, sizeof (VAR_6), 0);
        if (VAR_9 < 0) {



            FUNC_0 (VAR_3, "nn_send: %s (ignoring)\n",
                FUNC_9 (FUNC_5 ()));
        }
        FUNC_10(10);
    }


    FUNC_4 (VAR_5);
    return (-1);
}
