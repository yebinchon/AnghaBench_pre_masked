
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcu_head {int * next; scalar_t__ func; } ;
struct rcu_data {int cblist; } ;
typedef scalar_t__ rcu_callback_t ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,char*,struct rcu_head*,scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (struct rcu_data*,struct rcu_head*,unsigned long) ;
 int FUNC_5 (struct rcu_data*,int,unsigned long) ;
 scalar_t__ FUNC_6 (unsigned long) ;
 scalar_t__ FUNC_7 (struct rcu_head*) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (unsigned long) ;
 int VAR_2 ;
 int FUNC_10 () ;
 int VAR_3 ;
 scalar_t__ FUNC_11 (struct rcu_data*,struct rcu_head*,int*,unsigned long) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *,struct rcu_head*,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 TYPE_1__ VAR_5 ;
 struct rcu_data* FUNC_19 (int *) ;
 int FUNC_20 (int ,struct rcu_head*,int ,int ) ;
 int FUNC_21 (int ,struct rcu_head*,unsigned long,int ,int ) ;
 scalar_t__ FUNC_22 (int) ;

__attribute__((used)) static void
FUNC_23(struct rcu_head *VAR_6, rcu_callback_t VAR_7, bool VAR_8)
{
 unsigned long VAR_9;
 struct rcu_data *VAR_10;
 bool VAR_11;


 FUNC_2((unsigned long)VAR_6 & (sizeof(void *) - 1));

 if (FUNC_7(VAR_6)) {





  FUNC_1(1, "__call_rcu(): Double-freed CB %p->%pS()!!!\n",
     VAR_6, VAR_6->func);
  FUNC_3(VAR_6->func, VAR_3);
  return;
 }
 VAR_6->func = VAR_7;
 VAR_6->next = ((void*)0);
 FUNC_9(VAR_9);
 VAR_10 = FUNC_19(&VAR_2);


 if (FUNC_22(!FUNC_15(&VAR_10->cblist))) {

  FUNC_2(VAR_4 != VAR_1);
  FUNC_2(!FUNC_10());


  if (FUNC_12(&VAR_10->cblist))
   FUNC_14(&VAR_10->cblist);
 }
 if (FUNC_11(VAR_10, VAR_6, &VAR_11, VAR_9))
  return;

 FUNC_13(&VAR_10->cblist, VAR_6, VAR_8);
 if (FUNC_6((unsigned long)VAR_7))
  FUNC_21(VAR_5.name, VAR_6,
      (unsigned long)VAR_7,
      FUNC_18(&VAR_10->cblist),
      FUNC_17(&VAR_10->cblist));
 else
  FUNC_20(VAR_5.name, VAR_6,
       FUNC_18(&VAR_10->cblist),
       FUNC_17(&VAR_10->cblist));


 if (FUNC_0(VAR_0) &&
     FUNC_22(FUNC_16(&VAR_10->cblist))) {
  FUNC_5(VAR_10, VAR_11, VAR_9);
 } else {
  FUNC_4(VAR_10, VAR_6, VAR_9);
  FUNC_8(VAR_9);
 }
}
