
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int done_cv; int start_cv; int max_requests; int ckpt_lck; } ;
typedef int Size ;
typedef TYPE_1__ CheckpointerShmemStruct ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (char*,int ,int*) ;
 int FUNC_4 (int *) ;

void
FUNC_5(void)
{
 Size VAR_2 = FUNC_0();
 bool VAR_3;

 VAR_0 = (CheckpointerShmemStruct *)
  FUNC_3("Checkpointer Data",
      VAR_2,
      &VAR_3);

 if (!VAR_3)
 {





  FUNC_2(VAR_0, 0, VAR_2);
  FUNC_4(&VAR_0->ckpt_lck);
  VAR_0->max_requests = VAR_1;
  FUNC_1(&VAR_0->start_cv);
  FUNC_1(&VAR_0->done_cv);
 }
}
