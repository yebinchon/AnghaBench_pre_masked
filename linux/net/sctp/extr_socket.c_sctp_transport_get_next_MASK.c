
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sctp_transport {TYPE_3__* asoc; } ;
struct rhashtable_iter {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_5__ {struct sctp_transport* primary_path; } ;
struct TYPE_4__ {int sk; } ;
struct TYPE_6__ {TYPE_2__ peer; TYPE_1__ base; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sctp_transport*) ;
 int FUNC_1 (struct sctp_transport*) ;
 scalar_t__ FUNC_2 (int ,struct net*) ;
 struct sctp_transport* FUNC_3 (struct rhashtable_iter*) ;
 int FUNC_4 (struct sctp_transport*) ;
 int FUNC_5 (struct sctp_transport*) ;
 int FUNC_6 (int ) ;

struct sctp_transport *FUNC_7(struct net *VAR_1,
            struct rhashtable_iter *VAR_2)
{
 struct sctp_transport *VAR_3;

 VAR_3 = FUNC_3(VAR_2);
 for (; VAR_3; VAR_3 = FUNC_3(VAR_2)) {
  if (FUNC_0(VAR_3)) {
   if (FUNC_1(VAR_3) == -VAR_0)
    continue;
   break;
  }

  if (!FUNC_4(VAR_3))
   continue;

  if (FUNC_2(FUNC_6(VAR_3->asoc->base.sk), VAR_1) &&
      VAR_3->asoc->peer.primary_path == VAR_3)
   break;

  FUNC_5(VAR_3);
 }

 return VAR_3;
}
