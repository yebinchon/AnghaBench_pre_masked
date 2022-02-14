
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int TupleTableSlot ;
typedef int TransactionId ;
typedef int TableScanDesc ;
struct TYPE_9__ {double m; } ;
struct TYPE_8__ {int randstate; } ;
typedef TYPE_1__ ReservoirStateData ;
typedef int Relation ;
typedef int HeapTuple ;
typedef TYPE_2__ BlockSamplerData ;
typedef double BlockNumber ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,double,int,int ) ;
 double FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int VAR_0 ;
 double FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_1 ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (char*,int ,double,double,double,double,int,double) ;
 double FUNC_11 (double) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (void*,int,int,int ) ;
 int FUNC_14 () ;
 double FUNC_15 (TYPE_1__*,double,int) ;
 int FUNC_16 (TYPE_1__*,int) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,double,int ) ;
 scalar_t__ FUNC_21 (int ,int ,double*,double*,int *) ;
 int * FUNC_22 (int ,int *) ;
 int VAR_2 ;
 int FUNC_23 () ;

__attribute__((used)) static int
FUNC_24(Relation VAR_3, int VAR_4,
     HeapTuple *VAR_5, int VAR_6,
     double *VAR_7, double *VAR_8)
{
 int VAR_9 = 0;
 double VAR_10 = 0;
 double VAR_11 = 0;
 double VAR_12 = 0;
 double VAR_13 = -1;
 BlockNumber VAR_14;
 TransactionId VAR_15;
 BlockSamplerData VAR_16;
 ReservoirStateData VAR_17;
 TupleTableSlot *VAR_18;
 TableScanDesc VAR_19;

 FUNC_0(VAR_6 > 0);

 VAR_14 = FUNC_7(VAR_3);


 VAR_15 = FUNC_6(VAR_3, VAR_0);


 FUNC_2(&VAR_16, VAR_14, VAR_6, FUNC_14());

 FUNC_16(&VAR_17, VAR_6);

 VAR_19 = FUNC_18(VAR_3);
 VAR_18 = FUNC_22(VAR_3, ((void*)0));


 while (FUNC_1(&VAR_16))
 {
  BlockNumber VAR_20 = FUNC_3(&VAR_16);

  FUNC_23();

  if (!FUNC_20(VAR_19, VAR_20, VAR_2))
   continue;

  while (FUNC_21(VAR_19, VAR_15, &VAR_11, &VAR_12, VAR_18))
  {
   if (VAR_9 < VAR_6)
    VAR_5[VAR_9++] = FUNC_4(VAR_18);
   else
   {





    if (VAR_13 < 0)
     VAR_13 = FUNC_15(&VAR_17, VAR_10, VAR_6);

    if (VAR_13 <= 0)
    {




     int VAR_21 = (int) (VAR_6 * FUNC_17(VAR_17.randstate));

     FUNC_0(VAR_21 >= 0 && VAR_21 < VAR_6);
     FUNC_12(VAR_5[VAR_21]);
     VAR_5[VAR_21] = FUNC_4(VAR_18);
    }

    VAR_13 -= 1;
   }

   VAR_10 += 1;
  }
 }

 FUNC_5(VAR_18);
 FUNC_19(VAR_19);
 if (VAR_9 == VAR_6)
  FUNC_13((void *) VAR_5, VAR_9, sizeof(HeapTuple), VAR_1);
 if (VAR_16.m > 0)
 {
  *VAR_7 = FUNC_11((VAR_11 / VAR_16.m) * VAR_14 + 0.5);
  *VAR_8 = FUNC_11((VAR_12 / VAR_16.m) * VAR_14 + 0.5);
 }
 else
 {
  *VAR_7 = 0.0;
  *VAR_8 = 0.0;
 }




 FUNC_9(VAR_4,
   (FUNC_10("\"%s\": scanned %d of %u pages, "
     "containing %.0f live rows and %.0f dead rows; "
     "%d rows in sample, %.0f estimated total rows",
     FUNC_8(VAR_3),
     VAR_16.m, VAR_14,
     VAR_11, VAR_12,
     VAR_9, *VAR_7)));

 return VAR_9;
}
