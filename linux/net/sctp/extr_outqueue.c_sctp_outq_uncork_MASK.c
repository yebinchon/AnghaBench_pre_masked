
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_outq {scalar_t__ cork; } ;
typedef int gfp_t ;


 int FUNC_0 (struct sctp_outq*,int ,int ) ;

void FUNC_1(struct sctp_outq *VAR_0, gfp_t VAR_1)
{
 if (VAR_0->cork)
  VAR_0->cork = 0;

 FUNC_0(VAR_0, 0, VAR_1);
}
