
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int dummy; } ;
struct rsvp_filter {int rwork; int exts; int res; } ;


 int FUNC_0 (struct rsvp_filter*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct tcf_proto*,int *) ;

__attribute__((used)) static void FUNC_4(struct tcf_proto *VAR_1, struct rsvp_filter *VAR_2)
{
 FUNC_3(VAR_1, &VAR_2->res);




 if (FUNC_1(&VAR_2->exts))
  FUNC_2(&VAR_2->rwork, VAR_0);
 else
  FUNC_0(VAR_2);
}
