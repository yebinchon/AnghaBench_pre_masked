
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct user_namespace {int dummy; } ;
struct ucounts {int dummy; } ;
struct TYPE_2__ {int * ops; } ;
struct pid_namespace {int level; int idr; int proc_work; int pid_allocated; struct ucounts* ucounts; int user_ns; int parent; int kref; TYPE_1__ ns; int * pid_cachep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pid_namespace* FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int * FUNC_2 (unsigned int) ;
 int FUNC_3 (struct ucounts*) ;
 int FUNC_4 (struct pid_namespace*) ;
 int FUNC_5 (struct user_namespace*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,struct user_namespace*) ;
 struct ucounts* FUNC_9 (struct user_namespace*) ;
 int FUNC_10 (int ,struct pid_namespace*) ;
 struct pid_namespace* FUNC_11 (int ,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static struct pid_namespace *FUNC_14(struct user_namespace *VAR_9,
 struct pid_namespace *VAR_10)
{
 struct pid_namespace *VAR_11;
 unsigned int VAR_12 = VAR_10->level + 1;
 struct ucounts *VAR_13;
 int VAR_14;

 VAR_14 = -VAR_0;
 if (!FUNC_8(VAR_10->user_ns, VAR_9))
  goto out;

 VAR_14 = -VAR_2;
 if (VAR_12 > VAR_4)
  goto out;
 VAR_13 = FUNC_9(VAR_9);
 if (!VAR_13)
  goto out;

 VAR_14 = -VAR_1;
 VAR_11 = FUNC_11(VAR_6, VAR_3);
 if (VAR_11 == ((void*)0))
  goto out_dec;

 FUNC_7(&VAR_11->idr);

 VAR_11->pid_cachep = FUNC_2(VAR_12);
 if (VAR_11->pid_cachep == ((void*)0))
  goto out_free_idr;

 VAR_14 = FUNC_13(&VAR_11->ns);
 if (VAR_14)
  goto out_free_idr;
 VAR_11->ns.ops = &VAR_7;

 FUNC_12(&VAR_11->kref);
 VAR_11->level = VAR_12;
 VAR_11->parent = FUNC_4(VAR_10);
 VAR_11->user_ns = FUNC_5(VAR_9);
 VAR_11->ucounts = VAR_13;
 VAR_11->pid_allocated = VAR_5;
 FUNC_1(&VAR_11->proc_work, VAR_8);

 return VAR_11;

out_free_idr:
 FUNC_6(&VAR_11->idr);
 FUNC_10(VAR_6, VAR_11);
out_dec:
 FUNC_3(VAR_13);
out:
 return FUNC_0(VAR_14);
}
