
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_transport {scalar_t__ burst_limited; scalar_t__ cwnd; } ;



void FUNC_0(struct sctp_transport *VAR_0)
{
 if (VAR_0->burst_limited) {
  VAR_0->cwnd = VAR_0->burst_limited;
  VAR_0->burst_limited = 0;
 }
}
