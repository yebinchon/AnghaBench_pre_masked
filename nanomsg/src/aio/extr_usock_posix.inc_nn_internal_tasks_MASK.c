
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_usock {int wfd; int worker; int s; } ;







 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4 (struct nn_usock *VAR_1, int VAR_2, int VAR_3)
{




    switch (VAR_2) {
    case 128:
        FUNC_0 (VAR_3 == VAR_0);
        FUNC_3 (VAR_1->worker, &VAR_1->wfd);
        return 1;
    case 129:
        FUNC_0 (VAR_3 == VAR_0);
        FUNC_2 (VAR_1->worker, &VAR_1->wfd);
        return 1;
    case 131:
        FUNC_0 (VAR_3 == VAR_0);
        FUNC_1 (VAR_1->worker, VAR_1->s, &VAR_1->wfd);
        return 1;
    case 130:
        FUNC_0 (VAR_3 == VAR_0);
        FUNC_1 (VAR_1->worker, VAR_1->s, &VAR_1->wfd);
        FUNC_3 (VAR_1->worker, &VAR_1->wfd);
        return 1;
    case 132:
        FUNC_0 (VAR_3 == VAR_0);
        FUNC_1 (VAR_1->worker, VAR_1->s, &VAR_1->wfd);
        FUNC_2 (VAR_1->worker, &VAR_1->wfd);
        return 1;
    }

    return 0;
}
