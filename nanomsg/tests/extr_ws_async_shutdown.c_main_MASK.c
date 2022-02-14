
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_thread {int dummy; } ;
typedef int sndtimeo ;
typedef int rcvtimeo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,char const**) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct nn_thread*,int ,int*) ;
 int FUNC_3 (struct nn_thread*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int ,char*,char*,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int,char*) ;
 int FUNC_9 (int,int ,int ,...) ;
 int FUNC_10 (int ,int ) ;

int FUNC_11 (int VAR_11, const char *VAR_12[])
{
    int VAR_13;
    int VAR_14;
    int VAR_15;
    int VAR_16;
    int VAR_17 = 10;
    int VAR_18 = 0;
    int VAR_19 [VAR_8];
    struct nn_thread VAR_20 [VAR_8];

    FUNC_4 (VAR_10, "ws", "127.0.0.1",
        FUNC_0 (VAR_11, VAR_12));

    for (VAR_13 = 0; VAR_13 != VAR_7; ++VAR_13) {

        VAR_16 = FUNC_10 (VAR_0, VAR_1);
        FUNC_5 (VAR_16, VAR_10);
        FUNC_9 (VAR_16, VAR_4, VAR_3,
            &VAR_18, sizeof (VAR_18));

        for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++){
            VAR_15 = FUNC_10 (VAR_0, VAR_5);
            FUNC_9 (VAR_15, VAR_4, VAR_2,
                &VAR_17, sizeof (VAR_17));
            FUNC_9 (VAR_15, VAR_5, VAR_6, "", 0);
            FUNC_7 (VAR_15, VAR_10);
            VAR_19 [VAR_14] = VAR_15;
            FUNC_2 (&VAR_20 [VAR_14], VAR_9, &VAR_19 [VAR_14]);
        }


        FUNC_1 (100);

        FUNC_8 (VAR_16, "");

        for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++) {
            FUNC_6 (VAR_19 [VAR_14]);
            FUNC_3 (&VAR_20 [VAR_14]);
        }

        FUNC_6 (VAR_16);
    }

    return 0;
}
