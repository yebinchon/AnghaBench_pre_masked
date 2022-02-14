
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_transport {int dummy; } ;
struct rhashtable_iter {int dummy; } ;
struct net {int dummy; } ;


 int FUNC_0 (struct sctp_transport*) ;
 struct sctp_transport* VAR_0 ;
 struct sctp_transport* FUNC_1 (struct net*,struct rhashtable_iter*) ;
 int FUNC_2 (struct sctp_transport*) ;

struct sctp_transport *FUNC_3(struct net *VAR_1,
           struct rhashtable_iter *VAR_2,
           int VAR_3)
{
 struct sctp_transport *VAR_4;

 if (!VAR_3)
  return VAR_0;

 while ((VAR_4 = FUNC_1(VAR_1, VAR_2)) && !FUNC_0(VAR_4)) {
  if (!--VAR_3)
   break;
  FUNC_2(VAR_4);
 }

 return VAR_4;
}
