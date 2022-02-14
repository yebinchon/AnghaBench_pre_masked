
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int rrdpush_sender_buffer; int hostname; } ;
typedef TYPE_1__ RRDHOST ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_7(RRDHOST *VAR_0) {
    FUNC_3(VAR_0);

    if(FUNC_1(VAR_0->rrdpush_sender_buffer))
        FUNC_2("STREAM %s [send]: discarding %zu bytes of metrics already in the buffer.", VAR_0->hostname, FUNC_1(VAR_0->rrdpush_sender_buffer));

    FUNC_0(VAR_0->rrdpush_sender_buffer);

    FUNC_5(VAR_0);
    FUNC_6(VAR_0);

    FUNC_4(VAR_0);
}
