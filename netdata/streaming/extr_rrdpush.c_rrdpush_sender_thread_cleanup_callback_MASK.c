
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int* rrdpush_sender_pipe; int hostname; scalar_t__ rrdpush_sender_spawn; int rrdpush_sender_join; int * rrdpush_sender_buffer; } ;
typedef TYPE_1__ RRDHOST ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_10(void *VAR_2) {
    RRDHOST *VAR_3 = (RRDHOST *)VAR_2;

    FUNC_7(VAR_3);
    FUNC_6(VAR_3);

    FUNC_2("STREAM %s [send]: sending thread cleans up...", VAR_3->hostname);

    FUNC_9(VAR_3);


    if(VAR_3->rrdpush_sender_pipe[VAR_0] != -1) {
        FUNC_1(VAR_3->rrdpush_sender_pipe[VAR_0]);
        VAR_3->rrdpush_sender_pipe[VAR_0] = -1;
    }

    if(VAR_3->rrdpush_sender_pipe[VAR_1] != -1) {
        FUNC_1(VAR_3->rrdpush_sender_pipe[VAR_1]);
        VAR_3->rrdpush_sender_pipe[VAR_1] = -1;
    }

    FUNC_0(VAR_3->rrdpush_sender_buffer);
    VAR_3->rrdpush_sender_buffer = ((void*)0);

    if(!VAR_3->rrdpush_sender_join) {
        FUNC_2("STREAM %s [send]: sending thread detaches itself.", VAR_3->hostname);
        FUNC_3(FUNC_4());
    }

    VAR_3->rrdpush_sender_spawn = 0;

    FUNC_2("STREAM %s [send]: sending thread now exits.", VAR_3->hostname);

    FUNC_5(VAR_3);
    FUNC_8(VAR_3);
}
