
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tids ;
typedef int * pthread_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int **,int ,int) ;
 scalar_t__ FUNC_2 (int,char const*) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (int **,int *,int ,void*) ;
 int FUNC_8 (int *,int *) ;
 int VAR_3 ;
 char* FUNC_9 (int) ;
 int VAR_4 ;

int FUNC_10(const char *VAR_5)
{
    int VAR_6;
    int VAR_7;
    pthread_t VAR_8 [VAR_1];
    int VAR_9;


    VAR_6 = FUNC_5(VAR_0, VAR_2);
    if (VAR_6 < 0) {
        FUNC_0 (VAR_3, "nn_socket: %s\n", FUNC_6 (FUNC_4 ()));
        return (-1);
    }





    if (FUNC_2 (VAR_6, VAR_5) < 0) {
        FUNC_0 (VAR_3, "nn_bind: %s\n", FUNC_6 (FUNC_4 ()));
        FUNC_3 (VAR_6);
        return (-1);
    }

    FUNC_1 (VAR_8, 0, sizeof (VAR_8));


    for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
        VAR_9 = FUNC_7 (&VAR_8[VAR_7], ((void*)0), VAR_4, (void *)(intptr_t)VAR_6);
        if (VAR_9 < 0) {
            FUNC_0 (VAR_3, "pthread_create: %s\n", FUNC_9 (VAR_9));
            FUNC_3 (VAR_6);
            break;
        }
    }


    for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
        if (VAR_8[VAR_7] != ((void*)0)) {
            FUNC_8 (VAR_8[VAR_7], ((void*)0));
        }
    }
    return (-1);
}
