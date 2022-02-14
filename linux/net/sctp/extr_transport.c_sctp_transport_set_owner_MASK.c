
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_transport {struct sctp_association* asoc; } ;
struct sctp_association {int dummy; } ;


 int FUNC_0 (struct sctp_association*) ;

void FUNC_1(struct sctp_transport *VAR_0,
         struct sctp_association *VAR_1)
{
 VAR_0->asoc = VAR_1;
 FUNC_0(VAR_1);
}
