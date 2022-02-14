
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * health_log_fp; } ;
typedef TYPE_1__ RRDHOST ;


 int FUNC_0 (int *) ;

inline void FUNC_1(RRDHOST *VAR_0) {
    if(VAR_0->health_log_fp) {
        FUNC_0(VAR_0->health_log_fp);
        VAR_0->health_log_fp = ((void*)0);
    }
}
