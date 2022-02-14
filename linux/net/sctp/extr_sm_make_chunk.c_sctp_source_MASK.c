
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union sctp_addr {int dummy; } sctp_addr ;
struct sctp_chunk {union sctp_addr const source; TYPE_1__* transport; } ;
struct TYPE_2__ {union sctp_addr const ipaddr; } ;



const union sctp_addr *FUNC_0(const struct sctp_chunk *VAR_0)
{

 if (VAR_0->transport) {
  return &VAR_0->transport->ipaddr;
 } else {

  return &VAR_0->source;
 }
}
