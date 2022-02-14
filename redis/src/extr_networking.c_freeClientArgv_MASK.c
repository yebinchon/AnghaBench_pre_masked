
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int argc; int * cmd; int * argv; } ;
typedef TYPE_1__ client ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(client *VAR_0) {
    int VAR_1;
    for (VAR_1 = 0; VAR_1 < VAR_0->argc; VAR_1++)
        FUNC_0(VAR_0->argv[VAR_1]);
    VAR_0->argc = 0;
    VAR_0->cmd = ((void*)0);
}
