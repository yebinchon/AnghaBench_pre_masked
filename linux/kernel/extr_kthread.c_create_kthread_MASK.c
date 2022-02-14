
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kthread_create_info {int result; int done; int node; } ;
struct completion {int dummy; } ;
struct TYPE_2__ {int pref_node_fork; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct completion*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int ,struct kthread_create_info*,int) ;
 int FUNC_3 (struct kthread_create_info*) ;
 int VAR_4 ;
 struct completion* FUNC_4 (int *,int *) ;

__attribute__((used)) static void FUNC_5(struct kthread_create_info *VAR_5)
{
 int VAR_6;





 VAR_6 = FUNC_2(VAR_4, VAR_5, VAR_1 | VAR_0 | VAR_2);
 if (VAR_6 < 0) {

  struct completion *VAR_7 = FUNC_4(&VAR_5->done, ((void*)0));

  if (!VAR_7) {
   FUNC_3(VAR_5);
   return;
  }
  VAR_5->result = FUNC_0(VAR_6);
  FUNC_1(VAR_7);
 }
}
