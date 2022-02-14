
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ netdata_thread_t ;
struct TYPE_7__ {int rrdpush_sender_join; scalar_t__ rrdpush_sender_thread; int hostname; scalar_t__ rrdpush_sender_spawn; } ;
typedef TYPE_1__ RRDHOST ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,void**) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

void FUNC_7(RRDHOST *VAR_0) {
    FUNC_5(VAR_0);
    FUNC_4(VAR_0);

    netdata_thread_t VAR_1 = 0;

    if(VAR_0->rrdpush_sender_spawn) {
        FUNC_0("STREAM %s [send]: signaling sending thread to stop...", VAR_0->hostname);


        VAR_0->rrdpush_sender_join = 1;



        VAR_1 = VAR_0->rrdpush_sender_thread;


        FUNC_1(VAR_0->rrdpush_sender_thread);
    }

    FUNC_3(VAR_0);
    FUNC_6(VAR_0);

    if(VAR_1 != 0) {
        FUNC_0("STREAM %s [send]: waiting for the sending thread to stop...", VAR_0->hostname);
        void *VAR_2;
        FUNC_2(VAR_1, &VAR_2);
        FUNC_0("STREAM %s [send]: sending thread has exited.", VAR_0->hostname);
    }
}
