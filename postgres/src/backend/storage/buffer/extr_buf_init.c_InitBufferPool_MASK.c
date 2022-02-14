
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int buf_id; int freeNext; scalar_t__ wait_backend_pid; int state; int tag; } ;
typedef int Size ;
typedef int LWLockMinimallyPadded ;
typedef int CkptSortItem ;
typedef int BufferDescPadded ;
typedef TYPE_1__ BufferDesc ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_3 (int ) ;
 int * VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_7 (char*,int,int*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,int *) ;
 int VAR_10 ;
 int FUNC_10 (int *,int ) ;

void
FUNC_11(void)
{
 bool VAR_11,
    VAR_12,
    VAR_13,
    VAR_14;


 VAR_3 = (BufferDescPadded *)
  FUNC_7("Buffer Descriptors",
      VAR_9 * sizeof(BufferDescPadded),
      &VAR_12);

 VAR_2 = (char *)
  FUNC_7("Buffer Blocks",
      VAR_9 * (Size) VAR_0, &VAR_11);


 VAR_4 = (LWLockMinimallyPadded *)
  FUNC_7("Buffer IO Locks",
      VAR_9 * (Size) sizeof(LWLockMinimallyPadded),
      &VAR_13);

 FUNC_6(VAR_8, "buffer_io");
 FUNC_6(VAR_7, "buffer_content");
 VAR_5 = (CkptSortItem *)
  FUNC_7("Checkpoint BufferIds",
      VAR_9 * sizeof(CkptSortItem), &VAR_14);

 if (VAR_12 || VAR_11 || VAR_13 || VAR_14)
 {

  FUNC_0(VAR_12 && VAR_11 && VAR_13 && VAR_14);

 }
 else
 {
  int VAR_15;




  for (VAR_15 = 0; VAR_15 < VAR_9; VAR_15++)
  {
   BufferDesc *VAR_16 = FUNC_4(VAR_15);

   FUNC_3(VAR_16->tag);

   FUNC_10(&VAR_16->state, 0);
   VAR_16->wait_backend_pid = 0;

   VAR_16->buf_id = VAR_15;





   VAR_16->freeNext = VAR_15 + 1;

   FUNC_5(FUNC_1(VAR_16),
        VAR_7);

   FUNC_5(FUNC_2(VAR_16),
        VAR_8);
  }


  FUNC_4(VAR_9 - 1)->freeNext = VAR_6;
 }


 FUNC_8(!VAR_12);


 FUNC_9(&VAR_1,
       &VAR_10);
}
