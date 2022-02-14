
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(pid_t VAR_3) {
    int VAR_4;
    FUNC_0(VAR_0, "Request to kill pid %d", VAR_3);

    VAR_2 = 0;
    VAR_4 = FUNC_2(VAR_3, VAR_1);
    if (VAR_4 == -1) {
        switch(VAR_2) {
            case 128:

                return VAR_4;

            case 129:
                FUNC_1("Cannot kill pid %d, but I do not have enough permissions.", VAR_3);
                break;

            default:
                FUNC_1("Cannot kill pid %d, but I received an error.", VAR_3);
                break;
        }
    }

    return VAR_4;
}
