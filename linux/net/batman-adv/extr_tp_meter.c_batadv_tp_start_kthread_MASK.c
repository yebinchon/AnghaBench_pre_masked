
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct task_struct {int dummy; } ;
struct batadv_tp_vars {int other_end; int icmp_uid; int session; int refcount; struct batadv_priv* bat_priv; } ;
struct batadv_priv {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct task_struct*) ;
 int FUNC_1 (int ,int ,struct batadv_priv*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct batadv_priv*,struct batadv_tp_vars*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct batadv_tp_vars*) ;
 int FUNC_5 (int *) ;
 struct task_struct* FUNC_6 (int ,struct batadv_tp_vars*,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct task_struct*) ;

__attribute__((used)) static void FUNC_9(struct batadv_tp_vars *VAR_2)
{
 struct task_struct *VAR_3;
 struct batadv_priv *VAR_4 = VAR_2->bat_priv;
 u32 VAR_5;

 FUNC_5(&VAR_2->refcount);
 VAR_3 = FUNC_6(VAR_1, VAR_2, "kbatadv_tp_meter");
 if (FUNC_0(VAR_3)) {
  VAR_5 = FUNC_3(VAR_2->session,
         VAR_2->icmp_uid);
  FUNC_7("batadv: cannot create tp meter kthread\n");
  FUNC_1(VAR_0,
           VAR_2->other_end,
           VAR_4, VAR_5);


  FUNC_4(VAR_2);


  FUNC_2(VAR_4, VAR_2);
  return;
 }

 FUNC_8(VAR_3);
}
