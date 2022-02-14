
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sin_port; } ;
union sctp_addr {TYPE_1__ v4; } ;
struct TYPE_6__ {int port; } ;
struct TYPE_5__ {int sk; TYPE_3__ bind_addr; } ;
struct sctp_endpoint {TYPE_2__ base; } ;
struct net {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,struct net*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,union sctp_addr const*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

struct sctp_endpoint *FUNC_5(struct sctp_endpoint *VAR_0,
            struct net *VAR_1,
            const union sctp_addr *VAR_2)
{
 struct sctp_endpoint *VAR_3 = ((void*)0);

 if ((FUNC_0(VAR_0->base.bind_addr.port) == VAR_2->v4.sin_port) &&
     FUNC_1(FUNC_4(VAR_0->base.sk), VAR_1)) {
  if (FUNC_2(&VAR_0->base.bind_addr, VAR_2,
      FUNC_3(VAR_0->base.sk)))
   VAR_3 = VAR_0;
 }

 return VAR_3;
}
