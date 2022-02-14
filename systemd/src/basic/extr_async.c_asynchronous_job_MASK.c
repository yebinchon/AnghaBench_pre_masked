
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sigset_t ;
typedef int pthread_t ;
typedef int pthread_attr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *,void* (*) (void*),void*) ;
 int FUNC_5 (int ,int *,int *) ;
 scalar_t__ FUNC_6 (int *) ;

int FUNC_7(void* (*VAR_3)(void *VAR_4), void *VAR_5) {
        sigset_t VAR_6, VAR_7;
        pthread_attr_t VAR_8;
        pthread_t VAR_9;
        int VAR_10, VAR_11;




        VAR_10 = FUNC_2(&VAR_8);
        if (VAR_10 > 0)
                return -VAR_10;

        VAR_10 = FUNC_3(&VAR_8, VAR_0);
        if (VAR_10 > 0) {
                VAR_10 = -VAR_10;
                goto finish;
        }

        FUNC_0(FUNC_6(&VAR_6) >= 0);




        VAR_10 = FUNC_5(VAR_1, &VAR_6, &VAR_7);
        if (VAR_10 > 0) {
                VAR_10 = -VAR_10;
                goto finish;
        }

        VAR_10 = FUNC_4(&VAR_9, &VAR_8, VAR_3, VAR_5);

        VAR_11 = FUNC_5(VAR_2, &VAR_7, ((void*)0));

        if (VAR_10 > 0)
                VAR_10 = -VAR_10;
        else if (VAR_11 > 0)
                VAR_10 = -VAR_11;
        else
                VAR_10 = 0;

finish:
        FUNC_1(&VAR_8);
        return VAR_10;
}
