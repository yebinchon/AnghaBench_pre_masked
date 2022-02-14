
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (char*) ;
 int FUNC_1 (void*) ;
 char* FUNC_2 () ;
 void* FUNC_3 (void*,char*) ;
 int FUNC_4 (int ,char*,int,char*,char*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_5(void)
{
    void *VAR_8 = ((void*)0);
    void *VAR_9 = ((void*)0);

    if (VAR_5)
        return 0;

    int VAR_10 = 1;
    char *VAR_11;

    if (!(VAR_8 = FUNC_0(VAR_11 = "liblscapi.so")) )

        FUNC_4(VAR_7, "LSCRIU (%d): failed to dlopen %s: %s - ignore CRIU\n",
                VAR_6, VAR_11, FUNC_2());
    else if (!(VAR_3 = FUNC_3(VAR_8, VAR_11 = "lscapi_dump_me")) ||
                !(VAR_4 = FUNC_3(VAR_8, VAR_11 = "lscapi_prepare_me")) ||
                !(VAR_1 = FUNC_3(VAR_9, VAR_11 = "sem_open")) ||
                !(VAR_2 = FUNC_3(VAR_9, VAR_11 = "sem_post")) ||
                !(VAR_0 = FUNC_3(VAR_9, VAR_11 = "sem_close")))
        FUNC_4(VAR_7, "LSCRIU (%d): failed to dlsym %s: %s - ignore CRIU\n",
                VAR_6, VAR_11, FUNC_2());
    else
        VAR_10 = 0;
    if (VAR_10) {

        if (VAR_8)
            FUNC_1(VAR_8);
        if (VAR_9)
            FUNC_1(VAR_9);
        return -1;
    }
    return 0;
}
