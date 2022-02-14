
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_16__ ;
typedef struct TYPE_17__ TYPE_15__ ;


typedef int uint32 ;
typedef int float8 ;
typedef int binaryheap ;
typedef int WritebackContext ;
struct TYPE_19__ {scalar_t__ spcNode; int relNode; } ;
struct TYPE_20__ {int blockNum; int forkNum; TYPE_1__ rnode; } ;
struct TYPE_23__ {int state; TYPE_2__ tag; } ;
struct TYPE_22__ {int buf_id; scalar_t__ tsId; int blockNum; int forkNum; int relNode; } ;
struct TYPE_21__ {int index; int num_to_scan; int progress_slice; scalar_t__ num_scanned; int progress; scalar_t__ tsId; } ;
struct TYPE_18__ {int m_buf_written_checkpoints; } ;
struct TYPE_17__ {int ckpt_bufs_written; } ;
typedef int Size ;
typedef scalar_t__ Oid ;
typedef TYPE_3__ CkptTsStatus ;
typedef TYPE_4__ CkptSortItem ;
typedef TYPE_5__ BufferDesc ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_16__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_15__ VAR_8 ;
 int FUNC_1 (int,double) ;
 TYPE_4__* VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_5__* FUNC_3 (int) ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_5__*) ;
 int VAR_12 ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int,int *) ;
 int FUNC_9 (int,int,int) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (TYPE_5__*,int) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *,int ) ;
 int * FUNC_15 (int,int ,int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_22 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_23 (int) ;
 int FUNC_24 (TYPE_3__*) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (TYPE_4__*,int,int,int ) ;
 scalar_t__ FUNC_27 (TYPE_3__*,int) ;
 int VAR_15 ;

__attribute__((used)) static void
FUNC_28(int VAR_16)
{
 uint32 VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22;
 CkptTsStatus *VAR_23 = ((void*)0);
 Oid VAR_24;
 binaryheap *VAR_25;
 int VAR_26;
 int VAR_27 = VAR_1;
 WritebackContext VAR_28;


 FUNC_7(VAR_10);






 if (!((VAR_16 & (VAR_7 | VAR_5 |
     VAR_6))))
  VAR_27 |= VAR_2;
 VAR_19 = 0;
 for (VAR_18 = 0; VAR_18 < VAR_12; VAR_18++)
 {
  BufferDesc *VAR_29 = FUNC_3(VAR_18);





  VAR_17 = FUNC_5(VAR_29);

  if ((VAR_17 & VAR_27) == VAR_27)
  {
   CkptSortItem *VAR_30;

   VAR_17 |= VAR_0;

   VAR_30 = &VAR_9[VAR_19++];
   VAR_30->buf_id = VAR_18;
   VAR_30->tsId = VAR_29->tag.rnode.spcNode;
   VAR_30->relNode = VAR_29->tag.rnode.relNode;
   VAR_30->forkNum = VAR_29->tag.forkNum;
   VAR_30->blockNum = VAR_29->tag.blockNum;
  }

  FUNC_12(VAR_29, VAR_17);
 }

 if (VAR_19 == 0)
  return;

 FUNC_13(&VAR_28, &VAR_13);

 FUNC_10(VAR_12, VAR_19);
 FUNC_26(VAR_9, VAR_19, sizeof(CkptSortItem),
    VAR_14);

 VAR_20 = 0;





 VAR_24 = VAR_11;
 for (VAR_26 = 0; VAR_26 < VAR_19; VAR_26++)
 {
  CkptTsStatus *VAR_31;
  Oid VAR_32;

  VAR_32 = VAR_9[VAR_26].tsId;





  if (VAR_24 == VAR_11 || VAR_24 != VAR_32)
  {
   Size VAR_33;

   VAR_20++;





   VAR_33 = sizeof(CkptTsStatus) * VAR_20;

   if (VAR_23 == ((void*)0))
    VAR_23 = (CkptTsStatus *) FUNC_23(VAR_33);
   else
    VAR_23 = (CkptTsStatus *) FUNC_27(VAR_23, VAR_33);

   VAR_31 = &VAR_23[VAR_20 - 1];
   FUNC_22(VAR_31, 0, sizeof(*VAR_31));
   VAR_31->tsId = VAR_32;






   VAR_31->index = VAR_26;






   VAR_24 = VAR_32;
  }
  else
  {
   VAR_31 = &VAR_23[VAR_20 - 1];
  }

  VAR_31->num_to_scan++;
 }

 FUNC_0(VAR_20 > 0);






 VAR_25 = FUNC_15(VAR_20,
          VAR_15,
          ((void*)0));

 for (VAR_26 = 0; VAR_26 < VAR_20; VAR_26++)
 {
  CkptTsStatus *VAR_34 = &VAR_23[VAR_26];

  VAR_34->progress_slice = (float8) VAR_19 / VAR_34->num_to_scan;

  FUNC_14(VAR_25, FUNC_6(VAR_34));
 }

 FUNC_16(VAR_25);







 VAR_21 = 0;
 VAR_22 = 0;
 while (!FUNC_17(VAR_25))
 {
  BufferDesc *VAR_35 = ((void*)0);
  CkptTsStatus *VAR_36 = (CkptTsStatus *)
  FUNC_2(FUNC_18(VAR_25));

  VAR_18 = VAR_9[VAR_36->index].buf_id;
  FUNC_0(VAR_18 != -1);

  VAR_35 = FUNC_3(VAR_18);

  VAR_21++;
  if (FUNC_25(&VAR_35->state) & VAR_0)
  {
   if (FUNC_8(VAR_18, 0, &VAR_28) & VAR_3)
   {
    FUNC_11(VAR_18);
    VAR_4.m_buf_written_checkpoints++;
    VAR_22++;
   }
  }





  VAR_36->progress += VAR_36->progress_slice;
  VAR_36->num_scanned++;
  VAR_36->index++;


  if (VAR_36->num_scanned == VAR_36->num_to_scan)
  {
   FUNC_20(VAR_25);
  }
  else
  {

   FUNC_21(VAR_25, FUNC_6(VAR_36));
  }




  FUNC_1(VAR_16, (double) VAR_21 / VAR_19);
 }


 FUNC_4(&VAR_28);

 FUNC_24(VAR_23);
 VAR_23 = ((void*)0);
 FUNC_19(VAR_25);





 VAR_8.ckpt_bufs_written += VAR_22;

 FUNC_9(VAR_12, VAR_22, VAR_19);
}
