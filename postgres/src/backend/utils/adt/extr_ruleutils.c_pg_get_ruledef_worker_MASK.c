
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_6__ {int tupdesc; int * vals; } ;
struct TYPE_5__ {scalar_t__ len; char* data; } ;
typedef TYPE_1__ StringInfoData ;
typedef int * SPIPlanPtr ;
typedef int Oid ;
typedef int HeapTuple ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *,int *,char*,int,int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,int,int *) ;
 int VAR_5 ;
 TYPE_4__* VAR_6 ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int ,int ,int) ;
 int * VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static char *
FUNC_9(Oid VAR_9, int VAR_10)
{
 Datum VAR_11[1];
 char VAR_12[1];
 int VAR_13;
 HeapTuple VAR_14;
 TupleDesc VAR_15;
 StringInfoData VAR_16;




 FUNC_7(&VAR_16);




 if (FUNC_1() != VAR_2)
  FUNC_6(VAR_0, "SPI_connect failed");






 if (VAR_7 == ((void*)0))
 {
  Oid VAR_17[1];
  SPIPlanPtr VAR_18;

  VAR_17[0] = VAR_1;
  VAR_18 = FUNC_5(VAR_8, 1, VAR_17);
  if (VAR_18 == ((void*)0))
   FUNC_6(VAR_0, "SPI_prepare failed for \"%s\"", VAR_8);
  FUNC_4(VAR_18);
  VAR_7 = VAR_18;
 }




 VAR_11[0] = FUNC_0(VAR_9);
 VAR_12[0] = ' ';
 VAR_13 = FUNC_2(VAR_7, VAR_11, VAR_12, 1, 0);
 if (VAR_13 != VAR_4)
  FUNC_6(VAR_0, "failed to get pg_rewrite tuple for rule %u", VAR_9);
 if (VAR_5 != 1)
 {




 }
 else
 {



  VAR_14 = VAR_6->vals[0];
  VAR_15 = VAR_6->tupdesc;
  FUNC_8(&VAR_16, VAR_14, VAR_15, VAR_10);
 }




 if (FUNC_3() != VAR_3)
  FUNC_6(VAR_0, "SPI_finish failed");

 if (VAR_16.len == 0)
  return ((void*)0);

 return VAR_16.data;
}
