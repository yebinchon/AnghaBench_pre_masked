
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ idle_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int *,int *,int ,int *) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 char* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3() {
    int VAR_5;

    if (VAR_3.idle_timeout == 0)
        return -1;

    VAR_2 = 1;
    if ((VAR_5 = FUNC_1(&VAR_1, ((void*)0),
        VAR_0, ((void*)0))) != 0) {
        FUNC_0(VAR_4, "Can't create idle connection timeout thread: %s\n",
            FUNC_2(VAR_5));
        return -1;
    }

    return 0;
}
