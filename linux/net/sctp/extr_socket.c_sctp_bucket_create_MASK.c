
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_bind_hashbucket {int chain; } ;
struct sctp_bind_bucket {unsigned short port; int node; struct net* net; int owner; scalar_t__ fastreuse; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int *) ;
 struct sctp_bind_bucket* FUNC_3 (int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static struct sctp_bind_bucket *FUNC_4(
 struct sctp_bind_hashbucket *VAR_3, struct net *VAR_4, unsigned short VAR_5)
{
 struct sctp_bind_bucket *VAR_6;

 VAR_6 = FUNC_3(VAR_2, VAR_0);
 if (VAR_6) {
  FUNC_1(VAR_1);
  VAR_6->port = VAR_5;
  VAR_6->fastreuse = 0;
  FUNC_0(&VAR_6->owner);
  VAR_6->net = VAR_4;
  FUNC_2(&VAR_6->node, &VAR_3->chain);
 }
 return VAR_6;
}
