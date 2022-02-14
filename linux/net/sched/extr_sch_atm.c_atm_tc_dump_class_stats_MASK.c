
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gnet_dump {int dummy; } ;
struct atm_flow_data {TYPE_2__* q; int qstats; int bstats; } ;
struct Qdisc {int dummy; } ;
struct TYPE_3__ {int qlen; } ;
struct TYPE_4__ {TYPE_1__ q; } ;


 scalar_t__ FUNC_0 (int ,struct gnet_dump*,int *,int *) ;
 scalar_t__ FUNC_1 (struct gnet_dump*,int *,int *,int ) ;
 int FUNC_2 (struct Qdisc*) ;

__attribute__((used)) static int
FUNC_3(struct Qdisc *VAR_0, unsigned long VAR_1,
   struct gnet_dump *VAR_2)
{
 struct atm_flow_data *VAR_3 = (struct atm_flow_data *)VAR_1;

 if (FUNC_0(FUNC_2(VAR_0),
      VAR_2, ((void*)0), &VAR_3->bstats) < 0 ||
     FUNC_1(VAR_2, ((void*)0), &VAR_3->qstats, VAR_3->q->q.qlen) < 0)
  return -1;

 return 0;
}
