
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_thread {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char const**) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct nn_thread*,int ,int *) ;
 int FUNC_4 (struct nn_thread*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ,char*,char*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int,char*) ;
 int FUNC_9 (int,char*) ;
 int FUNC_10 (int ,int ) ;

int FUNC_11 (int VAR_7, const char *VAR_8[])
{
    int VAR_9;
    int VAR_10;
    struct nn_thread VAR_11;
    struct nn_thread VAR_12;

    int VAR_13 = FUNC_0(VAR_7, VAR_8);

    FUNC_5(VAR_5, "tcp", "127.0.0.1", VAR_13);
    FUNC_5(VAR_6, "tcp", "127.0.0.1", VAR_13 + 1);




    FUNC_3 (&VAR_11, VAR_3, ((void*)0));
    FUNC_3 (&VAR_12, VAR_4, ((void*)0));


    VAR_9 = FUNC_10 (VAR_0, VAR_2);
    FUNC_7 (VAR_9, VAR_5);
    VAR_10 = FUNC_10 (VAR_0, VAR_1);
    FUNC_7 (VAR_10, VAR_6);


    FUNC_1 (1000);


    FUNC_9 (VAR_9, "XYZ");
    FUNC_8 (VAR_10, "XYZ");


    FUNC_9 (VAR_10, "REPLYXYZ");
    FUNC_8 (VAR_9, "REPLYXYZ");


    FUNC_6 (VAR_9);
    FUNC_6 (VAR_10);


    FUNC_2 ();
    FUNC_4 (&VAR_11);
    FUNC_4 (&VAR_12);

    return 0;
}
