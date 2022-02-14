
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


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *,int *,char*,int,int ) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ,int,int *) ;
 int VAR_6 ;
 TYPE_4__* VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int ,int ,int,int) ;
 int VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static char *
FUNC_11(Oid VAR_12, int VAR_13, int VAR_14)
{
 Datum VAR_15[2];
 char VAR_16[2];
 int VAR_17;
 HeapTuple VAR_18;
 TupleDesc VAR_19;
 StringInfoData VAR_20;




 FUNC_9(&VAR_20);




 if (FUNC_3() != VAR_3)
  FUNC_8(VAR_0, "SPI_connect failed");






 if (VAR_10 == ((void*)0))
 {
  Oid VAR_21[2];
  SPIPlanPtr VAR_22;

  VAR_21[0] = VAR_2;
  VAR_21[1] = VAR_1;
  VAR_22 = FUNC_7(VAR_11, 2, VAR_21);
  if (VAR_22 == ((void*)0))
   FUNC_8(VAR_0, "SPI_prepare failed for \"%s\"", VAR_11);
  FUNC_6(VAR_22);
  VAR_10 = VAR_22;
 }




 VAR_15[0] = FUNC_2(VAR_12);
 VAR_15[1] = FUNC_1(VAR_9, FUNC_0(VAR_8));
 VAR_16[0] = ' ';
 VAR_16[1] = ' ';
 VAR_17 = FUNC_4(VAR_10, VAR_15, VAR_16, 1, 0);
 if (VAR_17 != VAR_5)
  FUNC_8(VAR_0, "failed to get pg_rewrite tuple for view %u", VAR_12);
 if (VAR_6 != 1)
 {




 }
 else
 {



  VAR_18 = VAR_7->vals[0];
  VAR_19 = VAR_7->tupdesc;
  FUNC_10(&VAR_20, VAR_18, VAR_19, VAR_13, VAR_14);
 }




 if (FUNC_5() != VAR_4)
  FUNC_8(VAR_0, "SPI_finish failed");

 if (VAR_20.len == 0)
  return ((void*)0);

 return VAR_20.data;
}
