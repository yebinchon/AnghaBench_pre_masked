
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tuplestore; int tupledesc; } ;
typedef TYPE_1__ WalRcvExecResult ;
typedef int PGresult ;
typedef int Oid ;
typedef int MemoryContext ;
typedef int HeapTuple ;
typedef scalar_t__ AttrNumber ;
typedef int AttInMetadata ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int *,char**) ;
 int FUNC_2 (int const) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int) ;
 scalar_t__ FUNC_7 (int *,int,int) ;
 char* FUNC_8 (int *,int,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 () ;
 int * FUNC_12 (int ) ;
 int FUNC_13 (int ,scalar_t__,int ,int const,int,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (char*,int const,int) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int,int,int ) ;
 int FUNC_18 (int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_19(PGresult *VAR_5, WalRcvExecResult *VAR_6,
        const int VAR_7, const Oid *VAR_8)
{
 int VAR_9;
 int VAR_10;
 int VAR_11 = FUNC_9(VAR_5);
 HeapTuple VAR_12;
 AttInMetadata *VAR_13;
 MemoryContext VAR_14;
 MemoryContext VAR_15;


 if (VAR_11 != VAR_7)
  FUNC_14(VAR_2,
    (FUNC_16("invalid query response"),
     FUNC_15("Expected %d fields, got %d fields.",
         VAR_7, VAR_11)));

 VAR_6->tuplestore = FUNC_17(1, 0, VAR_4);


 VAR_6->tupledesc = FUNC_2(VAR_7);
 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
  FUNC_13(VAR_6->tupledesc, (AttrNumber) VAR_10 + 1,
         FUNC_6(VAR_5, VAR_10), VAR_8[VAR_10], -1, 0);
 VAR_13 = FUNC_12(VAR_6->tupledesc);


 if (FUNC_10(VAR_5) == 0)
  return;


 VAR_14 = FUNC_0(VAR_1,
            "libpqrcv query result context",
            VAR_0);


 for (VAR_9 = 0; VAR_9 < FUNC_10(VAR_5); VAR_9++)
 {
  char *VAR_16[VAR_3];

  FUNC_11();


  VAR_15 = FUNC_5(VAR_14);




  for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
  {
   if (FUNC_7(VAR_5, VAR_9, VAR_10))
    VAR_16[VAR_10] = ((void*)0);
   else
    VAR_16[VAR_10] = FUNC_8(VAR_5, VAR_9, VAR_10);
  }


  VAR_12 = FUNC_1(VAR_13, VAR_16);
  FUNC_18(VAR_6->tuplestore, VAR_12);


  FUNC_5(VAR_15);
  FUNC_4(VAR_14);
 }

 FUNC_3(VAR_14);
}
