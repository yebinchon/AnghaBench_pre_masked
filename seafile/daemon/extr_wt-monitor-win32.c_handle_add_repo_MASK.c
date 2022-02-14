
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int priv; } ;
typedef TYPE_1__ SeafWTMonitor ;
typedef int * HANDLE ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int * FUNC_1 (int ,char const*,char const*) ;

__attribute__((used)) static int FUNC_2 (SeafWTMonitor *VAR_0,
                            const char *VAR_1,
                            const char *VAR_2)
{
    HANDLE VAR_3;

    VAR_3 = FUNC_1 (VAR_0->priv, VAR_1, VAR_2);
    if (VAR_3 == ((void*)0) ||
        !FUNC_0(VAR_0, VAR_3)) {
        return -1;
    }

    return 0;
}
