
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_6__ {scalar_t__ dead; } ;
struct sctp_association {int asocs; TYPE_2__ base; TYPE_1__* ep; } ;
struct TYPE_8__ {TYPE_3__* ep; } ;
struct TYPE_7__ {int asocs; } ;
struct TYPE_5__ {scalar_t__ sndbuf_policy; } ;


 void FUNC_0 (struct sctp_association*) ;
 int VAR_0 ;
 struct sctp_association* FUNC_1 (struct sctp_association*,int ) ;
 TYPE_4__* FUNC_2 (struct sock*) ;
 void FUNC_3 (struct sock*) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_1,
     struct sctp_association *VAR_2)
{
 struct sctp_association *VAR_3 = VAR_2;




 if (VAR_2->ep->sndbuf_policy)
  return FUNC_0(VAR_2);




 if (VAR_2->base.dead)
  return FUNC_3(VAR_1);
 for (VAR_3 = FUNC_1(VAR_3, VAR_0); 1;
      VAR_3 = FUNC_1(VAR_3, VAR_0)) {

  if (&VAR_3->asocs == &((FUNC_2(VAR_1))->ep->asocs))
   continue;

  FUNC_0(VAR_3);

  if (VAR_3 == VAR_2)
   break;
 }
}
