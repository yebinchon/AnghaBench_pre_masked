
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t id; int buf; int c; } ;
typedef TYPE_1__ logger_watcher ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int ** VAR_1 ;

__attribute__((used)) static void FUNC_5(logger_watcher *VAR_2) {
    FUNC_0("LOGGER: Closing dead watcher\n");
    VAR_1[VAR_2->id] = ((void*)0);
    FUNC_4(VAR_2->c);
    VAR_0--;
    FUNC_1(VAR_2->buf);
    FUNC_2(VAR_2);
    FUNC_3();
}
