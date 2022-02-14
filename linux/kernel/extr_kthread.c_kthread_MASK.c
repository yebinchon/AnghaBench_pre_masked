
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct kthread_create_info {int (* threadfn ) (void*) ;TYPE_1__* result; int done; void* data; } ;
struct kthread {int flags; int exited; int parked; void* data; } ;
struct completion {int dummy; } ;
struct TYPE_3__ {int * vfork_done; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct kthread*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct completion*) ;
 TYPE_1__* VAR_5 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct kthread_create_info*) ;
 struct kthread* FUNC_8 (int,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (struct kthread*) ;
 int FUNC_11 (int ,int *) ;
 struct completion* FUNC_12 (int *,int *) ;

__attribute__((used)) static int FUNC_13(void *VAR_6)
{

 struct kthread_create_info *VAR_7 = VAR_6;
 int (*VAR_8)(void *VAR_9) = VAR_7->threadfn;
 void *VAR_10 = VAR_7->data;
 struct completion *VAR_11;
 struct kthread *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_8(sizeof(*VAR_12), VAR_2);
 FUNC_10(VAR_12);


 VAR_11 = FUNC_12(&VAR_7->done, ((void*)0));
 if (!VAR_11) {
  FUNC_7(VAR_7);
  FUNC_5(-VAR_0);
 }

 if (!VAR_12) {
  VAR_7->result = FUNC_0(-VAR_1);
  FUNC_4(VAR_11);
  FUNC_5(-VAR_1);
 }

 VAR_12->data = VAR_10;
 FUNC_6(&VAR_12->exited);
 FUNC_6(&VAR_12->parked);
 VAR_5->vfork_done = &VAR_12->exited;


 FUNC_2(VAR_4);
 VAR_7->result = VAR_5;
 FUNC_4(VAR_11);
 FUNC_9();

 VAR_13 = -VAR_0;
 if (!FUNC_11(VAR_3, &VAR_12->flags)) {
  FUNC_3();
  FUNC_1(VAR_12);
  VAR_13 = VAR_8(VAR_10);
 }
 FUNC_5(VAR_13);
}
