
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int bind_addr; TYPE_5__* sk; } ;
struct TYPE_9__ {scalar_t__ ipv6_address; scalar_t__ ipv4_address; } ;
struct sctp_association {TYPE_2__* ep; TYPE_3__ base; TYPE_4__ peer; } ;
typedef int gfp_t ;
typedef enum sctp_scope { ____Placeholder_sctp_scope } sctp_scope ;
struct TYPE_10__ {scalar_t__ sk_family; } ;
struct TYPE_6__ {int bind_addr; } ;
struct TYPE_7__ {TYPE_1__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,int *,int,int ,int) ;
 int FUNC_1 (TYPE_5__*) ;

int FUNC_2(struct sctp_association *VAR_4,
         enum sctp_scope VAR_5, gfp_t VAR_6)
{
 int VAR_7;




 VAR_7 = (VAR_0 == VAR_4->base.sk->sk_family) ? VAR_2 : 0;
 if (VAR_4->peer.ipv4_address)
  VAR_7 |= VAR_1;
 if (VAR_4->peer.ipv6_address)
  VAR_7 |= VAR_3;

 return FUNC_0(FUNC_1(VAR_4->base.sk),
       &VAR_4->base.bind_addr,
       &VAR_4->ep->base.bind_addr,
       VAR_5, VAR_6, VAR_7);
}
