
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * last_run_head; int * fragments_tail; int rb_fragments; scalar_t__ meat; scalar_t__ len; scalar_t__ flags; TYPE_2__* fqdir; int refcnt; int timer; } ;
struct ipq {scalar_t__ ecn; scalar_t__ iif; TYPE_1__ q; } ;
struct TYPE_4__ {scalar_t__ timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct ipq *VAR_3)
{
 unsigned int VAR_4 = 0;

 if (!FUNC_1(&VAR_3->q.timer, VAR_2 + VAR_3->q.fqdir->timeout)) {
  FUNC_2(&VAR_3->q.refcnt);
  return -VAR_0;
 }

 VAR_4 = FUNC_0(&VAR_3->q.rb_fragments);
 FUNC_3(VAR_3->q.fqdir, VAR_4);

 VAR_3->q.flags = 0;
 VAR_3->q.len = 0;
 VAR_3->q.meat = 0;
 VAR_3->q.rb_fragments = VAR_1;
 VAR_3->q.fragments_tail = ((void*)0);
 VAR_3->q.last_run_head = ((void*)0);
 VAR_3->iif = 0;
 VAR_3->ecn = 0;

 return 0;
}
