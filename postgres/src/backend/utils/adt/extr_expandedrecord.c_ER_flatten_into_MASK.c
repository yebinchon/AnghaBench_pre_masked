
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef TYPE_2__* TupleDesc ;
struct TYPE_17__ {scalar_t__ er_magic; int flags; scalar_t__ flat_size; int hoff; scalar_t__ hasnull; int data_len; int dnulls; int dvalues; int er_typmod; int er_typeid; TYPE_1__* fvalue; } ;
struct TYPE_16__ {int t_hoff; int * t_bits; int t_infomask; int t_ctid; } ;
struct TYPE_15__ {int natts; } ;
struct TYPE_14__ {scalar_t__ t_len; int t_data; } ;
typedef scalar_t__ Size ;
typedef TYPE_3__* HeapTupleHeader ;
typedef TYPE_4__ ExpandedRecordHeader ;
typedef int ExpandedObjectHeader ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_3__*,scalar_t__) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (int *) ;
 TYPE_2__* FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_2__*,int ,int ,char*,int ,int *,int *) ;
 int FUNC_8 (TYPE_3__*,int ,scalar_t__) ;
 int FUNC_9 (TYPE_3__*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_10(ExpandedObjectHeader *VAR_3,
    void *VAR_4, Size VAR_5)
{
 ExpandedRecordHeader *VAR_6 = (ExpandedRecordHeader *) VAR_3;
 HeapTupleHeader VAR_7 = (HeapTupleHeader) VAR_4;
 TupleDesc VAR_8;

 FUNC_0(VAR_6->er_magic == VAR_2);


 if (VAR_6->flags & VAR_0 &&
  !(VAR_6->flags & VAR_1))
 {
  FUNC_0(VAR_5 == VAR_6->fvalue->t_len);
  FUNC_8(VAR_7, VAR_6->fvalue->t_data, VAR_5);

  FUNC_1(VAR_7, VAR_5);
  FUNC_4(VAR_7, VAR_6->er_typeid);
  FUNC_3(VAR_7, VAR_6->er_typmod);
  return;
 }


 FUNC_0(VAR_5 == VAR_6->flat_size);


 VAR_8 = FUNC_6(VAR_6);


 FUNC_9(VAR_7, 0, VAR_5);


 FUNC_1(VAR_7, VAR_5);
 FUNC_4(VAR_7, VAR_6->er_typeid);
 FUNC_3(VAR_7, VAR_6->er_typmod);

 FUNC_5(&(VAR_7->t_ctid));

 FUNC_2(VAR_7, VAR_8->natts);
 VAR_7->t_hoff = VAR_6->hoff;


 FUNC_7(VAR_8,
     VAR_6->dvalues,
     VAR_6->dnulls,
     (char *) VAR_7 + VAR_6->hoff,
     VAR_6->data_len,
     &VAR_7->t_infomask,
     (VAR_6->hasnull ? VAR_7->t_bits : ((void*)0)));
}
