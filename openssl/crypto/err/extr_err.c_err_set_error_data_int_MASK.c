
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int top; } ;
typedef TYPE_1__ ERR_STATE ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int ,char*,size_t,int) ;

__attribute__((used)) static int FUNC_3(char *VAR_0, size_t VAR_1, int VAR_2,
                                  int VAR_3)
{
    ERR_STATE *VAR_4;

    VAR_4 = FUNC_1();
    if (VAR_4 == ((void*)0))
        return 0;

    FUNC_0(VAR_4, VAR_4->top, VAR_3);
    FUNC_2(VAR_4, VAR_4->top, VAR_0, VAR_1, VAR_2);

    return 1;
}
