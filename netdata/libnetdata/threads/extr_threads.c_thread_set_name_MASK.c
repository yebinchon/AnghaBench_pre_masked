
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ tag; } ;
typedef TYPE_1__ NETDATA_THREAD ;


 int FUNC_0 (char*,int ,char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_7(NETDATA_THREAD *VAR_0) {

    if (VAR_0->tag) {
        int VAR_1 = 0;


        char VAR_2[16];
        FUNC_6(VAR_2, VAR_0->tag, 15);






        VAR_1 = FUNC_5(FUNC_3(), VAR_2);


        if (VAR_1 != 0)
            FUNC_0("cannot set pthread name of %d to %s. ErrCode: %d", FUNC_1(), VAR_2, VAR_1);
        else
            FUNC_2("set name of thread %d to %s", FUNC_1(), VAR_2);

    }
}
