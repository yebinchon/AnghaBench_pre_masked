
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xloc ;
typedef int uint32 ;
typedef int sysid ;
typedef int nulls ;
typedef int XLogRecPtr ;
typedef int TupleDesc ;
typedef int TupOutputState ;
typedef int MemoryContext ;
typedef int DestReceiver ;
typedef int Datum ;
typedef int AttrNumber ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_2 ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (int*,int,int) ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_12 (int ,int ,char*,int ,int,int ) ;
 char* VAR_9 ;
 scalar_t__ VAR_10 ;
 int * FUNC_13 (int *,int ,int *) ;
 int FUNC_14 (int *,int *,int*) ;
 int FUNC_15 (int *) ;
 char* FUNC_16 (scalar_t__) ;
 int FUNC_17 (char*,int,char*,int,...) ;

__attribute__((used)) static void
FUNC_18(void)
{
 char VAR_11[32];
 char VAR_12[VAR_4];
 XLogRecPtr VAR_13;
 char *VAR_14 = ((void*)0);
 DestReceiver *VAR_15;
 TupOutputState *VAR_16;
 TupleDesc VAR_17;
 Datum VAR_18[4];
 bool VAR_19[4];







 FUNC_17(VAR_11, sizeof(VAR_11), VAR_9,
    FUNC_6());

 VAR_10 = FUNC_10();
 if (VAR_10)
 {

  VAR_13 = FUNC_5();
 }
 else
  VAR_13 = FUNC_4();

 FUNC_17(VAR_12, sizeof(VAR_12), "%X/%X", (uint32) (VAR_13 >> 32), (uint32) VAR_13);

 if (VAR_5 != VAR_3)
 {
  MemoryContext VAR_20 = VAR_0;


  FUNC_11();

  FUNC_9(VAR_20);
  VAR_14 = FUNC_16(VAR_5);
  FUNC_1();

  FUNC_9(VAR_20);
 }

 VAR_15 = FUNC_2(VAR_1);
 FUNC_8(VAR_19, 0, sizeof(VAR_19));


 VAR_17 = FUNC_3(4);
 FUNC_12(VAR_17, (AttrNumber) 1, "systemid",
         VAR_6, -1, 0);
 FUNC_12(VAR_17, (AttrNumber) 2, "timeline",
         VAR_2, -1, 0);
 FUNC_12(VAR_17, (AttrNumber) 3, "xlogpos",
         VAR_6, -1, 0);
 FUNC_12(VAR_17, (AttrNumber) 4, "dbname",
         VAR_6, -1, 0);


 VAR_16 = FUNC_13(VAR_15, VAR_17, &VAR_7);


 VAR_18[0] = FUNC_0(VAR_11);


 VAR_18[1] = FUNC_7(VAR_8);


 VAR_18[2] = FUNC_0(VAR_12);


 if (VAR_14)
  VAR_18[3] = FUNC_0(VAR_14);
 else
  VAR_19[3] = 1;


 FUNC_14(VAR_16, VAR_18, VAR_19);

 FUNC_15(VAR_16);
}
