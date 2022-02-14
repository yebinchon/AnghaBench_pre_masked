
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int rrdpush_sender_spawn; int hostname; int rrdpush_sender_thread; } ;
typedef TYPE_1__ RRDHOST ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int *,char*,int ,int ,void*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_4 (char*,int ,char*,int ) ;

__attribute__((used)) static void FUNC_5(RRDHOST *VAR_3) {
    FUNC_3(VAR_3);

    if(!VAR_3->rrdpush_sender_spawn) {
        char VAR_4[VAR_1 + 1];
        FUNC_4(VAR_4, VAR_1, "STREAM_SENDER[%s]", VAR_3->hostname);

        if(FUNC_1(&VAR_3->rrdpush_sender_thread, VAR_4, VAR_0, VAR_2, (void *) VAR_3))
            FUNC_0("STREAM %s [send]: failed to create new thread for client.", VAR_3->hostname);
        else
            VAR_3->rrdpush_sender_spawn = 1;
    }

    FUNC_2(VAR_3);
}
