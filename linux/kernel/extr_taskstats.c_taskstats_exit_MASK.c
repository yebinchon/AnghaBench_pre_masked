
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct taskstats {int dummy; } ;
struct task_struct {TYPE_1__* signal; } ;
struct sk_buff {int dummy; } ;
struct listener_list {int list; } ;
struct TYPE_2__ {int stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,struct task_struct*,struct taskstats*) ;
 int FUNC_1 (struct task_struct*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_6 ;
 int FUNC_3 (struct taskstats*,int ,int) ;
 struct taskstats* FUNC_4 (struct sk_buff*,int ,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int *,int ,struct sk_buff**,size_t) ;
 struct listener_list* FUNC_7 (int *) ;
 int FUNC_8 (struct sk_buff*,struct listener_list*) ;
 int FUNC_9 (struct task_struct*,int *) ;
 int FUNC_10 (struct task_struct*,int *) ;
 size_t FUNC_11 () ;
 int FUNC_12 (struct task_struct*) ;

void FUNC_13(struct task_struct *VAR_7, int VAR_8)
{
 int VAR_9;
 struct listener_list *VAR_10;
 struct taskstats *VAR_11;
 struct sk_buff *VAR_12;
 size_t VAR_13;
 int VAR_14;

 if (!VAR_3)
  return;




 VAR_13 = FUNC_11();

 VAR_14 = !!FUNC_12(VAR_7);
 if (VAR_14) {

  VAR_13 = 2 * VAR_13;

  FUNC_1(VAR_7);
 }

 VAR_10 = FUNC_7(&VAR_6);
 if (FUNC_2(&VAR_10->list))
  return;

 VAR_9 = FUNC_6(((void*)0), VAR_0, &VAR_12, VAR_13);
 if (VAR_9 < 0)
  return;

 VAR_11 = FUNC_4(VAR_12, VAR_1,
    FUNC_9(VAR_7, &VAR_4));
 if (!VAR_11)
  goto err;

 FUNC_0(&VAR_5, &VAR_4, VAR_7, VAR_11);




 if (!VAR_14 || !VAR_8)
  goto send;

 VAR_11 = FUNC_4(VAR_12, VAR_2,
    FUNC_10(VAR_7, &VAR_4));
 if (!VAR_11)
  goto err;

 FUNC_3(VAR_11, VAR_7->signal->stats, sizeof(*VAR_11));

send:
 FUNC_8(VAR_12, VAR_10);
 return;
err:
 FUNC_5(VAR_12);
}
