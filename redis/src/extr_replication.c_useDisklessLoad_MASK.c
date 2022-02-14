
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ repl_diskless_load; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3() {

    int VAR_4 = VAR_3.repl_diskless_load == VAR_1 ||
           (VAR_3.repl_diskless_load == VAR_2 && FUNC_0()==0);

    if (VAR_4 && !FUNC_1()) {
        FUNC_2(VAR_0,
            "Skipping diskless-load because there are modules that don't handle read errors.");
        VAR_4 = 0;
    }
    return VAR_4;
}
