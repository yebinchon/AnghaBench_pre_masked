
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fd_set ;
typedef int SSL ;
typedef scalar_t__ OSSL_ASYNC_FD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int *,scalar_t__*,size_t*) ;
 scalar_t__* FUNC_3 (int,char*) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int,void*,int *,int *,int *) ;

void FUNC_6(SSL *VAR_0)
{


    int VAR_1 = 0;
    fd_set VAR_2;
    OSSL_ASYNC_FD *VAR_3;
    size_t VAR_4;
    size_t VAR_5;

    if (!FUNC_2(VAR_0, ((void*)0), &VAR_4))
        return;
    if (VAR_4 == 0)
        return;
    VAR_3 = FUNC_3(sizeof(OSSL_ASYNC_FD) * VAR_4, "allocate async fds");
    if (!FUNC_2(VAR_0, VAR_3, &VAR_4)) {
        FUNC_1(VAR_3);
        return;
    }

    FUNC_0(&VAR_2);
    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
        if (VAR_1 <= (int)VAR_3[VAR_5])
            VAR_1 = (int)VAR_3[VAR_5] + 1;
        FUNC_4((int)VAR_3[VAR_5], &VAR_2);
    }
    FUNC_5(VAR_1, (void *)&VAR_2, ((void*)0), ((void*)0), ((void*)0));
    FUNC_1(VAR_3);

}
