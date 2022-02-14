
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rrdpush_sender_socket; scalar_t__ rrdpush_sender_connected; } ;
typedef TYPE_1__ RRDHOST ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(RRDHOST *VAR_0) {
    VAR_0->rrdpush_sender_connected = 0;

    if(VAR_0->rrdpush_sender_socket != -1) {
        FUNC_0(VAR_0->rrdpush_sender_socket);
        VAR_0->rrdpush_sender_socket = -1;
    }
}
