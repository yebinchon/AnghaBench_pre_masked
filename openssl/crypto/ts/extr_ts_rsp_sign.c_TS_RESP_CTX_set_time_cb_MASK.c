
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* time_cb_data; int time_cb; } ;
typedef int TS_time_cb ;
typedef TYPE_1__ TS_RESP_CTX ;



void FUNC_0(TS_RESP_CTX *VAR_0, TS_time_cb VAR_1, void *VAR_2)
{
    VAR_0->time_cb = VAR_1;
    VAR_0->time_cb_data = VAR_2;
}
