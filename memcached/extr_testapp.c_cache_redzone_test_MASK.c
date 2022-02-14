
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sigaction {int sa_mask; int sa_flags; int sa_handler; } ;
typedef enum test_return { ____Placeholder_test_return } test_return ;
typedef int cache_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int *) ;
 int * FUNC_2 (char*,int,int,int *,int *) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int ,struct sigaction*,struct sigaction*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static enum test_return FUNC_7(void)
{

    cache_t *VAR_5 = FUNC_2("test", sizeof(uint32_t), sizeof(char*),
                                  ((void*)0), ((void*)0));


    struct sigaction VAR_6;
    struct sigaction VAR_7 = { .sa_handler = VAR_1, .sa_flags = 0};
    FUNC_6(&VAR_7.sa_mask);
    FUNC_5(VAR_0, &VAR_7, &VAR_6);


    char *VAR_8 = FUNC_1(VAR_5);
    char VAR_9 = *(VAR_8 - 1);
    *(VAR_8 - 1) = 0;
    FUNC_4(VAR_5, VAR_8);
    FUNC_0(VAR_4 == -1);
    *(VAR_8 - 1) = VAR_9;

    VAR_8[sizeof(uint32_t)] = 0;
    FUNC_4(VAR_5, VAR_8);
    FUNC_0(VAR_4 == 1);


    FUNC_5(VAR_0, &VAR_6, ((void*)0));

    FUNC_3(VAR_5);

    return VAR_2;



}
