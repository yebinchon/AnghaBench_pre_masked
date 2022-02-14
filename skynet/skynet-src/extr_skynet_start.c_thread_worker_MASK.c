
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worker_parm {int id; int weight; struct monitor* m; } ;
struct skynet_monitor {int dummy; } ;
struct monitor {int mutex; int sleep; int cond; int quit; struct skynet_monitor** m; } ;
struct message_queue {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 struct message_queue* FUNC_5 (struct skynet_monitor*,struct message_queue*,int) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;

__attribute__((used)) static void *
FUNC_7(void *VAR_2) {
 struct worker_parm *VAR_3 = VAR_2;
 int VAR_4 = VAR_3->id;
 int VAR_5 = VAR_3->weight;
 struct monitor *VAR_6 = VAR_3->m;
 struct skynet_monitor *VAR_7 = VAR_6->m[VAR_4];
 FUNC_6(VAR_0);
 struct message_queue * VAR_8 = ((void*)0);
 while (!VAR_6->quit) {
  VAR_8 = FUNC_5(VAR_7, VAR_8, VAR_5);
  if (VAR_8 == ((void*)0)) {
   if (FUNC_3(&VAR_6->mutex) == 0) {
    ++ VAR_6->sleep;


    if (!VAR_6->quit)
     FUNC_2(&VAR_6->cond, &VAR_6->mutex);
    -- VAR_6->sleep;
    if (FUNC_4(&VAR_6->mutex)) {
     FUNC_1(VAR_1, "unlock mutex error");
     FUNC_0(1);
    }
   }
  }
 }
 return ((void*)0);
}
