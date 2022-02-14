
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct worker_pool {int cpu; int id; int worker_ida; int lock; TYPE_1__* attrs; int node; } ;
struct worker {int id; int task; TYPE_2__* pool; } ;
typedef int id_buf ;
struct TYPE_4__ {int nr_workers; } ;
struct TYPE_3__ {scalar_t__ nice; int cpumask; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 struct worker* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct worker*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,struct worker*,int ,char*,char*) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (char*,int,char*,int,int,...) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct worker*,struct worker_pool*) ;
 int FUNC_13 (struct worker*) ;
 int VAR_1 ;

__attribute__((used)) static struct worker *FUNC_14(struct worker_pool *VAR_2)
{
 struct worker *VAR_3 = ((void*)0);
 int VAR_4 = -1;
 char VAR_5[16];


 VAR_4 = FUNC_2(&VAR_2->worker_ida, 0, 0, VAR_0);
 if (VAR_4 < 0)
  goto fail;

 VAR_3 = FUNC_1(VAR_2->node);
 if (!VAR_3)
  goto fail;

 VAR_3->id = VAR_4;

 if (VAR_2->cpu >= 0)
  FUNC_8(VAR_5, sizeof(VAR_5), "%d:%d%s", VAR_2->cpu, VAR_4,
    VAR_2->attrs->nice < 0 ? "H" : "");
 else
  FUNC_8(VAR_5, sizeof(VAR_5), "u%d:%d", VAR_2->id, VAR_4);

 VAR_3->task = FUNC_6(VAR_1, VAR_3, VAR_2->node,
           "kworker/%s", VAR_5);
 if (FUNC_0(VAR_3->task))
  goto fail;

 FUNC_7(VAR_3->task, VAR_2->attrs->nice);
 FUNC_5(VAR_3->task, VAR_2->attrs->cpumask);


 FUNC_12(VAR_3, VAR_2);


 FUNC_9(&VAR_2->lock);
 VAR_3->pool->nr_workers++;
 FUNC_13(VAR_3);
 FUNC_11(VAR_3->task);
 FUNC_10(&VAR_2->lock);

 return VAR_3;

fail:
 if (VAR_4 >= 0)
  FUNC_3(&VAR_2->worker_ida, VAR_4);
 FUNC_4(VAR_3);
 return ((void*)0);
}
