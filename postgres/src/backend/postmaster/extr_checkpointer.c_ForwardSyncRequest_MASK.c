
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ checkpointer_pid; int num_requests; int max_requests; TYPE_1__* requests; int num_backend_fsync; int num_backend_writes; } ;
struct TYPE_5__ {scalar_t__ checkpointerLatch; } ;
struct TYPE_4__ {int type; int ftag; } ;
typedef int SyncRequestType ;
typedef int FileTag ;
typedef TYPE_1__ CheckpointerRequest ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,char*) ;

bool
FUNC_7(const FileTag *VAR_6, SyncRequestType VAR_7)
{
 CheckpointerRequest *VAR_8;
 bool VAR_9;

 if (!VAR_3)
  return 0;

 if (FUNC_1())
  FUNC_6(VAR_2, "ForwardSyncRequest must not be called in checkpointer");

 FUNC_3(VAR_0, VAR_4);


 if (!FUNC_0())
  VAR_1->num_backend_writes++;






 if (VAR_1->checkpointer_pid == 0 ||
  (VAR_1->num_requests >= VAR_1->max_requests &&
   !FUNC_2()))
 {




  if (!FUNC_0())
   VAR_1->num_backend_fsync++;
  FUNC_4(VAR_0);
  return 0;
 }


 VAR_8 = &VAR_1->requests[VAR_1->num_requests++];
 VAR_8->ftag = *VAR_6;
 VAR_8->type = VAR_7;


 VAR_9 = (VAR_1->num_requests >=
    VAR_1->max_requests / 2);

 FUNC_4(VAR_0);


 if (VAR_9 && VAR_5->checkpointerLatch)
  FUNC_5(VAR_5->checkpointerLatch);

 return 1;
}
