
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * log_fp; int log_filename; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 () ;

void FUNC_5(void) {
    if(VAR_0.log_fp != ((void*)0)) {
        FUNC_3();


        VAR_0.log_fp = FUNC_2(VAR_0.log_filename, "w");
        if(VAR_0.log_fp) FUNC_1(VAR_0.log_fp);
        else FUNC_0("Cannot truncate registry log '%s'", VAR_0.log_filename);

        VAR_0.log_fp = ((void*)0);
        FUNC_4();
    }
}
