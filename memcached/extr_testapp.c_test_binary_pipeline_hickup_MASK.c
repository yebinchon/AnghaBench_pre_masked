
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_t ;
typedef enum test_return { ____Placeholder_test_return } test_return ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (void*) ;
 int VAR_5 ;
 void* FUNC_2 (size_t) ;
 int FUNC_3 (int *,int *,int ,int *) ;
 int FUNC_4 (int ,int *) ;
 size_t FUNC_5 (void*,size_t,int ,int *,int ,int *,int ) ;
 int FUNC_6 (void*,size_t,int) ;
 int FUNC_7 (int) ;
 int VAR_6 ;
 char* FUNC_8 (int) ;
 int FUNC_9 (void*,size_t) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int) ;

__attribute__((used)) static enum test_return FUNC_12(void)
{
    size_t VAR_7 = 65 * 1024;
    void *VAR_8 = FUNC_2(VAR_7);
    int VAR_9;

    pthread_t VAR_10;
    int VAR_11;
    VAR_3 = 1;
    VAR_5 = 1;
    if ((VAR_11 = FUNC_3(&VAR_10, ((void*)0),
                              VAR_4, ((void*)0))) != 0) {
        FUNC_0(VAR_6, "Can't create thread: %s\n", FUNC_8(VAR_11));
        FUNC_1(VAR_8);
        return VAR_1;
    }


    FUNC_11(250);

    FUNC_7((int)FUNC_10(((void*)0)));
    for (VAR_9 = 0; VAR_9 < 2; ++VAR_9) {
        FUNC_9(VAR_8, VAR_7);
    }


    size_t VAR_12 = FUNC_5(VAR_8, VAR_7, VAR_0,
                             ((void*)0), 0, ((void*)0), 0);
    FUNC_6(VAR_8, VAR_12, 0);

    FUNC_4(VAR_10, ((void*)0));
    FUNC_1(VAR_8);
    return VAR_2;
}
