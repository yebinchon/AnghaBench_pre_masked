
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int entry; } ;
typedef TYPE_1__ tls_data_t ;
typedef int LONG ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 TYPE_1__* FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,TYPE_1__*) ;
 TYPE_1__* FUNC_7 (int) ;
 int FUNC_8 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

tls_data_t *FUNC_9(void)
{
    tls_data_t *VAR_4;

    if(VAR_3 == VAR_0) {
        DWORD VAR_5 = FUNC_3();
        if(VAR_5 == VAR_0)
            return ((void*)0);

        VAR_5 = FUNC_1((LONG*)&VAR_3, VAR_5, VAR_0);
        if(VAR_5 != VAR_3)
            FUNC_4(VAR_5);
    }

    VAR_4 = FUNC_5(VAR_3);
    if(!VAR_4) {
        VAR_4 = FUNC_7(sizeof(tls_data_t));
        if(!VAR_4)
            return ((void*)0);

        FUNC_0(&VAR_1);
        FUNC_8(&VAR_2, &VAR_4->entry);
        FUNC_2(&VAR_1);

        FUNC_6(VAR_3, VAR_4);
    }

    return VAR_4;
}
