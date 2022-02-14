
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {char* fstartptr; char* fendptr; int hdr; int flags; TYPE_2__* fvalue; int er_typmod; int er_typeid; int er_decltypeid; int er_magic; } ;
struct TYPE_7__ {int t_len; scalar_t__ t_data; } ;
struct TYPE_6__ {int t_data; int t_tableOid; int t_self; int t_len; } ;
typedef int MemoryContext ;
typedef int HeapTupleHeader ;
typedef TYPE_1__ HeapTupleData ;
typedef TYPE_2__* HeapTuple ;
typedef TYPE_3__ ExpandedRecordHeader ;
typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_5 ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ,int) ;
 int FUNC_11 (int ) ;
 TYPE_2__* FUNC_12 (TYPE_1__*) ;

Datum
FUNC_13(Datum VAR_6, MemoryContext VAR_7)
{
 ExpandedRecordHeader *VAR_8;
 HeapTupleHeader VAR_9;
 HeapTupleData VAR_10;
 HeapTuple VAR_11;
 MemoryContext VAR_12;
 MemoryContext VAR_13;






 VAR_12 = FUNC_0(VAR_7,
           "expanded record",
           VAR_0);


 VAR_8 = (ExpandedRecordHeader *)
  FUNC_10(VAR_12, sizeof(ExpandedRecordHeader));

 FUNC_4(&VAR_8->hdr, &VAR_4, VAR_12);
 VAR_8->er_magic = VAR_3;






 VAR_9 = FUNC_2(VAR_6);

 VAR_10.t_len = FUNC_5(VAR_9);
 FUNC_9(&(VAR_10.t_self));
 VAR_10.t_tableOid = VAR_5;
 VAR_10.t_data = VAR_9;

 VAR_13 = FUNC_11(VAR_12);
 VAR_11 = FUNC_12(&VAR_10);
 VAR_8->flags |= VAR_1;
 FUNC_11(VAR_13);


 VAR_8->er_decltypeid = VAR_8->er_typeid = FUNC_7(VAR_9);
 VAR_8->er_typmod = FUNC_6(VAR_9);


 VAR_8->fvalue = VAR_11;
 VAR_8->fstartptr = (char *) VAR_11->t_data;
 VAR_8->fendptr = ((char *) VAR_11->t_data) + VAR_11->t_len;
 VAR_8->flags |= VAR_2;


 FUNC_1(!FUNC_8(VAR_9));
 return FUNC_3(&VAR_8->hdr);
}
