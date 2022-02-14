
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timeo ;
struct nn_thread {int dummy; } ;
typedef int maxttl ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int,char const**) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int,int ,int ,int*,size_t*) ;
 int FUNC_4 (int,int ,int ,int*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (struct nn_thread*,int ,int *) ;
 int FUNC_8 (struct nn_thread*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_9 (int ,char*,char*,int) ;
 int FUNC_10 (void*,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (int,int ) ;
 int FUNC_14 (int,char*) ;
 int FUNC_15 (int,char*) ;
 int FUNC_16 (int,int ,int ,int*,int) ;
 void* FUNC_17 (int ,int ) ;

int FUNC_18 (int VAR_14, const char *VAR_15[])
{
    int VAR_16;
    int VAR_17;
    struct nn_thread VAR_18;
    int VAR_19;
    int VAR_20;
    size_t VAR_21;
    int VAR_22;

    int VAR_23 = FUNC_0(VAR_14, VAR_15);

    FUNC_9(VAR_12, "tcp", "127.0.0.1", VAR_23);
    FUNC_9(VAR_13, "tcp", "127.0.0.1", VAR_23 + 1);


    VAR_9 = FUNC_17 (VAR_1, VAR_6);
    VAR_10 = FUNC_17 (VAR_1, VAR_8);

    FUNC_10 (VAR_9, VAR_12);
    FUNC_10 (VAR_10, VAR_13);


    FUNC_7 (&VAR_18, VAR_11, ((void*)0));

    VAR_16 = FUNC_17 (VAR_0, VAR_8);
    VAR_17 = FUNC_17 (VAR_0, VAR_6);


    FUNC_12 (VAR_16, VAR_12);
    FUNC_12 (VAR_17, VAR_13);


    FUNC_5 (100);


    VAR_19 = 100;
    FUNC_16 (VAR_16, VAR_7, VAR_5, &VAR_19, sizeof (VAR_19));
    VAR_19 = 100;
    FUNC_16 (VAR_17, VAR_7, VAR_5, &VAR_19, sizeof (VAR_19));


    VAR_21 = sizeof (VAR_20);
    VAR_20 = -1;
    VAR_22 = FUNC_3(VAR_17, VAR_7, VAR_4, &VAR_20, &VAR_21);
    FUNC_1 (VAR_22 == 0);
    FUNC_1 (VAR_21 == sizeof (VAR_20));
    FUNC_1 (VAR_20 == 8);


    VAR_20 = -1;
    VAR_22 = FUNC_4(VAR_17, VAR_7, VAR_4, &VAR_20, sizeof (VAR_20));
    FUNC_1 (VAR_22 < 0 && FUNC_2 () == VAR_2);
    FUNC_1 (VAR_20 == -1);
    VAR_20 = 0;
    VAR_22 = FUNC_4(VAR_17, VAR_7, VAR_4, &VAR_20, sizeof (VAR_20));
    FUNC_1 (VAR_22 < 0 && FUNC_2 () == VAR_2);
    FUNC_1 (VAR_20 == 0);


    VAR_20 = 8;
    VAR_22 = FUNC_4(VAR_17, VAR_7, VAR_4, &VAR_20, 1);
    FUNC_1 (VAR_22 < 0 && FUNC_2 () == VAR_2);
    FUNC_1 (VAR_20 == 8);


    FUNC_15 (VAR_16, "SURVEY");
    FUNC_14 (VAR_17, "SURVEY");


    FUNC_15 (VAR_17, "REPLYXYZ");
    FUNC_14 (VAR_16, "REPLYXYZ");


    VAR_20 = 1;
    FUNC_16 (VAR_16, VAR_7, VAR_4, &VAR_20, sizeof (VAR_20));
    FUNC_16 (VAR_17, VAR_7, VAR_4, &VAR_20, sizeof (VAR_20));

    FUNC_15 (VAR_16, "DROPTHIS");
    FUNC_13 (VAR_17, VAR_3);

    VAR_20 = 2;
    FUNC_16 (VAR_16, VAR_7, VAR_4, &VAR_20, sizeof (VAR_20));
    FUNC_16 (VAR_17, VAR_7, VAR_4, &VAR_20, sizeof (VAR_20));
    FUNC_15 (VAR_16, "DONTDROP");
    FUNC_14 (VAR_17, "DONTDROP");


    FUNC_11 (VAR_16);
    FUNC_11 (VAR_17);


    FUNC_6 ();
    FUNC_8 (&VAR_18);

    return 0;
}
