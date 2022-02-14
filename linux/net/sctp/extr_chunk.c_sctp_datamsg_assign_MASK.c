
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_datamsg {int dummy; } ;
struct sctp_chunk {struct sctp_datamsg* msg; } ;


 int FUNC_0 (struct sctp_datamsg*) ;

__attribute__((used)) static void FUNC_1(struct sctp_datamsg *VAR_0, struct sctp_chunk *VAR_1)
{
 FUNC_0(VAR_0);
 VAR_1->msg = VAR_0;
}
