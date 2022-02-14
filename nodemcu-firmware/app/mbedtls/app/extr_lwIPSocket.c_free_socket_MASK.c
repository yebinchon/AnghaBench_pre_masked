
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ send_index; int * send_buffer; scalar_t__ recv_index; scalar_t__ recv_data_len; int * conn; } ;
typedef TYPE_1__ lwIP_sock ;



__attribute__((used)) static void FUNC_0(lwIP_sock *VAR_0)
{
    void *VAR_1 = ((void*)0);
    VAR_0->conn = ((void*)0);
    VAR_0->recv_data_len = 0;
    VAR_0->recv_index = 0;
    VAR_0->send_buffer = ((void*)0);
    VAR_0->send_index = 0;
}
