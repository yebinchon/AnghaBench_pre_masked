
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int client ;
struct TYPE_2__ {char* title; scalar_t__ num_threads; void* start; scalar_t__ threads; void* totlatency; int el; scalar_t__ requests_finished; scalar_t__ requests_issued; } ;


 int FUNC_0 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (char*,int,int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 void* FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(char *VAR_1, char *VAR_2, int VAR_3) {
    client VAR_4;

    VAR_0.title = VAR_1;
    VAR_0.requests_issued = 0;
    VAR_0.requests_finished = 0;

    if (VAR_0.num_threads) FUNC_5();

    int VAR_5 = VAR_0.num_threads > 0 ? 0 : -1;
    VAR_4 = FUNC_1(VAR_2,VAR_3,((void*)0),VAR_5);
    FUNC_2(VAR_4);

    VAR_0.start = FUNC_6();
    if (!VAR_0.num_threads) FUNC_0(VAR_0.el);
    else FUNC_8();
    VAR_0.totlatency = FUNC_6()-VAR_0.start;

    FUNC_7();
    FUNC_3();
    if (VAR_0.threads) FUNC_4();
}
