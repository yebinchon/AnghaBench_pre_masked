
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int rrdpush_sender_error_shown; int* rrdpush_sender_pipe; int hostname; int rrdpush_sender_connected; int rrdpush_sender_buffer; int rrdpush_sender_spawn; scalar_t__ rrdpush_send_enabled; } ;
struct TYPE_11__ {TYPE_2__* rrdhost; } ;
typedef TYPE_1__ RRDSET ;
typedef TYPE_2__ RRDHOST ;


 size_t VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int,char*,int) ;

void FUNC_11(RRDSET *VAR_1) {
    if(FUNC_9(!FUNC_8(VAR_1)))
        return;

    RRDHOST *VAR_2 = VAR_1->rrdhost;

    FUNC_3(VAR_2);

    if(FUNC_9(VAR_2->rrdpush_send_enabled && !VAR_2->rrdpush_sender_spawn))
        FUNC_7(VAR_2);

    if(FUNC_9(!VAR_2->rrdpush_sender_buffer || !VAR_2->rrdpush_sender_connected)) {
        if(FUNC_9(!VAR_2->rrdpush_sender_error_shown))
            FUNC_0("STREAM %s [send]: not ready - discarding collected metrics.", VAR_2->hostname);

        VAR_2->rrdpush_sender_error_shown = 1;

        FUNC_4(VAR_2);
        return;
    }
    else if(FUNC_9(VAR_2->rrdpush_sender_error_shown)) {
        FUNC_1("STREAM %s [send]: sending metrics...", VAR_2->hostname);
        VAR_2->rrdpush_sender_error_shown = 0;
    }

    if(FUNC_2(VAR_1))
        FUNC_5(VAR_1);

    FUNC_6(VAR_1);


    if(VAR_2->rrdpush_sender_pipe[VAR_0] != -1 && FUNC_10(VAR_2->rrdpush_sender_pipe[VAR_0], " ", 1) == -1)
        FUNC_0("STREAM %s [send]: cannot write to internal pipe", VAR_2->hostname);

    FUNC_4(VAR_2);
}
