
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct IndexFetchTableData {int rel; } ;
struct TYPE_13__ {int tts_tableOid; } ;
typedef TYPE_3__ TupleTableSlot ;
struct TYPE_16__ {int t_self; } ;
struct TYPE_12__ {TYPE_7__ tupdata; } ;
struct TYPE_15__ {TYPE_2__ base; } ;
struct TYPE_11__ {int rel; } ;
struct TYPE_14__ {scalar_t__ xs_cbuf; TYPE_1__ xs_base; } ;
typedef int Snapshot ;
typedef int * ItemPointer ;
typedef TYPE_4__ IndexFetchHeapData ;
typedef TYPE_5__ BufferHeapTupleTableSlot ;
typedef scalar_t__ Buffer ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_7__*,TYPE_3__*,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (scalar_t__,int ,int ) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int *,int ,scalar_t__,int ,TYPE_7__*,int*,int) ;
 int FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static bool
FUNC_10(struct IndexFetchTableData *VAR_2,
       ItemPointer VAR_3,
       Snapshot VAR_4,
       TupleTableSlot *VAR_5,
       bool *VAR_6, bool *VAR_7)
{
 IndexFetchHeapData *VAR_8 = (IndexFetchHeapData *) VAR_2;
 BufferHeapTupleTableSlot *VAR_9 = (BufferHeapTupleTableSlot *) VAR_5;
 bool VAR_10;

 FUNC_0(FUNC_7(VAR_5));


 if (!*VAR_6)
 {

  Buffer VAR_11 = VAR_8->xs_cbuf;

  VAR_8->xs_cbuf = FUNC_6(VAR_8->xs_cbuf,
             VAR_8->xs_base.rel,
             FUNC_3(VAR_3));




  if (VAR_11 != VAR_8->xs_cbuf)
   FUNC_9(VAR_8->xs_base.rel, VAR_8->xs_cbuf);
 }


 FUNC_4(VAR_8->xs_cbuf, VAR_0);
 VAR_10 = FUNC_8(VAR_3,
           VAR_8->xs_base.rel,
           VAR_8->xs_cbuf,
           VAR_4,
           &VAR_9->base.tupdata,
           VAR_7,
           !*VAR_6);
 VAR_9->base.tupdata.t_self = *VAR_3;
 FUNC_4(VAR_8->xs_cbuf, VAR_1);

 if (VAR_10)
 {




  *VAR_6 = !FUNC_2(VAR_4);

  VAR_5->tts_tableOid = FUNC_5(VAR_2->rel);
  FUNC_1(&VAR_9->base.tupdata, VAR_5, VAR_8->xs_cbuf);
 }
 else
 {

  *VAR_6 = 0;
 }

 return VAR_10;
}
