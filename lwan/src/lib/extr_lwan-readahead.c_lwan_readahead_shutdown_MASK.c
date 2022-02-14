
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan_readahead_cmd {int cmd; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int *) ;
 int* VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int,struct lwan_readahead_cmd*,int) ;

void FUNC_4(void)
{
    struct lwan_readahead_cmd VAR_3 = {
        .cmd = VAR_0,
    };

    if (VAR_1[0] == VAR_1[1] &&
        VAR_1[0] == -1)
        return;

    FUNC_1("Shutting down readahead thread");

    FUNC_3(VAR_1[1], &VAR_3, sizeof(VAR_3));
    FUNC_2(VAR_2, ((void*)0));

    FUNC_0(VAR_1[0]);
    FUNC_0(VAR_1[1]);
    VAR_1[0] = VAR_1[1] = -1;
}
