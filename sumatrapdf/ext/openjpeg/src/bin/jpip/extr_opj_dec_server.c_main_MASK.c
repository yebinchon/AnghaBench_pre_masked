
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dec_server_record_t ;
typedef int client_t ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,char*,int,int) ;
 int FUNC_7 (int,int *) ;
 int * FUNC_8 (int) ;
 int VAR_0 ;
 int FUNC_9 (char*,...) ;
 int VAR_1 ;
 int FUNC_10 (int **) ;

int FUNC_11(int VAR_2, char *VAR_3[])
{

    dec_server_record_t *VAR_4;
    client_t VAR_5;
    int VAR_6 = 50000;
    int VAR_7;
    (void)VAR_7;

    if (VAR_2 > 1) {
        VAR_6 = FUNC_5(VAR_3[1]);
    }
    VAR_4 = FUNC_8(VAR_6);

    while ((VAR_5 = FUNC_4(VAR_4)) != -1)
        if (!FUNC_7(VAR_5, VAR_4)) {
            break;
        }

    FUNC_10(&VAR_4);
    return 0;
}
