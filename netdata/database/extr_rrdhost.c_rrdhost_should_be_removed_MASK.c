
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_6__ {scalar_t__ senders_disconnected_time; int connected_senders; } ;
typedef TYPE_1__ RRDHOST ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ VAR_2 ;

inline int FUNC_1(RRDHOST *VAR_3, RRDHOST *VAR_4, time_t VAR_5) {
    if(VAR_3 != VAR_4
       && VAR_3 != VAR_1
       && FUNC_0(VAR_3, VAR_0)
       && !VAR_3->connected_senders
       && VAR_3->senders_disconnected_time
       && VAR_3->senders_disconnected_time + VAR_2 < VAR_5)
        return 1;

    return 0;
}
