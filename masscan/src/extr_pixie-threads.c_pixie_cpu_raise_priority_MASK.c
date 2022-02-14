
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;
typedef int pthread_attr_t ;
typedef scalar_t__ DWORD_PTR ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,char*,unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int) ;
 int VAR_1 ;

void
FUNC_10(void)
{







    pthread_t VAR_2 = FUNC_7();
    pthread_attr_t VAR_3;
    int VAR_4 = 0;
    int VAR_5 = 0;

    FUNC_6(&VAR_3);
    FUNC_5(&VAR_3, &VAR_4);
    VAR_5 = FUNC_9(VAR_4);


    FUNC_8(VAR_2, VAR_5);
    FUNC_4(&VAR_3);
    return;


}
