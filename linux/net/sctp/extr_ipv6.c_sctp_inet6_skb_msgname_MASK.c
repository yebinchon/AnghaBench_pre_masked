
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ sin6_scope_id; int sin6_addr; int sin6_port; scalar_t__ sin6_flowinfo; int sin6_family; } ;
struct TYPE_6__ {int s_addr; } ;
struct TYPE_7__ {TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
union sctp_addr {TYPE_3__ v6; TYPE_2__ v4; } ;
struct sk_buff {int sk; } ;
struct sctphdr {int source; } ;
struct TYPE_10__ {int version; int saddr; } ;
struct TYPE_9__ {int saddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *) ;
 TYPE_4__* FUNC_2 (struct sk_buff*) ;
 struct sctphdr* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,union sctp_addr*) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_7(struct sk_buff *VAR_3, char *VAR_4,
       int *VAR_5)
{
 union sctp_addr *VAR_6;
 struct sctphdr *VAR_7;

 if (!VAR_4)
  return;

 VAR_6 = (union sctp_addr *)VAR_4;
 VAR_7 = FUNC_3(VAR_3);

 if (FUNC_0(VAR_3)->version == 4) {
  VAR_6->v4.sin_family = VAR_0;
  VAR_6->v4.sin_port = VAR_7->source;
  VAR_6->v4.sin_addr.s_addr = FUNC_0(VAR_3)->saddr;
 } else {
  VAR_6->v6.sin6_family = VAR_1;
  VAR_6->v6.sin6_flowinfo = 0;
  VAR_6->v6.sin6_port = VAR_7->source;
  VAR_6->v6.sin6_addr = FUNC_2(VAR_3)->saddr;
  if (FUNC_1(&VAR_6->v6.sin6_addr) & VAR_2)
   VAR_6->v6.sin6_scope_id = FUNC_6(VAR_3);
  else
   VAR_6->v6.sin6_scope_id = 0;
 }

 *VAR_5 = FUNC_5(FUNC_4(VAR_3->sk), VAR_6);
}
