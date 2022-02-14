
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_transport {int rcu; scalar_t__ asoc; int packet; int refcnt; } ;


 int FUNC_0 (int,char*,struct sctp_transport*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct sctp_transport *VAR_1)
{
 if (FUNC_5(FUNC_2(&VAR_1->refcnt))) {
  FUNC_0(1, "Attempt to destroy undead transport %p!\n", VAR_1);
  return;
 }

 FUNC_4(&VAR_1->packet);

 if (VAR_1->asoc)
  FUNC_3(VAR_1->asoc);

 FUNC_1(&VAR_1->rcu, VAR_0);
}
