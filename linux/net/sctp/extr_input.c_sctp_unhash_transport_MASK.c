
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_transport {int node; TYPE_1__* asoc; } ;
struct TYPE_2__ {scalar_t__ temp; } ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_1(struct sctp_transport *VAR_2)
{
 if (VAR_2->asoc->temp)
  return;

 FUNC_0(&VAR_1, &VAR_2->node,
   VAR_0);
}
