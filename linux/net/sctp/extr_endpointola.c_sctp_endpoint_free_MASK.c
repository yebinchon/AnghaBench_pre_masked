
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dead; int sk; } ;
struct sctp_endpoint {TYPE_1__ base; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sctp_endpoint*) ;
 int FUNC_2 (struct sctp_endpoint*) ;

void FUNC_3(struct sctp_endpoint *VAR_1)
{
 VAR_1->base.dead = 1;

 FUNC_0(VAR_1->base.sk, VAR_0);


 FUNC_2(VAR_1);

 FUNC_1(VAR_1);
}
