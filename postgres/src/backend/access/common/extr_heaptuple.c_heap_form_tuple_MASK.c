
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_14__ {int t_len; int t_tableOid; int t_self; TYPE_2__* t_data; } ;
struct TYPE_13__ {int t_hoff; int * t_bits; int t_infomask; int t_ctid; } ;
struct TYPE_12__ {int natts; int tdtypmod; int tdtypeid; } ;
typedef int Size ;
typedef TYPE_2__* HeapTupleHeader ;
typedef TYPE_3__* HeapTuple ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int VAR_5 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,int,int) ;
 int FUNC_10 (TYPE_1__*,int *,int*) ;
 int FUNC_11 (TYPE_1__*,int *,int*,char*,int,int *,int *) ;
 int FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (int) ;
 int VAR_6 ;

HeapTuple
FUNC_14(TupleDesc VAR_7,
    Datum *VAR_8,
    bool *VAR_9)
{
 HeapTuple VAR_10;
 HeapTupleHeader VAR_11;
 Size VAR_12,
    VAR_13;
 int VAR_14;
 bool VAR_15 = 0;
 int VAR_16 = VAR_7->natts;
 int VAR_17;

 if (VAR_16 > VAR_5)
  FUNC_7(VAR_1,
    (FUNC_8(VAR_0),
     FUNC_9("number of columns (%d) exceeds limit (%d)",
      VAR_16, VAR_5)));




 for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++)
 {
  if (VAR_9[VAR_17])
  {
   VAR_15 = 1;
   break;
  }
 }




 VAR_12 = FUNC_12(VAR_3, VAR_6);

 if (VAR_15)
  VAR_12 += FUNC_0(VAR_16);

 VAR_14 = VAR_12 = FUNC_6(VAR_12);

 VAR_13 = FUNC_10(VAR_7, VAR_8, VAR_9);

 VAR_12 += VAR_13;





 VAR_10 = (HeapTuple) FUNC_13(VAR_2 + VAR_12);
 VAR_10->t_data = VAR_11 = (HeapTupleHeader) ((char *) VAR_10 + VAR_2);






 VAR_10->t_len = VAR_12;
 FUNC_5(&(VAR_10->t_self));
 VAR_10->t_tableOid = VAR_4;

 FUNC_1(VAR_11, VAR_12);
 FUNC_4(VAR_11, VAR_7->tdtypeid);
 FUNC_3(VAR_11, VAR_7->tdtypmod);

 FUNC_5(&(VAR_11->t_ctid));

 FUNC_2(VAR_11, VAR_16);
 VAR_11->t_hoff = VAR_14;

 FUNC_11(VAR_7,
     VAR_8,
     VAR_9,
     (char *) VAR_11 + VAR_14,
     VAR_13,
     &VAR_11->t_infomask,
     (VAR_15 ? VAR_11->t_bits : ((void*)0)));

 return VAR_10;
}
