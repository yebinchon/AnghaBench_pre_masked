
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_20__ {int rd_smgr; int rd_node; TYPE_1__* rd_rel; } ;
struct TYPE_19__ {scalar_t__ t_len; int t_self; TYPE_2__* t_data; } ;
struct TYPE_18__ {int t_ctid; } ;
struct TYPE_17__ {int rs_buffer_valid; int rs_blockno; TYPE_9__* rs_new_rel; scalar_t__ rs_use_wal; scalar_t__ rs_buffer; } ;
struct TYPE_16__ {int t_ctid; } ;
struct TYPE_15__ {scalar_t__ relkind; } ;
typedef scalar_t__ Size ;
typedef TYPE_3__* RewriteState ;
typedef scalar_t__ Page ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemId ;
typedef int Item ;
typedef TYPE_4__* HeapTupleHeader ;
typedef TYPE_5__* HeapTuple ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_5 (scalar_t__,int ,scalar_t__,scalar_t__,int,int) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;
 int FUNC_9 (scalar_t__,int ,int ) ;
 int FUNC_10 (scalar_t__,int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_11 (TYPE_9__*,int ) ;
 int FUNC_12 (TYPE_9__*) ;
 scalar_t__ VAR_11 ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char*,scalar_t__,scalar_t__) ;
 int FUNC_17 (TYPE_5__*) ;
 TYPE_5__* FUNC_18 (TYPE_9__*,TYPE_5__*,int *,int) ;
 int FUNC_19 (int *,int ,int ,scalar_t__,int) ;
 int FUNC_20 (int ,int ,int ,char*,int) ;

__attribute__((used)) static void
FUNC_21(RewriteState VAR_12, HeapTuple VAR_13)
{
 Page VAR_14 = VAR_12->rs_buffer;
 Size VAR_15,
    VAR_16;
 Size VAR_17;
 OffsetNumber VAR_18;
 HeapTuple VAR_19;
 if (VAR_12->rs_new_rel->rd_rel->relkind == VAR_10)
 {

  FUNC_0(!FUNC_1(VAR_13));
  VAR_19 = VAR_13;
 }
 else if (FUNC_1(VAR_13) || VAR_13->t_len > VAR_11)
 {
  int VAR_20 = VAR_5;

  if (!VAR_12->rs_use_wal)
   VAR_20 |= VAR_6;






  VAR_20 |= VAR_4;

  VAR_19 = FUNC_18(VAR_12->rs_new_rel, VAR_13, ((void*)0),
             VAR_20);
 }
 else
  VAR_19 = VAR_13;

 VAR_17 = FUNC_4(VAR_19->t_len);




 if (VAR_17 > VAR_9)
  FUNC_14(VAR_2,
    (FUNC_15(VAR_1),
     FUNC_16("row is too big: size %zu, maximum size %zu",
      VAR_17, VAR_9)));


 VAR_16 = FUNC_11(VAR_12->rs_new_rel,
               VAR_3);


 if (VAR_12->rs_buffer_valid)
 {
  VAR_15 = FUNC_6(VAR_14);

  if (VAR_17 + VAR_16 > VAR_15)
  {



   if (VAR_12->rs_use_wal)
    FUNC_19(&VAR_12->rs_new_rel->rd_node,
       VAR_8,
       VAR_12->rs_blockno,
       VAR_14,
       1);






   FUNC_12(VAR_12->rs_new_rel);

   FUNC_10(VAR_14, VAR_12->rs_blockno);

   FUNC_20(VAR_12->rs_new_rel->rd_smgr, VAR_8,
        VAR_12->rs_blockno, (char *) VAR_14, 1);

   VAR_12->rs_blockno++;
   VAR_12->rs_buffer_valid = 0;
  }
 }

 if (!VAR_12->rs_buffer_valid)
 {

  FUNC_9(VAR_14, VAR_0, 0);
  VAR_12->rs_buffer_valid = 1;
 }


 VAR_18 = FUNC_5(VAR_14, (Item) VAR_19->t_data, VAR_19->t_len,
       VAR_7, 0, 1);
 if (VAR_18 == VAR_7)
  FUNC_13(VAR_2, "failed to add tuple");


 FUNC_3(&(VAR_13->t_self), VAR_12->rs_blockno, VAR_18);





 if (!FUNC_2(&VAR_13->t_data->t_ctid))
 {
  ItemId VAR_21;
  HeapTupleHeader VAR_22;

  VAR_21 = FUNC_8(VAR_14, VAR_18);
  VAR_22 = (HeapTupleHeader) FUNC_7(VAR_14, VAR_21);

  VAR_22->t_ctid = VAR_13->t_self;
 }


 if (VAR_19 != VAR_13)
  FUNC_17(VAR_19);
}
