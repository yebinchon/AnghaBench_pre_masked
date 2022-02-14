
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int log_filename; scalar_t__ log_fp; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_3 (scalar_t__,int *,int ,int ) ;

int FUNC_4(void) {
    if(VAR_1.log_fp)
        FUNC_1(VAR_1.log_fp);

    VAR_1.log_fp = FUNC_2(VAR_1.log_filename, "a");
    if(VAR_1.log_fp) {
        if (FUNC_3(VAR_1.log_fp, ((void*)0), VAR_0, 0) != 0)
            FUNC_0("Cannot set line buffering on registry log file.");
        return 0;
    }

    FUNC_0("Cannot open registry log file '%s'. Registry data will be lost in case of netdata or server crash.", VAR_1.log_filename);
    return -1;
}
