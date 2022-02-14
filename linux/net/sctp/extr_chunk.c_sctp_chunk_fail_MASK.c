
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_chunk {TYPE_1__* msg; } ;
struct TYPE_2__ {int send_failed; int send_error; } ;



void FUNC_0(struct sctp_chunk *VAR_0, int VAR_1)
{
 VAR_0->msg->send_failed = 1;
 VAR_0->msg->send_error = VAR_1;
}
