
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qfq_class {scalar_t__ deficit; int alist; TYPE_3__* qdisc; } ;
struct qfq_aggregate {scalar_t__ lmax; int active; } ;
struct TYPE_6__ {scalar_t__ qlen; } ;
struct TYPE_7__ {TYPE_1__* ops; TYPE_2__ q; } ;
struct TYPE_5__ {int (* peek ) (TYPE_3__*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_5(struct qfq_aggregate *VAR_0,
   struct qfq_class *VAR_1, unsigned int VAR_2)
{
 FUNC_2(VAR_1->qdisc);

 VAR_1->deficit -= (int) VAR_2;

 if (VAR_1->qdisc->q.qlen == 0)
  FUNC_0(&VAR_1->alist);
 else if (VAR_1->deficit < FUNC_3(VAR_1->qdisc->ops->peek(VAR_1->qdisc))) {
  VAR_1->deficit += VAR_0->lmax;
  FUNC_1(&VAR_1->alist, &VAR_0->active);
 }
}
