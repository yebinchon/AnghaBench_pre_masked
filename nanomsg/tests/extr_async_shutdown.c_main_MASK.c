
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_thread {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char const**) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct nn_thread*,int ,int*) ;
 int FUNC_3 (struct nn_thread*) ;
 int VAR_3 ;
 int FUNC_4 (char*,char*,char*,int ) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ) ;

int FUNC_8 (int VAR_4, const char *VAR_5[])
{
    int VAR_6;
    int VAR_7;
    struct nn_thread VAR_8;
    char VAR_9[128];

    FUNC_4(VAR_9, "tcp", "127.0.0.1",
            FUNC_0(VAR_4, VAR_5));

    for (VAR_7 = 0; VAR_7 != VAR_2; ++VAR_7) {
        VAR_6 = FUNC_7 (VAR_0, VAR_1);
        FUNC_5 (VAR_6, VAR_9);
        FUNC_1 (100);
        FUNC_2 (&VAR_8, VAR_3, &VAR_6);
        FUNC_1 (100);
        FUNC_6 (VAR_6);
        FUNC_3 (&VAR_8);
    }

    return 0;
}
